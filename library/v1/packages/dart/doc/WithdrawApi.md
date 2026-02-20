# openapi.api.WithdrawApi

## Load the API package
```dart
import 'package:openapi/api.dart';
```

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**withdrawCreate**](WithdrawApi.md#withdrawcreate) | **POST** /withdraws/ | Create Withdrawal
[**withdrawList**](WithdrawApi.md#withdrawlist) | **GET** /withdraws/ | List Withdrawals
[**withdrawRead**](WithdrawApi.md#withdrawread) | **GET** /withdraws/{id} | Get Withdrawal By ID


# **withdrawCreate**
> WithdrawCreateResponse withdrawCreate(withdrawCreateRequest)

Create Withdrawal

Create a new withdrawal or transfer to the provided payment account

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure HTTP basic authorization: basicAuth
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').username = 'YOUR_USERNAME'
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').password = 'YOUR_PASSWORD';

final api = Openapi().getWithdrawApi();
final WithdrawCreateRequest withdrawCreateRequest = ; // WithdrawCreateRequest | Withdrawal or transfer request data

try {
    final response = api.withdrawCreate(withdrawCreateRequest);
    print(response);
} on DioException catch (e) {
    print('Exception when calling WithdrawApi->withdrawCreate: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **withdrawCreateRequest** | [**WithdrawCreateRequest**](WithdrawCreateRequest.md)| Withdrawal or transfer request data | 

### Return type

[**WithdrawCreateResponse**](WithdrawCreateResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **withdrawList**
> withdrawList(page, pageSize, endDate, startDate, id)

List Withdrawals

Returns a paginated list of withdrawals and transfers. Filter by creation date or search by ID (withdrawal ID, external ID, acquirer ID, or End2EndID)

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure HTTP basic authorization: basicAuth
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').username = 'YOUR_USERNAME'
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').password = 'YOUR_PASSWORD';

final api = Openapi().getWithdrawApi();
final num page = 8.14; // num | 
final num pageSize = 8.14; // num | 
final DateTime endDate = 2013-10-20T19:20:30+01:00; // DateTime | 
final DateTime startDate = 2013-10-20T19:20:30+01:00; // DateTime | 
final String id = id_example; // String | 

try {
    api.withdrawList(page, pageSize, endDate, startDate, id);
} on DioException catch (e) {
    print('Exception when calling WithdrawApi->withdrawList: $e\n');
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

### Return type

void (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **withdrawRead**
> withdrawRead(id)

Get Withdrawal By ID

Returns the details of a specific withdrawal or transfer using its ID

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure HTTP basic authorization: basicAuth
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').username = 'YOUR_USERNAME'
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').password = 'YOUR_PASSWORD';

final api = Openapi().getWithdrawApi();
final String id = id_example; // String | 

try {
    api.withdrawRead(id);
} on DioException catch (e) {
    print('Exception when calling WithdrawApi->withdrawRead: $e\n');
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

