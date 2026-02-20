# OpenapiClient::CardTokenizationApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**card_tokenize**](CardTokenizationApi.md#card_tokenize) | **POST** /card-tokenization/ | Tokenize Card |


## card_tokenize

> <CardTokenizationCreateResponse> card_tokenize(card_tokenization_create_request)

Tokenize Card

Tokenize credit cards for future charges.

### Examples

```ruby
require 'time'
require 'openapi_client'
# setup authorization
OpenapiClient.configure do |config|
  # Configure HTTP basic authorization: basicAuth
  config.username = 'YOUR USERNAME'
  config.password = 'YOUR PASSWORD'
end

api_instance = OpenapiClient::CardTokenizationApi.new
card_tokenization_create_request = OpenapiClient::CardTokenizationCreateRequest.new({card: OpenapiClient::CardCreateRequest.new({cvv: 'cvv_example', expiration: OpenapiClient::CardExpirationData.new({month: 3.56, year: 3.56}), holder_name: 'holder_name_example', number: 'number_example'}), save_card: false, customer: OpenapiClient::CardTokenizationCustomerByIdData.new({id: 'id_example'})}) # CardTokenizationCreateRequest | Data for creating a customer card with customer information

begin
  # Tokenize Card
  result = api_instance.card_tokenize(card_tokenization_create_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CardTokenizationApi->card_tokenize: #{e}"
end
```

#### Using the card_tokenize_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CardTokenizationCreateResponse>, Integer, Hash)> card_tokenize_with_http_info(card_tokenization_create_request)

```ruby
begin
  # Tokenize Card
  data, status_code, headers = api_instance.card_tokenize_with_http_info(card_tokenization_create_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CardTokenizationCreateResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CardTokenizationApi->card_tokenize_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **card_tokenization_create_request** | [**CardTokenizationCreateRequest**](CardTokenizationCreateRequest.md) | Data for creating a customer card with customer information |  |

### Return type

[**CardTokenizationCreateResponse**](CardTokenizationCreateResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

