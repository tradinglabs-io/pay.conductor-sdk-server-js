# payconductor_sdk.Api.CardTokenizationApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**CardTokenize**](CardTokenizationApi.md#cardtokenize) | **POST** /card-tokenization/ | Tokenize Card |

<a id="cardtokenize"></a>
# **CardTokenize**
> CardTokenizationCreateResponse CardTokenize (CardTokenizationCreateRequest cardTokenizationCreateRequest)

Tokenize Card

Tokenize credit cards for future charges.


### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **cardTokenizationCreateRequest** | [**CardTokenizationCreateRequest**](CardTokenizationCreateRequest.md) | Data for creating a customer card with customer information |  |

### Return type

[**CardTokenizationCreateResponse**](CardTokenizationCreateResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response containing customer ID and card token |  -  |

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

