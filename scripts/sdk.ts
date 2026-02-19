#!/usr/bin/env bun

/**
 * SDK Generator Script
 *
 * This script automates two tasks:
 *
 *   1. `download` — Fetches the OpenAPI JSON from the live API, runs a patch
 *      step to fix enum typing issues (see `patchOpenApi`), saves the result
 *      as both JSON and YAML.
 *
 *   2. `generate` — Takes the patched YAML and calls openapi-generator-cli to
 *      produce client SDKs for one or more programming languages.
 *
 * Usage:
 *   bun run sdk download     # Download and patch the OpenAPI spec
 *   bun run sdk generate     # Generate SDKs from the patched spec
 */

const enquirer = require("enquirer");
const rimraf = require("rimraf");

//#region Configuration
const VERSIONS: Record<string, {
  apiUrl: string;
  languages: Record<string, { generator: string; outputDir: string }>;
}> = {
  v1: {
    apiUrl: "https://app.payconductor.ai/api/v1/docs/json",
    languages: {
      typescript: { generator: "typescript-axios",  outputDir: "library/v1/packages/typescript" },
      javascript: { generator: "javascript",         outputDir: "library/v1/packages/javascript" },
      python:     { generator: "python",             outputDir: "library/v1/packages/python"     },
      csharp:     { generator: "csharp",             outputDir: "library/v1/packages/csharp"     },
      ruby:       { generator: "ruby",               outputDir: "library/v1/packages/ruby"       },
      php:        { generator: "php",                outputDir: "library/v1/packages/php"        },
      lua:        { generator: "lua",                outputDir: "library/v1/packages/lua"        },
      go:         { generator: "go",                 outputDir: "library/v1/packages/go"         },
      java:       { generator: "java",               outputDir: "library/v1/packages/java"       },
      kotlin:     { generator: "kotlin",             outputDir: "library/v1/packages/kotlin"     },
      r:          { generator: "r",                  outputDir: "library/v1/packages/r"          },
      rust:       { generator: "rust",               outputDir: "library/v1/packages/rust"       },
      perl:       { generator: "perl",               outputDir: "library/v1/packages/perl"       },
      dart:       { generator: "dart-dio",           outputDir: "library/v1/packages/dart"       },
      elixir:     { generator: "elixir",             outputDir: "library/v1/packages/elixir"     },
      clojure:    { generator: "clojure",            outputDir: "library/v1/packages/clojure"    },
      c:          { generator: "c",                  outputDir: "library/v1/packages/c"          },
    },
  },
};
//#endregion

//#region Helpers
/**
 * Converts a camelCase or PascalCase string to SCREAMING_SNAKE_CASE.
 * Used for `x-enum-varnames` so generators emit descriptive member names.
 *
 * Examples:
 *   "CreditCard" -> "CREDIT_CARD"
 *   "Pix"        -> "PIX"
 */
const toScreamingSnake = (s: string) =>
    s.replace(/([A-Z])/g, "_$1").toUpperCase().replace(/^_/, "");

/**
 * Capitalises the first character of a property key to form a PascalCase
 * schema name used in components/schemas.
 *
 * Examples:
 *   "paymentMethod" -> "PaymentMethod"
 *   "status"        -> "Status"
 */
const toPascalCase = (key: string) =>
    key.charAt(0).toUpperCase() + key.slice(1);

/**
 * Keys that are OpenAPI structural keywords and must NOT be used as enum
 * schema names. We still recurse INTO nodes under these keys — we just
 * don't register the key itself as a schema name.
 *
 * For example: `items` is a keyword for array element schemas, so we should
 * never create a schema called `Items`. But the VALUE under `items` might be
 * a const-string anyOf that we do want to replace with a $ref — so we must
 * still recurse into it.
 */
const SKIP_AS_ENUM_NAME = new Set([
  "items",
  "properties",
  "schema",
  "schemas",
  "components",
  "paths",
  "webhooks",
  "info",
  "servers",
  "tags",
  "security",
  "parameters",
  "responses",
  "requestBody",
  "content",
  "headers",
  "default",
  "required",
  "allOf",
  "oneOf",
  "anyOf",
  "not",
]);

