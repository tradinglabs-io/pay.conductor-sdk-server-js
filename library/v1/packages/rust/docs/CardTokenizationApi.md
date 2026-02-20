# \CardTokenizationApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**card_tokenize**](CardTokenizationApi.md#card_tokenize) | **POST** /card-tokenization/ | Tokenize Card



## card_tokenize

> models::CardTokenizationCreateResponse card_tokenize(card_tokenization_create_request)
Tokenize Card

Tokenize credit cards for future charges.

### Parameters


Name | Type | Description  | Required | Notes
------------- | ------------- | ------------- | ------------- | -------------
**card_tokenization_create_request** | [**CardTokenizationCreateRequest**](CardTokenizationCreateRequest.md) | Data for creating a customer card with customer information | [required] |

### Return type

[**models::CardTokenizationCreateResponse**](Card_Tokenization_Create_Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

