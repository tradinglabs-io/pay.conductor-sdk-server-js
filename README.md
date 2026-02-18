# PayConductor SDK

Multi-language SDKs for the PayConductor API. Generate client libraries in multiple programming languages to integrate with PayConductor payment services.

## About

PayConductor is a payment orchestration platform that provides APIs for:

- **Card Tokenization** - Generate and manage credit card tokens
- **Customers** - Create and manage customer data
- **Orders** - Create and manage payment orders
- **Withdrawals & Transfers** - Process withdrawals and transfers

This repository contains generated SDKs in multiple programming languages to simplify integration with the PayConductor API.

## Features

- Multi-language support (C, C#, Clojure, Dart, Elixir, Go, Java, JavaScript, Kotlin, Lua, Perl, PHP, Python, R, Ruby, Rust, TypeScript)
- Auto-generated from OpenAPI specification
- Versioned SDKs (currently v1)
- Interactive CLI for SDK generation

## Project Structure

```
pay.conductor-sdk/
├── src/
│   └── v1/                    # API Version
│       ├── openapi.json       # OpenAPI specification (JSON)
│       ├── openapi.yaml       # OpenAPI specification (YAML)
│       ├── c/                 # C SDK
│       ├── clojure/           # Clojure SDK
│       ├── csharp/            # C# SDK
│       ├── dart/              # Dart SDK
│       ├── elixir/            # Elixir SDK
│       ├── go/                # Go SDK
│       ├── java/              # Java SDK
│       ├── javascript/        # JavaScript SDK
│       ├── kotlin/            # Kotlin SDK
│       ├── lua/               # Lua SDK
│       ├── perl/              # Perl SDK
│       ├── php/               # PHP SDK
│       ├── python/            # Python SDK
│       ├── r/                 # R SDK
│       ├── ruby/              # Ruby SDK
│       ├── rust/              # Rust SDK
│       └── typescript/        # TypeScript SDK
├── scripts/
│   └── sdk.ts                 # CLI for SDK generation
├── package.json               # Node.js dependencies
├── tsconfig.json              # TypeScript configuration
└── README.md                  # This file
```

## Requirements

- [Bun](https://bun.sh/) - JavaScript runtime and package manager
- [Java](https://www.java.com/) - Required for OpenAPI Generator

## Installation

```bash
# Install dependencies
bun install
```

## Usage

### Download OpenAPI Specification

```bash
# Interactive: select version
bun run sdk

# Or explicitly
bun run sdk download
```

### Generate SDKs

```bash
# Interactive: select version and languages (use space to multi-select)
bun run sdk generate

# Generate all SDKs for v1
# (select "all" in the language prompt)
```

### Available Languages

| Language | Directory |
|----------|-----------|
| C | `src/v1/c` |
| C# | `src/v1/csharp` |
| Clojure | `src/v1/clojure` |
| Dart | `src/v1/dart` |
| Elixir | `src/v1/elixir` |
| Go | `src/v1/go` |
| Java | `src/v1/java` |
| JavaScript | `src/v1/javascript` |
| Kotlin | `src/v1/kotlin` |
| Lua | `src/v1/lua` |
| Perl | `src/v1/perl` |
| PHP | `src/v1/php` |
| Python | `src/v1/python` |
| R | `src/v1/r` |
| Ruby | `src/v1/ruby` |
| Rust | `src/v1/rust` |
| TypeScript | `src/v1/typescript` |

## Adding a New Language

To add support for a new language:

1. Edit `scripts/sdk.ts`
2. Add the language to the `VERSIONS.v1.languages` object:

```typescript
const VERSIONS: Record<string, { apiUrl: string; languages: Record<string, { generator: string; outputDir: string }> }> = {
  v1: {
    apiUrl: "https://app.payconductor.ai/api/v1/docs/json",
    languages: {
      // Add new language here
      newlang: { 
        generator: "newlang",  // OpenAPI Generator name
        outputDir: "src/v1/newlang" 
      },
    },
  },
};
```

3. Run `bun run sdk generate` to generate the new SDK

## Adding a New Version

To add a new API version:

1. Edit `scripts/sdk.ts`
2. Add the new version to the `VERSIONS` object:

```typescript
const VERSIONS: Record<string, { apiUrl: string; languages: Record<string, {...}> }> = {
  v1: { ... },
  v2: {
    apiUrl: "https://app.payconductor.ai/api/v2/docs/json",
    languages: { ... },
  },
};
```

## Authentication

The PayConductor API uses HTTP Basic Authentication. You'll need:

1. **Client ID** - Your application's client identifier
2. **Client Secret** - Your application's secret key

### Example: Encoding Credentials

```javascript
const clientId = 'your_client_id';
const clientSecret = 'your_client_secret';

const credentials = Buffer.from(`${clientId}:${clientSecret}`).toString('base64');
// Result: "eW91cl9jbGllbnRfaWQ6eW91cl9jbGllbnRfc2VjcmV0"
```

Then use in requests:

```javascript
fetch('https://app.payconductor.ai/api/v1/orders/', {
  headers: {
    'Authorization': `Basic ${credentials}`,
    'Content-Type': 'application/json'
  }
});
```

## API Reference

### Card Tokenization

- `POST /cards/tokenization` - Generate a credit card token

### Customers

- `POST /customers/` - Create a new customer
- `GET /customers/` - List customers
- `GET /customers/{id}` - Get customer by ID
- `PATCH /customers/{id}` - Update customer
- `DELETE /customers/{id}` - Delete customer

### Orders

- `POST /orders/` - Create a new payment order
- `GET /orders/` - List orders with filters
- `GET /orders/{id}` - Get order by ID
- `POST /orders/{id}/refund` - Refund an order

### Withdrawals & Transfers

- `POST /withdraws/` - Create a withdrawal/transfer
- `GET /withdraws/` - List withdrawals
- `GET /withdraws/{id}` - Get withdrawal by ID

## License

Private - All rights reserved

## Support

For API support, contact PayConductor directly through their official channels.
