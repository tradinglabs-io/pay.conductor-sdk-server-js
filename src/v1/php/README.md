# payconductor-sdk

# Introdução

Esta documentação cobre todas as funcionalidades disponíveis na API RESTful do PayConductor, incluindo autenticação, gerenciamento de recursos e exemplos de uso.

<br />

<br />

----

<br />


# Autenticação

A API do PayConductor utiliza autenticação HTTP Basic para validar requisições. Você precisa fornecer suas credenciais (Client ID e Client Secret) no formato `client:secret` codificado em Base64.

<br />

## Obtendo Credenciais

1. Acesse o painel administrativo do PayConductor
2. Navegue até **Configurações > API Keys**
3. Gere um novo par de credenciais (Client ID e Client Secret)
4. Guarde o Client Secret em local seguro - ele não será exibido novamente

<br />

## Formato de Autenticação

As credenciais devem ser enviadas no header `Authorization` usando o esquema Basic:

```
Authorization: Basic base64(client_id:client_secret)
```

<br />

## Exemplo em Node.js

```javascript
const clientId = 'seu_client_id';
const clientSecret = 'seu_client_secret';

// Codifica as credenciais em Base64
const credentials = Buffer.from(`${clientId}:${clientSecret}`).toString('base64');

const response = await fetch('https://api.payconductor.com/api/v1/orders', {
  method: 'GET',
  headers: {
    'Authorization': `Basic ${credentials}`,
    'Content-Type': 'application/json'
  }
});

const data = await response.json();
console.log(data);
```

<br />

## Erros de Autenticação

| Código | Descrição |
|--------|-----------|
| `401`  | Credenciais inválidas ou ausentes |
| `403`  | Credenciais válidas, mas sem permissão para o recurso |
| `429`  | Muitas requisições (rate limit excedido) |

### Exemplo de resposta de erro

```json
{
  \"error\": {
    \"code\": \"UNAUTHORIZED\",
    \"message\": \"Invalid credentials\",
    \"details\": \"The provided client ID or secret is incorrect\"
  }
}
```


## Installation & Usage

### Requirements

PHP 8.1 and later.

### Composer

