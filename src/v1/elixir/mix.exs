defmodule PayConductorAPI.Mixfile do
  use Mix.Project

  def project do
    [
      app: :payconductor_sdk,
      version: "1.0.0",
      elixir: "~> 1.18",
      build_embedded: Mix.env() == :prod,
      start_permanent: Mix.env() == :prod,
      package: package(),
      description: """
      # Introdução  Esta documentação cobre todas as funcionalidades disponíveis na API RESTful do PayConductor, incluindo autenticação, gerenciamento de recursos e exemplos de uso.  &lt;br /&gt;  &lt;br /&gt;  ----  &lt;br /&gt;   # Autenticação  A API do PayConductor utiliza autenticação HTTP Basic para validar requisições. Você precisa fornecer suas credenciais (Client ID e Client Secret) no formato &#x60;client:secret&#x60; codificado em Base64.  &lt;br /&gt;  ## Obtendo Credenciais  1. Acesse o painel administrativo do PayConductor 2. Navegue até **Configurações &gt; API Keys** 3. Gere um novo par de credenciais (Client ID e Client Secret) 4. Guarde o Client Secret em local seguro - ele não será exibido novamente  &lt;br /&gt;  ## Formato de Autenticação  As credenciais devem ser enviadas no header &#x60;Authorization&#x60; usando o esquema Basic:  &#x60;&#x60;&#x60; Authorization: Basic base64(client_id:client_secret) &#x60;&#x60;&#x60;  &lt;br /&gt;  ## Exemplo em Node.js  &#x60;&#x60;&#x60;javascript const clientId &#x3D; &#39;seu_client_id&#39;; const clientSecret &#x3D; &#39;seu_client_secret&#39;;  // Codifica as credenciais em Base64 const credentials &#x3D; Buffer.from(&#x60;${clientId}:${clientSecret}&#x60;).toString(&#39;base64&#39;);  const response &#x3D; await fetch(&#39;https://api.payconductor.com/api/v1/orders&#39;, {   method: &#39;GET&#39;,   headers: {     &#39;Authorization&#39;: &#x60;Basic ${credentials}&#x60;,     &#39;Content-Type&#39;: &#39;application/json&#39;   } });  const data &#x3D; await response.json(); console.log(data); &#x60;&#x60;&#x60;  &lt;br /&gt;  ## Erros de Autenticação  | Código | Descrição | |--------|-----------| | &#x60;401&#x60;  | Credenciais inválidas ou ausentes | | &#x60;403&#x60;  | Credenciais válidas, mas sem permissão para o recurso | | &#x60;429&#x60;  | Muitas requisições (rate limit excedido) |  ### Exemplo de resposta de erro  &#x60;&#x60;&#x60;json {   \&quot;error\&quot;: {     \&quot;code\&quot;: \&quot;UNAUTHORIZED\&quot;,     \&quot;message\&quot;: \&quot;Invalid credentials\&quot;,     \&quot;details\&quot;: \&quot;The provided client ID or secret is incorrect\&quot;   } } &#x60;&#x60;&#x60;
      """,
      deps: deps()
    ]
  end

  # Configuration for the OTP application
  #
  # Type "mix help compile.app" for more information
  def application do
    # Specify extra applications you'll use from Erlang/Elixir
    [extra_applications: [:logger]]
  end

  # Dependencies can be Hex packages:
  #
  #   {:my_dep, "~> 0.3.0"}
  #
  # Or git/path repositories:
  #
  #   {:my_dep, git: "https://github.com/elixir-lang/my_dep.git", tag: "0.3.0"}
  #
  # Type "mix help deps" for more examples and options
  defp deps do
    [
      {:tesla, "~> 1.14"},
      {:ex_doc, "~> 0.37.3", only: :dev, runtime: false},
      {:dialyxir, "~> 1.4", only: [:dev, :test], runtime: false}
    ]
  end

   defp package do
      [
        name: "payconductor_sdk",
        files: ~w(.formatter.exs config lib mix.exs README* LICENSE*),
      ]
  end
end
