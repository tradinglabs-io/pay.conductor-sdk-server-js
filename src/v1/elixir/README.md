# PayConductorAPI

# Introdução  Esta documentação cobre todas as funcionalidades disponíveis na API RESTful do PayConductor, incluindo autenticação, gerenciamento de recursos e exemplos de uso.  &lt;br /&gt;  &lt;br /&gt;  ----  &lt;br /&gt;   # Autenticação  A API do PayConductor utiliza autenticação HTTP Basic para validar requisições. Você precisa fornecer suas credenciais (Client ID e Client Secret) no formato &#x60;client:secret&#x60; codificado em Base64.  &lt;br /&gt;  ## Obtendo Credenciais  1. Acesse o painel administrativo do PayConductor 2. Navegue até **Configurações &gt; API Keys** 3. Gere um novo par de credenciais (Client ID e Client Secret) 4. Guarde o Client Secret em local seguro - ele não será exibido novamente  &lt;br /&gt;  ## Formato de Autenticação  As credenciais devem ser enviadas no header &#x60;Authorization&#x60; usando o esquema Basic:  &#x60;&#x60;&#x60; Authorization: Basic base64(client_id:client_secret) &#x60;&#x60;&#x60;  &lt;br /&gt;  ## Exemplo em Node.js  &#x60;&#x60;&#x60;javascript const clientId &#x3D; &#39;seu_client_id&#39;; const clientSecret &#x3D; &#39;seu_client_secret&#39;;  // Codifica as credenciais em Base64 const credentials &#x3D; Buffer.from(&#x60;${clientId}:${clientSecret}&#x60;).toString(&#39;base64&#39;);  const response &#x3D; await fetch(&#39;https://api.payconductor.com/api/v1/orders&#39;, {   method: &#39;GET&#39;,   headers: {     &#39;Authorization&#39;: &#x60;Basic ${credentials}&#x60;,     &#39;Content-Type&#39;: &#39;application/json&#39;   } });  const data &#x3D; await response.json(); console.log(data); &#x60;&#x60;&#x60;  &lt;br /&gt;  ## Erros de Autenticação  | Código | Descrição | |--------|-----------| | &#x60;401&#x60;  | Credenciais inválidas ou ausentes | | &#x60;403&#x60;  | Credenciais válidas, mas sem permissão para o recurso | | &#x60;429&#x60;  | Muitas requisições (rate limit excedido) |  ### Exemplo de resposta de erro  &#x60;&#x60;&#x60;json {   \&quot;error\&quot;: {     \&quot;code\&quot;: \&quot;UNAUTHORIZED\&quot;,     \&quot;message\&quot;: \&quot;Invalid credentials\&quot;,     \&quot;details\&quot;: \&quot;The provided client ID or secret is incorrect\&quot;   } } &#x60;&#x60;&#x60;

## Building

To install the required dependencies and to build the elixir project, run:

```console
mix local.hex --force
mix do deps.get, compile
```

## Installation

If [available in Hex][], the package can be installed by adding `payconductor_sdk` to
your list of dependencies in `mix.exs`:

```elixir
def deps do
  [{:payconductor_sdk, "~> 1.0.0"}]
end
```

Documentation can be generated with [ExDoc][] and published on [HexDocs][]. Once published, the docs can be found at
[https://hexdocs.pm/payconductor_sdk][docs].

## Configuration

You can override the URL of your server (e.g. if you have a separate development and production server in your
configuration files).

```elixir
config :payconductor_sdk, base_url: "https://app.payconductor.ai/api/v1"
```

Multiple clients for the same API with different URLs can be created passing different `base_url`s when calling
`PayConductorAPI.Connection.new/1`:

```elixir
client = PayConductorAPI.Connection.new(base_url: "https://app.payconductor.ai/api/v1")
```

[exdoc]: https://github.com/elixir-lang/ex_doc
[hexdocs]: https://hexdocs.pm
[available in hex]: https://hex.pm/docs/publish
[docs]: https://hexdocs.pm/payconductor_sdk