/**
 * Returns true when a node is an anyOf where every branch is a const string.
 *
 * Example in the spec:
 *   anyOf:
 *     - { type: string, const: Pix }
 *     - { type: string, const: CreditCard }
 *
 * openapi-generator cannot resolve this pattern into a typed enum on its own.
 */
const isConstStringAnyOf = (node: any): boolean =>
    Array.isArray(node?.anyOf) &&
    node.anyOf.length > 1 &&
    node.anyOf.every(
        (item: any) => item.type === "string" && typeof item.const === "string"
    );

/**
 * Returns true when a node is a plain string enum.
 *
 * Example:
 *   type: string
 *   enum: [Pending, Completed, Failed]
 */
const isStringEnum = (node: any): boolean =>
    node?.type === "string" &&
    Array.isArray(node?.enum) &&
    node.enum.every((v: any) => typeof v === "string");

/**
 * Builds the enum schema object written into components/schemas.
 *
 * - `enum` is the standard OpenAPI field every generator understands.
 * - `x-enum-varnames` is a widely-supported extension that makes generators
 *   emit descriptive identifiers (e.g. CREDIT_CARD) instead of raw strings.
 */
const buildEnumSchema = (values: string[]) => ({
  type: "string",
  enum: values,
  "x-enum-varnames": values.map(toScreamingSnake),
});
//#endregion

//#region Patcher
/**
 * Patches the raw OpenAPI document in two passes so that openapi-generator
 * produces properly typed enums instead of plain `string` fields.
 *
 * THE PROBLEM
 *
 * The spec defines string-typed discriminated fields in two ways that
 * openapi-generator handles poorly:
 *
 *   1. anyOf const unions — used for `paymentMethod`, webhook `status`, and
 *      inline array item schemas like `availablePaymentMethods.items`.
 *      The generator falls back to `object`, losing all type information.
 *
 *   2. Inline string enums — used for `status`, `documentType`, `pixType`.
 *      The generator creates anonymous, non-reusable duplicates.
 *
 * THE SOLUTION
 *
 *   Pass 1 – Collect
 *     Walk the entire document (except components/schemas which we're about
 *     to write). For each property whose VALUE is a const-string anyOf or a
 *     plain string enum, record the values under the property key name — BUT
 *     only when the key is not an OpenAPI structural keyword. Keys in
 *     SKIP_AS_ENUM_NAME are still recursed into; we just don't use the key
 *     itself as the schema name.
 *
 *     Special case — inline array item schemas:
 *     When a node directly IS a const-string anyOf (i.e. the parent key is
 *     `items`), we collect it under a name derived from the grandparent
 *     property key (e.g. `availablePaymentMethods` → `AvailablePaymentMethods`).
 *     This is handled by passing an optional `parentName` through the recursion.
 *
 *   Pass 2 – Replace
 *     Walk again (skipping components/schemas to prevent circular $ref loops).
 *     Wherever a matching inline definition is found, swap it for a $ref.
 *     For array `items` nodes that directly match, replace the whole `items`
 *     value rather than a named property inside it.
 *
 * SKIP DURING REPLACEMENT
 *
 * Without this guard the replace pass would visit the freshly-written schemas,
 * find that they match isStringEnum, and overwrite them with:
 *
 *   Status: { $ref: '#/components/schemas/Status' }  ← circular self-reference
 *
 * The generator would then crash or produce empty models.
 */
