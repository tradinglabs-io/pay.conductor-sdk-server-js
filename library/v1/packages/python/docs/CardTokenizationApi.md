# payconductor_sdk.CardTokenizationApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**card_tokenize**](CardTokenizationApi.md#card_tokenize) | **POST** /card-tokenization/ | Tokenize Card


# **card_tokenize**
> CardTokenizationCreateResponse card_tokenize(card_tokenization_create_request)

Tokenize Card

Tokenize credit cards for future charges.

### Example

* Basic Authentication (basicAuth):

```python
import payconductor_sdk
from payconductor_sdk.models.card_tokenization_create_request import CardTokenizationCreateRequest
from payconductor_sdk.models.card_tokenization_create_response import CardTokenizationCreateResponse
from payconductor_sdk.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://app.payconductor.ai/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = payconductor_sdk.Configuration(
    host = "https://app.payconductor.ai/api/v1"
)

# The client must configure the authentication and authorization parameters
# in accordance with the API server security policy.
# Examples for each auth method are provided below, use the example that
# satisfies your auth use case.

# Configure HTTP basic authorization: basicAuth
configuration = payconductor_sdk.Configuration(
    username = os.environ["USERNAME"],
    password = os.environ["PASSWORD"]
)

# Enter a context with an instance of the API client
with payconductor_sdk.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = payconductor_sdk.CardTokenizationApi(api_client)
    card_tokenization_create_request = payconductor_sdk.CardTokenizationCreateRequest() # CardTokenizationCreateRequest | Data for creating a customer card with customer information

    try:
        # Tokenize Card
        api_response = api_instance.card_tokenize(card_tokenization_create_request)
        print("The response of CardTokenizationApi->card_tokenize:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling CardTokenizationApi->card_tokenize: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **card_tokenization_create_request** | [**CardTokenizationCreateRequest**](CardTokenizationCreateRequest.md)| Data for creating a customer card with customer information | 

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
**200** | Response containing customer ID and card token |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

