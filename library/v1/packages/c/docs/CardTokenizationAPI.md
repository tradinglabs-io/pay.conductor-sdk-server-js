# CardTokenizationAPI

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CardTokenizationAPI_cardTokenize**](CardTokenizationAPI.md#CardTokenizationAPI_cardTokenize) | **POST** /card-tokenization/ | Tokenize Card


# **CardTokenizationAPI_cardTokenize**
```c
// Tokenize Card
//
// Tokenize credit cards for future charges.
//
card_tokenization_create_response_t* CardTokenizationAPI_cardTokenize(apiClient_t *apiClient, card_tokenization_create_request_t *card_tokenization_create_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**card_tokenization_create_request** | **[card_tokenization_create_request_t](card_tokenization_create_request.md) \*** | Data for creating a customer card with customer information | 

### Return type

[card_tokenization_create_response_t](card_tokenization_create_response.md) *


### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

