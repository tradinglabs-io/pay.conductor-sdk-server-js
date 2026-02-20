# OpenAPI\Client\CardTokenizationApi



All URIs are relative to https://app.payconductor.ai/api/v1, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**cardTokenize()**](CardTokenizationApi.md#cardTokenize) | **POST** /card-tokenization/ | Tokenize Card |


## `cardTokenize()`

```php
cardTokenize($card_tokenization_create_request): \OpenAPI\Client\Model\CardTokenizationCreateResponse
```

Tokenize Card

Tokenize credit cards for future charges.

### Example

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

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **card_tokenization_create_request** | [**\OpenAPI\Client\Model\CardTokenizationCreateRequest**](../Model/CardTokenizationCreateRequest.md)| Data for creating a customer card with customer information | |

### Return type

[**\OpenAPI\Client\Model\CardTokenizationCreateResponse**](../Model/CardTokenizationCreateResponse.md)

### Authorization

[basicAuth](../../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