To install the bindings via [Composer](https://getcomposer.org/), add the following to `composer.json`:

```json
{
  "repositories": [
    {
      "type": "vcs",
      "url": "https://github.com/GIT_USER_ID/GIT_REPO_ID.git"
    }
  ],
  "require": {
    "GIT_USER_ID/GIT_REPO_ID": "*@dev"
  }
}
```

Then run `composer install`

### Manual Installation

Download the files and include `autoload.php`:

```php
<?php
require_once('/path/to/payconductor-sdk/vendor/autoload.php');
```

## Getting Started

Please follow the [installation procedure](#installation--usage) and then run the following:

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');



// Configure HTTP basic authorization: basicAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()
              ->setUsername('YOUR_USERNAME')
              ->setPassword('YOUR_PASSWORD');


$apiInstance = new OpenAPI\Client\Api\PedidosApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$period = 'Last7Days'; // string
$page = 1; // float
$page_size = 20; // float
$end_date = new \DateTime('2013-10-20T19:20:30+01:00'); // \DateTime
$start_date = new \DateTime('2013-10-20T19:20:30+01:00'); // \DateTime
$id = 'id_example'; // string
$status = 'status_example'; // string

try {
    $apiInstance->getOrders($period, $page, $page_size, $end_date, $start_date, $id, $status);
} catch (Exception $e) {
    echo 'Exception when calling PedidosApi->getOrders: ', $e->getMessage(), PHP_EOL;
}

```

## API Endpoints

All URIs are relative to *https://app.payconductor.ai/api/v1*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*PedidosApi* | [**getOrders**](docs/Api/PedidosApi.md#getorders) | **GET** /orders/ | Listar pedidos
*PedidosApi* | [**getOrdersById**](docs/Api/PedidosApi.md#getordersbyid) | **GET** /orders/{id} | Buscar pelo ID
*PedidosApi* | [**postOrders**](docs/Api/PedidosApi.md#postorders) | **POST** /orders/ | Criar pedido
*PedidosApi* | [**postOrdersByIdRefund**](docs/Api/PedidosApi.md#postordersbyidrefund) | **POST** /orders/{id}/refund | Reembolsar pedido
*SaquesETransfernciasApi* | [**getWithdraws**](docs/Api/SaquesETransfernciasApi.md#getwithdraws) | **GET** /withdraws/ | Lista os saques
*SaquesETransfernciasApi* | [**getWithdrawsById**](docs/Api/SaquesETransfernciasApi.md#getwithdrawsbyid) | **GET** /withdraws/{id} | Buscar pelo ID
*SaquesETransfernciasApi* | [**postWithdraws**](docs/Api/SaquesETransfernciasApi.md#postwithdraws) | **POST** /withdraws/ | Cria saque

## Models

- [Boleto](docs/Model/Boleto.md)
- [BoletoExpirationInDays](docs/Model/BoletoExpirationInDays.md)
- [CartODeCrDito](docs/Model/CartODeCrDito.md)
- [CartODeCrDitoCard](docs/Model/CartODeCrDitoCard.md)
- [CartODeCrDitoInstallments](docs/Model/CartODeCrDitoInstallments.md)
- [CartOTokenizado](docs/Model/CartOTokenizado.md)
- [Cliente](docs/Model/Cliente.md)
- [DadosCompletosDoCartO](docs/Model/DadosCompletosDoCartO.md)
- [DadosCompletosDoCartOExpiration](docs/Model/DadosCompletosDoCartOExpiration.md)
- [EndereODoCliente](docs/Model/EndereODoCliente.md)
- [MerchantInput](docs/Model/MerchantInput.md)
- [NuPay](docs/Model/NuPay.md)
- [NuPayNuPay](docs/Model/NuPayNuPay.md)
- [PicPay](docs/Model/PicPay.md)
- [Pix](docs/Model/Pix.md)
- [PixExpirationInSeconds](docs/Model/PixExpirationInSeconds.md)
- [PostOrders200Response](docs/Model/PostOrders200Response.md)
- [PostOrders200ResponseBankSlip](docs/Model/PostOrders200ResponseBankSlip.md)
- [PostOrders200ResponseCreditCard](docs/Model/PostOrders200ResponseCreditCard.md)
- [PostOrders200ResponseNuPay](docs/Model/PostOrders200ResponseNuPay.md)
- [PostOrders200ResponseOrderItemsInner](docs/Model/PostOrders200ResponseOrderItemsInner.md)
- [PostOrders200ResponsePicPay](docs/Model/PostOrders200ResponsePicPay.md)
- [PostOrders200ResponsePix](docs/Model/PostOrders200ResponsePix.md)
- [PostOrders200ResponseSession](docs/Model/PostOrders200ResponseSession.md)
- [PostOrdersRequest](docs/Model/PostOrdersRequest.md)
- [PostOrdersRequestFingerprints](docs/Model/PostOrdersRequestFingerprints.md)
- [PostOrdersRequestItemsInner](docs/Model/PostOrdersRequestItemsInner.md)
- [PostOrdersRequestPayment](docs/Model/PostOrdersRequestPayment.md)
- [PostOrdersRequestSession](docs/Model/PostOrdersRequestSession.md)
- [PostWithdraws200Response](docs/Model/PostWithdraws200Response.md)
- [PostWithdraws200ResponsePayedAt](docs/Model/PostWithdraws200ResponsePayedAt.md)
- [PostWithdraws200ResponsePayoutAccount](docs/Model/PostWithdraws200ResponsePayoutAccount.md)
- [PostWithdrawsRequest](docs/Model/PostWithdrawsRequest.md)
- [PostWithdrawsRequestPayoutAccount](docs/Model/PostWithdrawsRequestPayoutAccount.md)

## Authorization

Authentication schemes defined for the API:
### basicAuth

- **Type**: HTTP basic authentication

## Tests

To run the tests, use:

```bash
composer install
vendor/bin/phpunit
```

## Author



## About this package

This PHP package is automatically generated by the [OpenAPI Generator](https://openapi-generator.tech) project:

- API version: `1.0.0`
    - Generator version: `7.20.0`
- Build package: `org.openapitools.codegen.languages.PhpClientCodegen`
