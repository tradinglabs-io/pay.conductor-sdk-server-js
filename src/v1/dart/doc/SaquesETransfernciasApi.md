# openapi.api.SaquesETransfernciasApi

## Load the API package
```dart
import 'package:openapi/api.dart';
```

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getWithdraws**](SaquesETransfernciasApi.md#getwithdraws) | **GET** /withdraws/ | Lista os saques
[**getWithdrawsById**](SaquesETransfernciasApi.md#getwithdrawsbyid) | **GET** /withdraws/{id} | Buscar pelo ID
[**postWithdraws**](SaquesETransfernciasApi.md#postwithdraws) | **POST** /withdraws/ | Cria saque


# **getWithdraws**
> getWithdraws(period, page, pageSize, endDate, startDate, id)

Lista os saques

Retorna uma lista paginada de saques e transferências. Permite filtrar por data de criação ou buscar por ID (ID do saque, ID externo, ID da adquirente ou End2EndID)

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure HTTP basic authorization: basicAuth
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').username = 'YOUR_USERNAME'
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').password = 'YOUR_PASSWORD';

final api = Openapi().getSaquesETransfernciasApi();
final String period = period_example; // String | 
final num page = 8.14; // num | 
final num pageSize = 8.14; // num | 
final DateTime endDate = 2013-10-20T19:20:30+01:00; // DateTime | 
final DateTime startDate = 2013-10-20T19:20:30+01:00; // DateTime | 
final String id = id_example; // String | 

try {
    api.getWithdraws(period, page, pageSize, endDate, startDate, id);
} on DioException catch (e) {
    print('Exception when calling SaquesETransfernciasApi->getWithdraws: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **period** | **String**|  | [default to 'Last7Days']
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

# **getWithdrawsById**
> getWithdrawsById(id)

Buscar pelo ID

Retorna os detalhes de um saque ou transferência específico usando seu ID

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure HTTP basic authorization: basicAuth
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').username = 'YOUR_USERNAME'
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').password = 'YOUR_PASSWORD';

final api = Openapi().getSaquesETransfernciasApi();
final String id = id_example; // String | 

try {
    api.getWithdrawsById(id);
} on DioException catch (e) {
    print('Exception when calling SaquesETransfernciasApi->getWithdrawsById: $e\n');
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

# **postWithdraws**
> PostWithdraws200Response postWithdraws(postWithdrawsRequest)

Cria saque

Realiza um novo saque ou transferência para a conta de pagamento informada

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure HTTP basic authorization: basicAuth
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').username = 'YOUR_USERNAME'
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').password = 'YOUR_PASSWORD';

final api = Openapi().getSaquesETransfernciasApi();
final PostWithdrawsRequest postWithdrawsRequest = ; // PostWithdrawsRequest | 

try {
    final response = api.postWithdraws(postWithdrawsRequest);
    print(response);
} on DioException catch (e) {
    print('Exception when calling SaquesETransfernciasApi->postWithdraws: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **postWithdrawsRequest** | [**PostWithdrawsRequest**](PostWithdrawsRequest.md)|  | 

### Return type

[**PostWithdraws200Response**](PostWithdraws200Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

