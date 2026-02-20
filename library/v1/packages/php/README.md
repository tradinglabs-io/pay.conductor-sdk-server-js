# payconductor_sdk

PayConductor API Documentation.

This documentation covers all available features in the PayConductor RESTful API, including authentication, resource management, and usage examples.

<br />

<br />

----

<br />


# Authentication

PayConductor API uses HTTP Basic authentication to validate requests. You need to provide your credentials (Client ID and Client Secret) in the `client:secret` format encoded in Base64.

<br />

## Getting Credentials

1. Access the PayConductor admin panel
2. Navigate to **Settings > API Keys**
3. Generate a new credentials pair (Client ID and Client Secret)
4. Store the Client Secret in a secure location - it will not be displayed again

<br />

## Authentication Format

Credentials must be sent in the `Authorization` header using the Basic scheme:

```
Authorization: Basic base64(client_id:client_secret)
```

<br />

## Node.js Example

```javascript
const clientId = 'your_client_id';
const clientSecret = 'your_client_secret';

// Encode credentials in Base64
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

## Authentication Errors

| Code | Description |
|------|-------------|
| `401` | Invalid or missing credentials |
| `403` | Valid credentials but no permission for the resource |
| `429` | Too many requests (rate limit exceeded) |

### Error Response Example

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
require_once('/path/to/payconductor_sdk/vendor/autoload.php');
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


$apiInstance = new OpenAPI\Client\Api\CardTokenizationApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$card_tokenization_create_request = new \OpenAPI\Client\Model\CardTokenizationCreateRequest(); // \OpenAPI\Client\Model\CardTokenizationCreateRequest | Data for creating a customer card with customer information

try {
    $result = $apiInstance->cardTokenize($card_tokenization_create_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CardTokenizationApi->cardTokenize: ', $e->getMessage(), PHP_EOL;
}

```

## API Endpoints

