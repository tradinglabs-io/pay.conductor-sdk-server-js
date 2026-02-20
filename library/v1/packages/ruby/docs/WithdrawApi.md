# OpenapiClient::WithdrawApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**withdraw_create**](WithdrawApi.md#withdraw_create) | **POST** /withdraws/ | Create Withdrawal |
| [**withdraw_list**](WithdrawApi.md#withdraw_list) | **GET** /withdraws/ | List Withdrawals |
| [**withdraw_read**](WithdrawApi.md#withdraw_read) | **GET** /withdraws/{id} | Get Withdrawal By ID |


## withdraw_create

> <WithdrawCreateResponse> withdraw_create(withdraw_create_request)

Create Withdrawal

Create a new withdrawal or transfer to the provided payment account

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

api_instance = OpenapiClient::WithdrawApi.new
withdraw_create_request = OpenapiClient::WithdrawCreateRequest.new({amount: 3.56, payout_account: OpenapiClient::WithdrawPayoutAccountData.new({owner_document: 'owner_document_example', owner_name: 'owner_name_example', pix_key: 'pix_key_example', pix_type: OpenapiClient::PixType::Cpf})}) # WithdrawCreateRequest | Withdrawal or transfer request data

begin
  # Create Withdrawal
  result = api_instance.withdraw_create(withdraw_create_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling WithdrawApi->withdraw_create: #{e}"
end
```

#### Using the withdraw_create_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<WithdrawCreateResponse>, Integer, Hash)> withdraw_create_with_http_info(withdraw_create_request)

```ruby
begin
  # Create Withdrawal
  data, status_code, headers = api_instance.withdraw_create_with_http_info(withdraw_create_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <WithdrawCreateResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling WithdrawApi->withdraw_create_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **withdraw_create_request** | [**WithdrawCreateRequest**](WithdrawCreateRequest.md) | Withdrawal or transfer request data |  |

### Return type

[**WithdrawCreateResponse**](WithdrawCreateResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## withdraw_list

> withdraw_list(page, page_size, opts)

List Withdrawals

Returns a paginated list of withdrawals and transfers. Filter by creation date or search by ID (withdrawal ID, external ID, acquirer ID, or End2EndID)

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

api_instance = OpenapiClient::WithdrawApi.new
page = 8.14 # Float | 
page_size = 8.14 # Float | 
opts = {
  end_date: Time.parse('2013-10-20T19:20:30+01:00'), # Time | 
  start_date: Time.parse('2013-10-20T19:20:30+01:00'), # Time | 
  id: 'id_example' # String | 
}

begin
  # List Withdrawals
  api_instance.withdraw_list(page, page_size, opts)
rescue OpenapiClient::ApiError => e
  puts "Error when calling WithdrawApi->withdraw_list: #{e}"
end
```

#### Using the withdraw_list_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> withdraw_list_with_http_info(page, page_size, opts)

```ruby
begin
  # List Withdrawals
  data, status_code, headers = api_instance.withdraw_list_with_http_info(page, page_size, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling WithdrawApi->withdraw_list_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **page** | **Float** |  | [default to 1] |
| **page_size** | **Float** |  | [default to 20] |
| **end_date** | **Time** |  | [optional] |
| **start_date** | **Time** |  | [optional] |
| **id** | **String** |  | [optional] |

### Return type

nil (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## withdraw_read

> withdraw_read(id)

Get Withdrawal By ID

Returns the details of a specific withdrawal or transfer using its ID

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

api_instance = OpenapiClient::WithdrawApi.new
id = 'id_example' # String | 

begin
  # Get Withdrawal By ID
  api_instance.withdraw_read(id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling WithdrawApi->withdraw_read: #{e}"
end
```

#### Using the withdraw_read_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> withdraw_read_with_http_info(id)

```ruby
begin
  # Get Withdrawal By ID
  data, status_code, headers = api_instance.withdraw_read_with_http_info(id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling WithdrawApi->withdraw_read_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **String** |  |  |

### Return type

nil (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

