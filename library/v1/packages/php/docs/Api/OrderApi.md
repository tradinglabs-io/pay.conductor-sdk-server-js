# OpenAPI\Client\OrderApi

Manage charges, check order status, and handle refunds.

All URIs are relative to https://app.payconductor.ai/api/v1, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**orderConfirm()**](OrderApi.md#orderConfirm) | **POST** /orders/{id}/confirm | Confirm Order |
| [**orderCreate()**](OrderApi.md#orderCreate) | **POST** /orders/ | Create Order |
| [**orderList()**](OrderApi.md#orderList) | **GET** /orders/ | List Orders |
| [**orderRead()**](OrderApi.md#orderRead) | **GET** /orders/{id} | Get Order By ID |
| [**orderRefund()**](OrderApi.md#orderRefund) | **POST** /orders/{id}/refund | Refund Order |


## `orderConfirm()`

```php
orderConfirm($id, $order_payment_request): \OpenAPI\Client\Model\OrderConfirmResponse
```

Confirm Order

Confirms a Draft order, setting the payment method and processing the charges associated with the order.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure HTTP basic authorization: basicAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()
              ->setUsername('YOUR_USERNAME')
              ->setPassword('YOUR_PASSWORD');


$apiInstance = new OpenAPI\Client\Api\OrderApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 'id_example'; // string
$order_payment_request = new \OpenAPI\Client\Model\OrderPaymentRequest(); // \OpenAPI\Client\Model\OrderPaymentRequest | Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...)

try {
    $result = $apiInstance->orderConfirm($id, $order_payment_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling OrderApi->orderConfirm: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **string**|  | |
| **order_payment_request** | [**\OpenAPI\Client\Model\OrderPaymentRequest**](../Model/OrderPaymentRequest.md)| Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...) | |

### Return type

[**\OpenAPI\Client\Model\OrderConfirmResponse**](../Model/OrderConfirmResponse.md)

### Authorization

[basicAuth](../../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `orderCreate()`

```php
orderCreate($order_create_request): \OpenAPI\Client\Model\OrderCreateResponse
```

Create Order

Create a new order for payment using the provided data

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure HTTP basic authorization: basicAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()
              ->setUsername('YOUR_USERNAME')
              ->setPassword('YOUR_PASSWORD');


$apiInstance = new OpenAPI\Client\Api\OrderApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$order_create_request = new \OpenAPI\Client\Model\OrderCreateRequest(); // \OpenAPI\Client\Model\OrderCreateRequest | Order data for payment processing

try {
    $result = $apiInstance->orderCreate($order_create_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling OrderApi->orderCreate: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **order_create_request** | [**\OpenAPI\Client\Model\OrderCreateRequest**](../Model/OrderCreateRequest.md)| Order data for payment processing | |

### Return type

[**\OpenAPI\Client\Model\OrderCreateResponse**](../Model/OrderCreateResponse.md)

### Authorization

[basicAuth](../../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `orderList()`

```php
orderList($page, $page_size, $end_date, $start_date, $id, $status)
```

List Orders

Retrieve a list of orders. Use date filter and pagination parameters to refine results as needed.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure HTTP basic authorization: basicAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()
              ->setUsername('YOUR_USERNAME')
              ->setPassword('YOUR_PASSWORD');


$apiInstance = new OpenAPI\Client\Api\OrderApi(
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
$status = 'status_example'; // string

try {
    $apiInstance->orderList($page, $page_size, $end_date, $start_date, $id, $status);
} catch (Exception $e) {
    echo 'Exception when calling OrderApi->orderList: ', $e->getMessage(), PHP_EOL;
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
| **status** | **string**|  | [optional] |

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

## `orderRead()`

```php
orderRead($id)
```

Get Order By ID

Retrieve the complete data of an order by our ID

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure HTTP basic authorization: basicAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()
              ->setUsername('YOUR_USERNAME')
              ->setPassword('YOUR_PASSWORD');


$apiInstance = new OpenAPI\Client\Api\OrderApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 'id_example'; // string

try {
    $apiInstance->orderRead($id);
} catch (Exception $e) {
    echo 'Exception when calling OrderApi->orderRead: ', $e->getMessage(), PHP_EOL;
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

## `orderRefund()`

```php
orderRefund($id)
```

Refund Order

Initiate a refund for the order specified by ID.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure HTTP basic authorization: basicAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()
              ->setUsername('YOUR_USERNAME')
              ->setPassword('YOUR_PASSWORD');


$apiInstance = new OpenAPI\Client\Api\OrderApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 'id_example'; // string

try {
    $apiInstance->orderRefund($id);
} catch (Exception $e) {
    echo 'Exception when calling OrderApi->orderRefund: ', $e->getMessage(), PHP_EOL;
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
