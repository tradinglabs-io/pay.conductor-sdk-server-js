# CardTokenizationApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CardTokenize**](CardTokenizationApi.md#CardTokenize) | **POST** /card-tokenization/ | Tokenize Card


# **CardTokenize**
> CardTokenizationCreateResponse CardTokenize(card_tokenization_create_request)

Tokenize Card

Tokenize credit cards for future charges.

### Example
```R
library(payconductor_sdk)

# Tokenize Card
#
# prepare function argument(s)
var_card_tokenization_create_request <- Card_Tokenization_Create_Request$new(Card_Create_Request$new("cvv_example", Card_Expiration_Data$new(123, 123), "holderName_example", "number_example"), "saveCard_example", Card_Tokenization_Create_Request_customer$new("documentNumber_example", DocumentType$new(), "email_example", "name_example", "id_example", Address_Create_Request$new("city_example", "country_example", "neighborhood_example", "number_example", "state_example", "street_example", "zipCode_example"), "phoneNumber_example")) # CardTokenizationCreateRequest | Data for creating a customer card with customer information

api_instance <- CardTokenizationApi$new()
# Configure HTTP basic authorization: basicAuth
api_instance$api_client$username <- Sys.getenv("USERNAME")
api_instance$api_client$password <- Sys.getenv("PASSWORD")
# to save the result into a file, simply add the optional `data_file` parameter, e.g.
# result <- api_instance$CardTokenize(var_card_tokenization_create_requestdata_file = "result.txt")
result <- api_instance$CardTokenize(var_card_tokenization_create_request)
dput(result)
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **card_tokenization_create_request** | [**CardTokenizationCreateRequest**](CardTokenizationCreateRequest.md)| Data for creating a customer card with customer information | 

### Return type

[**CardTokenizationCreateResponse**](Card_Tokenization_Create_Response.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **200** | Response containing customer ID and card token |  -  |