const patchOpenApi = (data: any): any => {
  data.components ??= {};
  data.components.schemas ??= {};

  /**
   * Registry: PascalCase schema name → set of string enum values.
   * Using a Set deduplicates values found in multiple locations.
   */
  const enumRegistry = new Map<string, Set<string>>();

  const registerValues = (name: string, values: string[]) => {
    if (!enumRegistry.has(name)) enumRegistry.set(name, new Set());
    for (const v of values) enumRegistry.get(name)!.add(v);
  };

  // --- Pass 1: Collect ---
  const collect = (node: any, parentName?: string) => {
    if (Array.isArray(node)) { node.forEach((n) => collect(n, parentName)); return; }
    if (typeof node !== "object" || node === null) return;

    // If this node itself is an enum pattern (happens when the parent key is
    // `items`), register it under the name derived from the grandparent key.
    if (parentName && !SKIP_AS_ENUM_NAME.has(parentName.toLowerCase())) {
      if (isConstStringAnyOf(node)) {
        registerValues(toPascalCase(parentName), node.anyOf.map((i: any) => i.const as string));
        return; // no need to recurse further into this node
      }
      if (isStringEnum(node)) {
        registerValues(toPascalCase(parentName), node.enum as string[]);
        return;
      }
    }

    for (const key of Object.keys(node)) {
      const child = node[key];
      if (typeof child !== "object" || child === null) continue;

      if (!SKIP_AS_ENUM_NAME.has(key)) {
        // This key is a domain property — check if its value is an enum pattern.
        if (isConstStringAnyOf(child)) {
          registerValues(toPascalCase(key), child.anyOf.map((i: any) => i.const as string));
          // Still recurse in case there are nested enums inside (e.g. objects with more properties).
          collect(child, key);
          continue;
        }
        if (isStringEnum(child)) {
          registerValues(toPascalCase(key), child.enum as string[]);
          collect(child, key);
          continue;
        }
      }

      // Recurse into all nodes regardless, passing the current key as
      // parentName so that direct-value patterns (like array `items`) are
      // caught in the next level.
      collect(child, key);
    }
  };

  // Collect from the full document except components/schemas (which we write).
  const { schemas: _ignored, ...otherComponents } = data.components;
  collect({ ...data, components: { ...otherComponents } });

  // Write collected enums into components/schemas (skip trivial single values).
  for (const [name, values] of enumRegistry) {
    if (values.size < 2) continue;
    data.components.schemas[name] = buildEnumSchema([...values]);
  }

  // --- Pass 2: Replace inline definitions with $ref ---
  const replace = (node: any, insideSchemas = false): any => {
    if (Array.isArray(node)) return node.map((n) => replace(n, insideSchemas));
    if (typeof node !== "object" || node === null) return node;

    // Never modify anything already inside components/schemas — those are the
    // canonical definitions we just wrote; replacing them would create circular
    // self-referencing $refs that break the generator.
    if (insideSchemas) return node;

    for (const key of Object.keys(node)) {
      const child = node[key];
      if (typeof child !== "object" || child === null) continue;

      // Detect entry into the components/schemas subtree.
      const enteringSchemas =
          key === "schemas" &&
          Object.keys(node).some((k) =>
              ["securitySchemes", "schemas", "parameters"].includes(k)
          );

      if (enteringSchemas) {
        node[key] = replace(child, true);
        continue;
      }

      // For `items` (array element schema): if its value directly matches an
      // enum pattern, replace it with the $ref derived from the parent key.
      // We can't use `items` itself as a schema name, so we look it up by
      // the name that was registered during collect (parentName).
      if (key === "items" && (isConstStringAnyOf(child) || isStringEnum(child))) {
        // Find a registered schema whose values match this node's values.
        const nodeValues = isConstStringAnyOf(child)
            ? child.anyOf.map((i: any) => i.const as string)
            : (child.enum as string[]);
        const nodeSet = new Set(nodeValues);

        const matchingSchema = [...enumRegistry.entries()].find(([, values]) => {
          if (values.size !== nodeSet.size) return false;
          return [...nodeSet].every((v) => values.has(String(v)));
        });

        if (matchingSchema) {
          node[key] = { $ref: `#/components/schemas/${matchingSchema[0]}` };
          continue;
        }
      }

      if (!SKIP_AS_ENUM_NAME.has(key)) {
        const name = toPascalCase(key);
        const registered = enumRegistry.get(name);

        if (
            registered &&
            registered.size >= 2 &&
            (isConstStringAnyOf(child) || isStringEnum(child))
        ) {
          // Swap the inline definition for a reference to the shared schema.
          node[key] = { $ref: `#/components/schemas/${name}` };
          continue;
        }
      }

      node[key] = replace(child, false);
    }

    return node;
  };

  return replace(data);
};
//#endregion

