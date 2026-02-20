# CardTokenizationApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

| Method | HTTP request | Description |
| ------------- | ------------- | ------------- |
| [**cardTokenize**](CardTokenizationApi.md#cardTokenize) | **POST** /card-tokenization/ | Tokenize Card |


<a id="cardTokenize"></a>
# **cardTokenize**
> CardTokenizationCreateResponse cardTokenize(cardTokenizationCreateRequest)

Tokenize Card

Tokenize credit cards for future charges.

### Example
```kotlin
// Import classes:
//import payconductor_sdk.infrastructure.*
//import payconductor_sdk.models.*

val apiInstance = CardTokenizationApi()
val cardTokenizationCreateRequest : CardTokenizationCreateRequest =  // CardTokenizationCreateRequest | Data for creating a customer card with customer information
try {
    val result : CardTokenizationCreateResponse = apiInstance.cardTokenize(cardTokenizationCreateRequest)
    println(result)
} catch (e: ClientException) {
    println("4xx response calling CardTokenizationApi#cardTokenize")
    e.printStackTrace()
} catch (e: ServerException) {
    println("5xx response calling CardTokenizationApi#cardTokenize")
    e.printStackTrace()
}
```

### Parameters
| Name | Type | Description  | Notes |
| ------------- | ------------- | ------------- | ------------- |
| **cardTokenizationCreateRequest** | [**CardTokenizationCreateRequest**](CardTokenizationCreateRequest.md)| Data for creating a customer card with customer information | |

### Return type

[**CardTokenizationCreateResponse**](CardTokenizationCreateResponse.md)

### Authorization


Configure basicAuth:
    ApiClient.username = ""
    ApiClient.password = ""

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

