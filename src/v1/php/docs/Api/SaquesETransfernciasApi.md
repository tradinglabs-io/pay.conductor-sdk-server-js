# OpenAPI\Client\SaquesETransfernciasApi



All URIs are relative to https://app.payconductor.ai/api/v1, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**getWithdraws()**](SaquesETransfernciasApi.md#getWithdraws) | **GET** /withdraws/ | Lista os saques |
| [**getWithdrawsById()**](SaquesETransfernciasApi.md#getWithdrawsById) | **GET** /withdraws/{id} | Buscar pelo ID |
| [**postWithdraws()**](SaquesETransfernciasApi.md#postWithdraws) | **POST** /withdraws/ | Cria saque |


## `getWithdraws()`

```php
getWithdraws($period, $page, $page_size, $end_date, $start_date, $id)
```

Lista os saques

Retorna uma lista paginada de saques e transferências. Permite filtrar por data de criação ou buscar por ID (ID do saque, ID externo, ID da adquirente ou End2EndID)

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure HTTP basic authorization: basicAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()
              ->setUsername('YOUR_USERNAME')
              ->setPassword('YOUR_PASSWORD');


$apiInstance = new OpenAPI\Client\Api\SaquesETransfernciasApi(
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

try {
    $apiInstance->getWithdraws($period, $page, $page_size, $end_date, $start_date, $id);
} catch (Exception $e) {
    echo 'Exception when calling SaquesETransfernciasApi->getWithdraws: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **period** | **string**|  | [default to &#39;Last7Days&#39;] |
| **page** | **float**|  | [default to 1] |
| **page_size** | **float**|  | [default to 20] |
| **end_date** | **\DateTime**|  | [optional] |
| **start_date** | **\DateTime**|  | [optional] |
| **id** | **string**|  | [optional] |

### Return type

void (empty response body)

### Authorization

[basicAuth](../../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `getWithdrawsById()`

```php
getWithdrawsById($id)
```

Buscar pelo ID

Retorna os detalhes de um saque ou transferência específico usando seu ID

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure HTTP basic authorization: basicAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()
              ->setUsername('YOUR_USERNAME')
              ->setPassword('YOUR_PASSWORD');


$apiInstance = new OpenAPI\Client\Api\SaquesETransfernciasApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 'id_example'; // string

try {
    $apiInstance->getWithdrawsById($id);
} catch (Exception $e) {
    echo 'Exception when calling SaquesETransfernciasApi->getWithdrawsById: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **string**|  | |

### Return type

void (empty response body)

### Authorization

[basicAuth](../../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `postWithdraws()`

```php
postWithdraws($post_withdraws_request): \OpenAPI\Client\Model\PostWithdraws200Response
```

Cria saque

Realiza um novo saque ou transferência para a conta de pagamento informada

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure HTTP basic authorization: basicAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()
              ->setUsername('YOUR_USERNAME')
              ->setPassword('YOUR_PASSWORD');


$apiInstance = new OpenAPI\Client\Api\SaquesETransfernciasApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$post_withdraws_request = new \OpenAPI\Client\Model\PostWithdrawsRequest(); // \OpenAPI\Client\Model\PostWithdrawsRequest

try {
    $result = $apiInstance->postWithdraws($post_withdraws_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling SaquesETransfernciasApi->postWithdraws: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **post_withdraws_request** | [**\OpenAPI\Client\Model\PostWithdrawsRequest**](../Model/PostWithdrawsRequest.md)|  | |

### Return type

[**\OpenAPI\Client\Model\PostWithdraws200Response**](../Model/PostWithdraws200Response.md)

### Authorization

[basicAuth](../../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
