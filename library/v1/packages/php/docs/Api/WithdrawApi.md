# OpenAPI\Client\WithdrawApi



All URIs are relative to https://app.payconductor.ai/api/v1, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**withdrawCreate()**](WithdrawApi.md#withdrawCreate) | **POST** /withdraws/ | Create Withdrawal |
| [**withdrawList()**](WithdrawApi.md#withdrawList) | **GET** /withdraws/ | List Withdrawals |
| [**withdrawRead()**](WithdrawApi.md#withdrawRead) | **GET** /withdraws/{id} | Get Withdrawal By ID |


## `withdrawCreate()`

```php
withdrawCreate($withdraw_create_request): \OpenAPI\Client\Model\WithdrawCreateResponse
```

Create Withdrawal

Create a new withdrawal or transfer to the provided payment account

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure HTTP basic authorization: basicAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()
              ->setUsername('YOUR_USERNAME')
              ->setPassword('YOUR_PASSWORD');


$apiInstance = new OpenAPI\Client\Api\WithdrawApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$withdraw_create_request = new \OpenAPI\Client\Model\WithdrawCreateRequest(); // \OpenAPI\Client\Model\WithdrawCreateRequest | Withdrawal or transfer request data

try {
    $result = $apiInstance->withdrawCreate($withdraw_create_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling WithdrawApi->withdrawCreate: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **withdraw_create_request** | [**\OpenAPI\Client\Model\WithdrawCreateRequest**](../Model/WithdrawCreateRequest.md)| Withdrawal or transfer request data | |

### Return type

[**\OpenAPI\Client\Model\WithdrawCreateResponse**](../Model/WithdrawCreateResponse.md)

### Authorization

[basicAuth](../../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `withdrawList()`

```php
withdrawList($page, $page_size, $end_date, $start_date, $id)
```

List Withdrawals

Returns a paginated list of withdrawals and transfers. Filter by creation date or search by ID (withdrawal ID, external ID, acquirer ID, or End2EndID)

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure HTTP basic authorization: basicAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()
              ->setUsername('YOUR_USERNAME')
              ->setPassword('YOUR_PASSWORD');


$apiInstance = new OpenAPI\Client\Api\WithdrawApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$page = 1; // float
$page_size = 20; // float
$end_date = new \DateTime('2013-10-20T19:20:30+01:00'); // \DateTime
$start_date = new \DateTime('2013-10-20T19:20:30+01:00'); // \DateTime
$id = 'id_example'; // string

try {
    $apiInstance->withdrawList($page, $page_size, $end_date, $start_date, $id);
} catch (Exception $e) {
    echo 'Exception when calling WithdrawApi->withdrawList: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
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

## `withdrawRead()`

```php
withdrawRead($id)
```

Get Withdrawal By ID

Returns the details of a specific withdrawal or transfer using its ID

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure HTTP basic authorization: basicAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()
              ->setUsername('YOUR_USERNAME')
              ->setPassword('YOUR_PASSWORD');


$apiInstance = new OpenAPI\Client\Api\WithdrawApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 'id_example'; // string

try {
    $apiInstance->withdrawRead($id);
} catch (Exception $e) {
    echo 'Exception when calling WithdrawApi->withdrawRead: ', $e->getMessage(), PHP_EOL;
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
