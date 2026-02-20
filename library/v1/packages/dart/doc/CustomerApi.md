# openapi.api.CustomerApi

## Load the API package
```dart
import 'package:openapi/api.dart';
```

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**customerCreate**](CustomerApi.md#customercreate) | **POST** /customers/ | Create New Customer
[**customerListCustom**](CustomerApi.md#customerlistcustom) | **GET** /customers/ | Get All Customers
[**customerRead**](CustomerApi.md#customerread) | **GET** /customers/{id} | Get Customer By ID
[**customerUpdate**](CustomerApi.md#customerupdate) | **PATCH** /customers/{id} | Update Customer Data


# **customerCreate**
> CustomerReadResponse customerCreate(customerCreateRequest)

Create New Customer

Create a new customer by providing the required data in the request body.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure HTTP basic authorization: basicAuth
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').username = 'YOUR_USERNAME'
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').password = 'YOUR_PASSWORD';

final api = Openapi().getCustomerApi();
final CustomerCreateRequest customerCreateRequest = ; // CustomerCreateRequest | Schema for creating a new customer

try {
    final response = api.customerCreate(customerCreateRequest);
    print(response);
} on DioException catch (e) {
    print('Exception when calling CustomerApi->customerCreate: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **customerCreateRequest** | [**CustomerCreateRequest**](CustomerCreateRequest.md)| Schema for creating a new customer | 

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **customerListCustom**
> CustomerListResponse customerListCustom(page, pageSize, email, name, endDate, startDate)

Get All Customers

Retrieve a list of all customers associated with the organization, with support for filters and pagination.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure HTTP basic authorization: basicAuth
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').username = 'YOUR_USERNAME'
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').password = 'YOUR_PASSWORD';

final api = Openapi().getCustomerApi();
final num page = 8.14; // num | 
final num pageSize = 8.14; // num | 
final String email = email_example; // String | 
final String name = name_example; // String | 
final DateTime endDate = 2013-10-20T19:20:30+01:00; // DateTime | 
final DateTime startDate = 2013-10-20T19:20:30+01:00; // DateTime | 

try {
    final response = api.customerListCustom(page, pageSize, email, name, endDate, startDate);
    print(response);
} on DioException catch (e) {
    print('Exception when calling CustomerApi->customerListCustom: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **num**|  | [default to 1]
 **pageSize** | **num**|  | [default to 20]
 **email** | **String**|  | [optional] 
 **name** | **String**|  | [optional] 
 **endDate** | **DateTime**|  | [optional] 
 **startDate** | **DateTime**|  | [optional] 

### Return type

[**CustomerListResponse**](CustomerListResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **customerRead**
> CustomerReadResponse customerRead(id)

Get Customer By ID

Retrieve the complete details of a specific customer using their unique ID.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure HTTP basic authorization: basicAuth
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').username = 'YOUR_USERNAME'
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').password = 'YOUR_PASSWORD';

final api = Openapi().getCustomerApi();
final String id = id_example; // String | 

try {
    final response = api.customerRead(id);
    print(response);
} on DioException catch (e) {
    print('Exception when calling CustomerApi->customerRead: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**|  | 

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **customerUpdate**
> CustomerReadResponse customerUpdate(id, customerUpdateRequest)

Update Customer Data

Update the information of an existing customer by providing the new data in the request body.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure HTTP basic authorization: basicAuth
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').username = 'YOUR_USERNAME'
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').password = 'YOUR_PASSWORD';

final api = Openapi().getCustomerApi();
final String id = id_example; // String | 
final CustomerUpdateRequest customerUpdateRequest = ; // CustomerUpdateRequest | Schema for updating customer information

try {
    final response = api.customerUpdate(id, customerUpdateRequest);
    print(response);
} on DioException catch (e) {
    print('Exception when calling CustomerApi->customerUpdate: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**|  | 
 **customerUpdateRequest** | [**CustomerUpdateRequest**](CustomerUpdateRequest.md)| Schema for updating customer information | 

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