All URIs are relative to *https://app.payconductor.ai/api/v1*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*CardTokenizationApi* | [**cardTokenize**](docs/Api/CardTokenizationApi.md#cardtokenize) | **POST** /card-tokenization/ | Tokenize Card
*CustomerApi* | [**customerCreate**](docs/Api/CustomerApi.md#customercreate) | **POST** /customers/ | Create New Customer
*CustomerApi* | [**customerListCustom**](docs/Api/CustomerApi.md#customerlistcustom) | **GET** /customers/ | Get All Customers
*CustomerApi* | [**customerRead**](docs/Api/CustomerApi.md#customerread) | **GET** /customers/{id} | Get Customer By ID
*CustomerApi* | [**customerUpdate**](docs/Api/CustomerApi.md#customerupdate) | **PATCH** /customers/{id} | Update Customer Data
*OrderApi* | [**orderConfirm**](docs/Api/OrderApi.md#orderconfirm) | **POST** /orders/{id}/confirm | Confirm Order
*OrderApi* | [**orderCreate**](docs/Api/OrderApi.md#ordercreate) | **POST** /orders/ | Create Order
*OrderApi* | [**orderList**](docs/Api/OrderApi.md#orderlist) | **GET** /orders/ | List Orders
*OrderApi* | [**orderRead**](docs/Api/OrderApi.md#orderread) | **GET** /orders/{id} | Get Order By ID
*OrderApi* | [**orderRefund**](docs/Api/OrderApi.md#orderrefund) | **POST** /orders/{id}/refund | Refund Order
*WithdrawApi* | [**withdrawCreate**](docs/Api/WithdrawApi.md#withdrawcreate) | **POST** /withdraws/ | Create Withdrawal
*WithdrawApi* | [**withdrawList**](docs/Api/WithdrawApi.md#withdrawlist) | **GET** /withdraws/ | List Withdrawals
*WithdrawApi* | [**withdrawRead**](docs/Api/WithdrawApi.md#withdrawread) | **GET** /withdraws/{id} | Get Withdrawal By ID

## Models

- [AddressCreateRequest](docs/Model/AddressCreateRequest.md)
- [AvailablePaymentMethods](docs/Model/AvailablePaymentMethods.md)
- [CardCreateRequest](docs/Model/CardCreateRequest.md)
- [CardExpirationData](docs/Model/CardExpirationData.md)
- [CardTokenizationCreateRequest](docs/Model/CardTokenizationCreateRequest.md)
- [CardTokenizationCreateRequestCustomer](docs/Model/CardTokenizationCreateRequestCustomer.md)
- [CardTokenizationCreateResponse](docs/Model/CardTokenizationCreateResponse.md)
- [CardTokenizationCustomerByIdData](docs/Model/CardTokenizationCustomerByIdData.md)
- [CustomerAddressResponse](docs/Model/CustomerAddressResponse.md)
- [CustomerCreateRequest](docs/Model/CustomerCreateRequest.md)
- [CustomerListPagination](docs/Model/CustomerListPagination.md)
- [CustomerListResponse](docs/Model/CustomerListResponse.md)
- [CustomerReadResponse](docs/Model/CustomerReadResponse.md)
- [CustomerUpdateRequest](docs/Model/CustomerUpdateRequest.md)
- [DocumentType](docs/Model/DocumentType.md)
- [Event](docs/Model/Event.md)
- [MerchantInput](docs/Model/MerchantInput.md)
- [OrderBankSlipInfo](docs/Model/OrderBankSlipInfo.md)
- [OrderBankSlipPaymentRequest](docs/Model/OrderBankSlipPaymentRequest.md)
- [OrderConfirmResponse](docs/Model/OrderConfirmResponse.md)
- [OrderCreateRequest](docs/Model/OrderCreateRequest.md)
- [OrderCreateRequestSession](docs/Model/OrderCreateRequestSession.md)
- [OrderCreateResponse](docs/Model/OrderCreateResponse.md)
- [OrderCreateResponseOrderItemsInner](docs/Model/OrderCreateResponseOrderItemsInner.md)
- [OrderCreateResponseSession](docs/Model/OrderCreateResponseSession.md)
- [OrderCreditCardInfo](docs/Model/OrderCreditCardInfo.md)
- [OrderCreditCardPaymentRequest](docs/Model/OrderCreditCardPaymentRequest.md)
- [OrderCreditCardPaymentRequestCard](docs/Model/OrderCreditCardPaymentRequestCard.md)
- [OrderDraftPaymentRequest](docs/Model/OrderDraftPaymentRequest.md)
- [OrderFraudFingerprints](docs/Model/OrderFraudFingerprints.md)
- [OrderItemData](docs/Model/OrderItemData.md)
- [OrderNuPayInfo](docs/Model/OrderNuPayInfo.md)
- [OrderNuPayPaymentRequest](docs/Model/OrderNuPayPaymentRequest.md)
- [OrderNuPayPaymentRequestNuPay](docs/Model/OrderNuPayPaymentRequestNuPay.md)
- [OrderPIXInfo](docs/Model/OrderPIXInfo.md)
- [OrderPIXPaymentRequest](docs/Model/OrderPIXPaymentRequest.md)
- [OrderPaymentRequest](docs/Model/OrderPaymentRequest.md)
- [OrderPicPayInfo](docs/Model/OrderPicPayInfo.md)
- [OrderPicPayPaymentRequest](docs/Model/OrderPicPayPaymentRequest.md)
- [OrderTokenizedCardData](docs/Model/OrderTokenizedCardData.md)
- [PaymentMethod](docs/Model/PaymentMethod.md)
- [PixType](docs/Model/PixType.md)
- [Status](docs/Model/Status.md)
- [WithdrawCreateRequest](docs/Model/WithdrawCreateRequest.md)
- [WithdrawCreateResponse](docs/Model/WithdrawCreateResponse.md)
- [WithdrawCreateResponsePayedAt](docs/Model/WithdrawCreateResponsePayedAt.md)
- [WithdrawCreateResponsePayoutAccount](docs/Model/WithdrawCreateResponsePayoutAccount.md)
- [WithdrawPayoutAccountData](docs/Model/WithdrawPayoutAccountData.md)

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
