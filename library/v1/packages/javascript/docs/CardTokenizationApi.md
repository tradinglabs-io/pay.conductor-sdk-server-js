# PayconductorSdk.CardTokenizationApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**cardTokenize**](CardTokenizationApi.md#cardTokenize) | **POST** /card-tokenization/ | Tokenize Card



## cardTokenize

> CardTokenizationCreateResponse cardTokenize(cardTokenizationCreateRequest)

Tokenize Card

Tokenize credit cards for future charges.

### Example

```javascript
import PayconductorSdk from 'payconductor-sdk';
let defaultClient = PayconductorSdk.ApiClient.instance;
// Configure HTTP basic authorization: basicAuth
let basicAuth = defaultClient.authentications['basicAuth'];
basicAuth.username = 'YOUR USERNAME';
basicAuth.password = 'YOUR PASSWORD';

let apiInstance = new PayconductorSdk.CardTokenizationApi();
let cardTokenizationCreateRequest = new PayconductorSdk.CardTokenizationCreateRequest(); // CardTokenizationCreateRequest | Data for creating a customer card with customer information
apiInstance.cardTokenize(cardTokenizationCreateRequest, (error, data, response) => {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
});
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

