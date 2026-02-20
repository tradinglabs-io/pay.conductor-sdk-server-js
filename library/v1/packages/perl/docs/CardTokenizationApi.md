# WWW::OpenAPIClient::CardTokenizationApi

## Load the API package
```perl
use WWW::OpenAPIClient::Object::CardTokenizationApi;
```

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**card_tokenize**](CardTokenizationApi.md#card_tokenize) | **POST** /card-tokenization/ | Tokenize Card


# **card_tokenize**
> CardTokenizationCreateResponse card_tokenize(card_tokenization_create_request => $card_tokenization_create_request)

Tokenize Card

Tokenize credit cards for future charges.

### Example
```perl
use Data::Dumper;
use WWW::OpenAPIClient::CardTokenizationApi;
my $api_instance = WWW::OpenAPIClient::CardTokenizationApi->new(

    # Configure HTTP basic authorization: basicAuth
    username => 'YOUR_USERNAME',
    password => 'YOUR_PASSWORD',
    
);

my $card_tokenization_create_request = WWW::OpenAPIClient::Object::CardTokenizationCreateRequest->new(); # CardTokenizationCreateRequest | Data for creating a customer card with customer information

eval {
    my $result = $api_instance->card_tokenize(card_tokenization_create_request => $card_tokenization_create_request);
    print Dumper($result);
};
if ($@) {
    warn "Exception when calling CardTokenizationApi->card_tokenize: $@\n";
}
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

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

