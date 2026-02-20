# OpenapiClient::CustomerApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**customer_create**](CustomerApi.md#customer_create) | **POST** /customers/ | Create New Customer |
| [**customer_list_custom**](CustomerApi.md#customer_list_custom) | **GET** /customers/ | Get All Customers |
| [**customer_read**](CustomerApi.md#customer_read) | **GET** /customers/{id} | Get Customer By ID |
| [**customer_update**](CustomerApi.md#customer_update) | **PATCH** /customers/{id} | Update Customer Data |


## customer_create

> <CustomerReadResponse> customer_create(customer_create_request)

Create New Customer

Create a new customer by providing the required data in the request body.

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

api_instance = OpenapiClient::CustomerApi.new
customer_create_request = OpenapiClient::CustomerCreateRequest.new({document_number: 'document_number_example', document_type: OpenapiClient::DocumentType::Cpf, email: 'email_example', name: 'name_example'}) # CustomerCreateRequest | Schema for creating a new customer

begin
  # Create New Customer
  result = api_instance.customer_create(customer_create_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CustomerApi->customer_create: #{e}"
end
```

#### Using the customer_create_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CustomerReadResponse>, Integer, Hash)> customer_create_with_http_info(customer_create_request)

```ruby
begin
  # Create New Customer
  data, status_code, headers = api_instance.customer_create_with_http_info(customer_create_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CustomerReadResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CustomerApi->customer_create_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **customer_create_request** | [**CustomerCreateRequest**](CustomerCreateRequest.md) | Schema for creating a new customer |  |

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## customer_list_custom

> <CustomerListResponse> customer_list_custom(page, page_size, opts)

Get All Customers

Retrieve a list of all customers associated with the organization, with support for filters and pagination.

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

api_instance = OpenapiClient::CustomerApi.new
page = 8.14 # Float | 
page_size = 8.14 # Float | 
opts = {
  email: 'email_example', # String | 
  name: 'name_example', # String | 
  end_date: Time.parse('2013-10-20T19:20:30+01:00'), # Time | 
  start_date: Time.parse('2013-10-20T19:20:30+01:00') # Time | 
}

begin
  # Get All Customers
  result = api_instance.customer_list_custom(page, page_size, opts)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CustomerApi->customer_list_custom: #{e}"
end
```

#### Using the customer_list_custom_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CustomerListResponse>, Integer, Hash)> customer_list_custom_with_http_info(page, page_size, opts)

```ruby
begin
  # Get All Customers
  data, status_code, headers = api_instance.customer_list_custom_with_http_info(page, page_size, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CustomerListResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CustomerApi->customer_list_custom_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **page** | **Float** |  | [default to 1] |
| **page_size** | **Float** |  | [default to 20] |
| **email** | **String** |  | [optional] |
| **name** | **String** |  | [optional] |
| **end_date** | **Time** |  | [optional] |
| **start_date** | **Time** |  | [optional] |

### Return type

[**CustomerListResponse**](CustomerListResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## customer_read

> <CustomerReadResponse> customer_read(id)

Get Customer By ID

Retrieve the complete details of a specific customer using their unique ID.

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

api_instance = OpenapiClient::CustomerApi.new
id = 'id_example' # String | 

begin
  # Get Customer By ID
  result = api_instance.customer_read(id)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CustomerApi->customer_read: #{e}"
end
```

#### Using the customer_read_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CustomerReadResponse>, Integer, Hash)> customer_read_with_http_info(id)

```ruby
begin
  # Get Customer By ID
  data, status_code, headers = api_instance.customer_read_with_http_info(id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CustomerReadResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CustomerApi->customer_read_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **String** |  |  |

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json


## customer_update

> <CustomerReadResponse> customer_update(id, customer_update_request)

Update Customer Data

Update the information of an existing customer by providing the new data in the request body.

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

api_instance = OpenapiClient::CustomerApi.new
id = 'id_example' # String | 
customer_update_request = OpenapiClient::CustomerUpdateRequest.new # CustomerUpdateRequest | Schema for updating customer information

begin
  # Update Customer Data
  result = api_instance.customer_update(id, customer_update_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling CustomerApi->customer_update: #{e}"
end
```

#### Using the customer_update_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<CustomerReadResponse>, Integer, Hash)> customer_update_with_http_info(id, customer_update_request)

```ruby
begin
  # Update Customer Data
  data, status_code, headers = api_instance.customer_update_with_http_info(id, customer_update_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <CustomerReadResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling CustomerApi->customer_update_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **String** |  |  |
| **customer_update_request** | [**CustomerUpdateRequest**](CustomerUpdateRequest.md) | Schema for updating customer information |  |

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

