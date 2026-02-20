# openapi.api.CardTokenizationApi

## Load the API package
```dart
import 'package:openapi/api.dart';
```

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**cardTokenize**](CardTokenizationApi.md#cardtokenize) | **POST** /card-tokenization/ | Tokenize Card


# **cardTokenize**
> CardTokenizationCreateResponse cardTokenize(cardTokenizationCreateRequest)

Tokenize Card

Tokenize credit cards for future charges.

### Example
```dart
import 'package:openapi/api.dart';
// TODO Configure HTTP basic authorization: basicAuth
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').username = 'YOUR_USERNAME'
//defaultApiClient.getAuthentication<HttpBasicAuth>('basicAuth').password = 'YOUR_PASSWORD';

final api = Openapi().getCardTokenizationApi();
final CardTokenizationCreateRequest cardTokenizationCreateRequest = ; // CardTokenizationCreateRequest | Data for creating a customer card with customer information

try {
    final response = api.cardTokenize(cardTokenizationCreateRequest);
    print(response);
} on DioException catch (e) {
    print('Exception when calling CardTokenizationApi->cardTokenize: $e\n');
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cardTokenizationCreateRequest** | [**CardTokenizationCreateRequest**](CardTokenizationCreateRequest.md)| Data for creating a customer card with customer information | 

### Return type

[**CardTokenizationCreateResponse**](CardTokenizationCreateResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