//#region Commands
/**
 * Downloads the OpenAPI spec for a given version, applies the enum patch, and
 * saves the result as both JSON (for inspection) and YAML (consumed by the
 * generator, since openapi-format normalises and sorts the document).
 */
const downloadOpenApi = async (version: string) => {
  const config = VERSIONS[version];
  const outputJson = `library/${version}/src/openapi.json`;
  const outputYaml = `library/${version}/src/openapi.yaml`;

  console.log(`Downloading OpenAPI ${version}...`);

  const response = await fetch(config!.apiUrl);
  let data: any = await response.json();

  console.log("Patching OpenAPI schema (lifting enums to components/schemas)...");
  data = patchOpenApi(data);

  const addedSchemas = Object.keys(data.components.schemas);
  console.log(`Schemas added: ${addedSchemas.join(", ")}`);

  await Bun.write(outputJson, JSON.stringify(data, null, 2));
  console.log(`Saved to ${outputJson}`);

  // openapi-format normalises field ordering and removes redundant whitespace,
  // producing a clean YAML file that is easier to diff and review.
  await Bun.spawn(["bunx", "openapi-format", outputJson, "-o", outputYaml]);
  console.log(`Formatted to ${outputYaml}`);
};

/**
 * Runs openapi-generator-cli for each selected language.
 *
 * The output directory is wiped before each generation run so that removed or
 * renamed operations don't leave stale files behind.
 */
const generateSdk = async (version: string, languages: string[]) => {
  const config = VERSIONS[version]!;
  const openapiFile = `library/${version}/src/openapi.yaml`;

  for (const lang of languages) {
    const langConfig = config.languages[lang]!;

    console.log(`\n--- Generating ${lang} ---`);

    // Clean the output directory to avoid accumulating outdated generated files.
    rimraf.sync(langConfig.outputDir);

    const proc = await Bun.spawn([
      "./node_modules/.bin/openapi-generator-cli", "generate",
      "-i", openapiFile,
      "-g", langConfig.generator,
      "-o", langConfig.outputDir,
      "--skip-validate-spec",
      "--additional-properties=packageName=payconductor_sdk,projectName=payconductor-sdk,npmName=payconductor-sdk,npmRepository=https://github.com/payconductor-ai/payconductor-sdk.git",
    ]);

    await proc.exited;
    console.log(`SDK generated in ${langConfig.outputDir}/`);
  }
};
//#endregion

//#region Entry point
const run = async () => {
  const command = process.argv[2];
  const versionKeys = Object.keys(VERSIONS);

  if (!command || command === "download") {
    console.log("\n=== Download OpenAPI ===");

    const version = await enquirer.autocomplete({
      name: "version",
      message: "Select version",
      initial: 0,
      choices: versionKeys,
    });

    await downloadOpenApi(version);
    console.log("Done!");
    return;
  }

  if (command === "generate") {
    console.log("\n=== Generate SDK ===");

    const version = await enquirer.autocomplete({
      name: "version",
      message: "Select version",
      initial: 0,
      choices: versionKeys,
    });

    const langKeys = Object.keys(VERSIONS[version]!.languages);

    console.log("\nUse space to select, enter to confirm\n");

    const languages = await enquirer.multiselect({
      name: "languages",
      message: "Select languages",
      initial: 0,
      choices: langKeys,
    });

    if (languages.length === 0) {
      console.log("No languages selected.");
      process.exit(1);
    }

    console.log(`\nGenerating SDKs: ${languages.join(", ")}`);
    await generateSdk(version, languages);
    console.log("\nDone!");
    return;
  }

  console.log("Usage:");
  console.log("  bun run sdk download   # Download and patch the OpenAPI spec");
  console.log("  bun run sdk generate   # Generate SDKs from the patched spec");
};

run();
//#endregion