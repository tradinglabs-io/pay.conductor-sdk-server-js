# openapi.api.OrderApi

## Load the API package
```dart
import 'package:openapi/api.dart';
```

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**orderConfirm**](OrderApi.md#orderconfirm) | **POST** /orders/{id}/confirm | Confirm Order
[**orderCreate**](OrderApi.md#ordercreate) | **POST** /orders/ | Create Order
[**orderList**](OrderApi.md#orderlist) | **GET** /orders/ | List Orders
[**orderRead**](OrderApi.md#orderread) | **GET** /orders/{id} | Get Order By ID
[**orderRefund**](OrderApi.md#orderrefund) | **POST** /orders/{id}/refund | Refund Order


# **orderConfirm**
> OrderConfirmResponse orderConfirm(id, orderPaymentRequest)

Confirm Order

Confirms a Draft order, setting the payment method and processing the charges associated with the order.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure HTTP basic authorization: basicAuth
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').username = 'YOUR_USERNAME'
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').password = 'YOUR_PASSWORD';

final api = Openapi().getOrderApi();
final String id = id_example; // String | 
final OrderPaymentRequest orderPaymentRequest = ; // OrderPaymentRequest | Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...)

try {
    final response = api.orderConfirm(id, orderPaymentRequest);
    print(response);
} on DioException catch (e) {
    print('Exception when calling OrderApi->orderConfirm: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**|  | 
 **orderPaymentRequest** | [**OrderPaymentRequest**](OrderPaymentRequest.md)| Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...) | 

### Return type

[**OrderConfirmResponse**](OrderConfirmResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **orderCreate**
> OrderCreateResponse orderCreate(orderCreateRequest)

Create Order

Create a new order for payment using the provided data

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure HTTP basic authorization: basicAuth
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').username = 'YOUR_USERNAME'
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').password = 'YOUR_PASSWORD';

final api = Openapi().getOrderApi();
final OrderCreateRequest orderCreateRequest = ; // OrderCreateRequest | Order data for payment processing

try {
    final response = api.orderCreate(orderCreateRequest);
    print(response);
} on DioException catch (e) {
    print('Exception when calling OrderApi->orderCreate: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **orderCreateRequest** | [**OrderCreateRequest**](OrderCreateRequest.md)| Order data for payment processing | 

### Return type

[**OrderCreateResponse**](OrderCreateResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **orderList**
> orderList(page, pageSize, endDate, startDate, id, status)

List Orders

Retrieve a list of orders. Use date filter and pagination parameters to refine results as needed.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure HTTP basic authorization: basicAuth
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').username = 'YOUR_USERNAME'
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').password = 'YOUR_PASSWORD';

final api = Openapi().getOrderApi();
final num page = 8.14; // num | 
final num pageSize = 8.14; // num | 
final DateTime endDate = 2013-10-20T19:20:30+01:00; // DateTime | 
final DateTime startDate = 2013-10-20T19:20:30+01:00; // DateTime | 
final String id = id_example; // String | 
final String status = status_example; // String | 

try {
    api.orderList(page, pageSize, endDate, startDate, id, status);
} on DioException catch (e) {
    print('Exception when calling OrderApi->orderList: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **num**|  | [default to 1]
 **pageSize** | **num**|  | [default to 20]
 **endDate** | **DateTime**|  | [optional] 
 **startDate** | **DateTime**|  | [optional] 
 **id** | **String**|  | [optional] 
 **status** | **String**|  | [optional] 

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **orderRead**
> orderRead(id)

Get Order By ID

Retrieve the complete data of an order by our ID

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure HTTP basic authorization: basicAuth
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').username = 'YOUR_USERNAME'
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').password = 'YOUR_PASSWORD';

final api = Openapi().getOrderApi();
final String id = id_example; // String | 

try {
    api.orderRead(id);
} on DioException catch (e) {
    print('Exception when calling OrderApi->orderRead: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**|  | 

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **orderRefund**
> orderRefund(id)

Refund Order

Initiate a refund for the order specified by ID.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure HTTP basic authorization: basicAuth
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').username = 'YOUR_USERNAME'
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').password = 'YOUR_PASSWORD';

final api = Openapi().getOrderApi();
final String id = id_example; // String | 

try {
    api.orderRefund(id);
} on DioException catch (e) {
    print('Exception when calling OrderApi->orderRefund: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | **String**|  | 

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

