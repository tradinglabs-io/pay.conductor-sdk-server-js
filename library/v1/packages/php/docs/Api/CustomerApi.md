# OpenAPI\Client\CustomerApi

Manage customers, create, update, delete and list customers.

All URIs are relative to https://app.payconductor.ai/api/v1, except if the operation defines another base path.

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**customerCreate()**](CustomerApi.md#customerCreate) | **POST** /customers/ | Create New Customer |
| [**customerListCustom()**](CustomerApi.md#customerListCustom) | **GET** /customers/ | Get All Customers |
| [**customerRead()**](CustomerApi.md#customerRead) | **GET** /customers/{id} | Get Customer By ID |
| [**customerUpdate()**](CustomerApi.md#customerUpdate) | **PATCH** /customers/{id} | Update Customer Data |


## `customerCreate()`

```php
customerCreate($customer_create_request): \OpenAPI\Client\Model\CustomerReadResponse
```

Create New Customer

Create a new customer by providing the required data in the request body.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure HTTP basic authorization: basicAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()
              ->setUsername('YOUR_USERNAME')
              ->setPassword('YOUR_PASSWORD');


$apiInstance = new OpenAPI\Client\Api\CustomerApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$customer_create_request = new \OpenAPI\Client\Model\CustomerCreateRequest(); // \OpenAPI\Client\Model\CustomerCreateRequest | Schema for creating a new customer

try {
    $result = $apiInstance->customerCreate($customer_create_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CustomerApi->customerCreate: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **customer_create_request** | [**\OpenAPI\Client\Model\CustomerCreateRequest**](../Model/CustomerCreateRequest.md)| Schema for creating a new customer | |

### Return type

[**\OpenAPI\Client\Model\CustomerReadResponse**](../Model/CustomerReadResponse.md)

### Authorization

[basicAuth](../../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `customerListCustom()`

```php
customerListCustom($page, $page_size, $email, $name, $end_date, $start_date): \OpenAPI\Client\Model\CustomerListResponse
```

Get All Customers

Retrieve a list of all customers associated with the organization, with support for filters and pagination.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure HTTP basic authorization: basicAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()
              ->setUsername('YOUR_USERNAME')
              ->setPassword('YOUR_PASSWORD');


$apiInstance = new OpenAPI\Client\Api\CustomerApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$page = 1; // float
$page_size = 20; // float
$email = 'email_example'; // string
$name = 'name_example'; // string
$end_date = new \DateTime('2013-10-20T19:20:30+01:00'); // \DateTime
$start_date = new \DateTime('2013-10-20T19:20:30+01:00'); // \DateTime

try {
    $result = $apiInstance->customerListCustom($page, $page_size, $email, $name, $end_date, $start_date);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CustomerApi->customerListCustom: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **page** | **float**|  | [default to 1] |
| **page_size** | **float**|  | [default to 20] |
| **email** | **string**|  | [optional] |
| **name** | **string**|  | [optional] |
| **end_date** | **\DateTime**|  | [optional] |
| **start_date** | **\DateTime**|  | [optional] |

### Return type

[**\OpenAPI\Client\Model\CustomerListResponse**](../Model/CustomerListResponse.md)

### Authorization

[basicAuth](../../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `customerRead()`

```php
customerRead($id): \OpenAPI\Client\Model\CustomerReadResponse
```

Get Customer By ID

Retrieve the complete details of a specific customer using their unique ID.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure HTTP basic authorization: basicAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()
              ->setUsername('YOUR_USERNAME')
              ->setPassword('YOUR_PASSWORD');


$apiInstance = new OpenAPI\Client\Api\CustomerApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 'id_example'; // string

try {
    $result = $apiInstance->customerRead($id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CustomerApi->customerRead: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **string**|  | |

### Return type

[**\OpenAPI\Client\Model\CustomerReadResponse**](../Model/CustomerReadResponse.md)

### Authorization

[basicAuth](../../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)

## `customerUpdate()`

```php
customerUpdate($id, $customer_update_request): \OpenAPI\Client\Model\CustomerReadResponse
```

Update Customer Data

Update the information of an existing customer by providing the new data in the request body.

### Example

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');


// Configure HTTP basic authorization: basicAuth
$config = OpenAPI\Client\Configuration::getDefaultConfiguration()
              ->setUsername('YOUR_USERNAME')
              ->setPassword('YOUR_PASSWORD');


$apiInstance = new OpenAPI\Client\Api\CustomerApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client(),
    $config
);
$id = 'id_example'; // string
$customer_update_request = new \OpenAPI\Client\Model\CustomerUpdateRequest(); // \OpenAPI\Client\Model\CustomerUpdateRequest | Schema for updating customer information

try {
    $result = $apiInstance->customerUpdate($id, $customer_update_request);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling CustomerApi->customerUpdate: ', $e->getMessage(), PHP_EOL;
}
```

### Parameters

| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **id** | **string**|  | |
| **customer_update_request** | [**\OpenAPI\Client\Model\CustomerUpdateRequest**](../Model/CustomerUpdateRequest.md)| Schema for updating customer information | |

### Return type

[**\OpenAPI\Client\Model\CustomerReadResponse**](../Model/CustomerReadResponse.md)

### Authorization

[basicAuth](../../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: `application/json`
- **Accept**: `application/json`

[[Back to top]](#) [[Back to API list]](../../README.md#endpoints)
[[Back to Model list]](../../README.md#models)
[[Back to README]](../../README.md)
