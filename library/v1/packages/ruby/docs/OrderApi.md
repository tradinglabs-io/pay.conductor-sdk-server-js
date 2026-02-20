# OpenapiClient::OrderApi

All URIs are relative to *https://app.payconductor.ai/api/v1*

| Method | HTTP request | Description |
| ------ | ------------ | ----------- |
| [**order_confirm**](OrderApi.md#order_confirm) | **POST** /orders/{id}/confirm | Confirm Order |
| [**order_create**](OrderApi.md#order_create) | **POST** /orders/ | Create Order |
| [**order_list**](OrderApi.md#order_list) | **GET** /orders/ | List Orders |
| [**order_read**](OrderApi.md#order_read) | **GET** /orders/{id} | Get Order By ID |
| [**order_refund**](OrderApi.md#order_refund) | **POST** /orders/{id}/refund | Refund Order |


## order_confirm

> <OrderConfirmResponse> order_confirm(id, order_payment_request)

Confirm Order

Confirms a Draft order, setting the payment method and processing the charges associated with the order.

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

api_instance = OpenapiClient::OrderApi.new
id = 'id_example' # String | 
order_payment_request = OpenapiClient::OrderBankSlipPaymentRequest.new({payment_method: OpenapiClient::PaymentMethod::Pix}) # OrderPaymentRequest | Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...)

begin
  # Confirm Order
  result = api_instance.order_confirm(id, order_payment_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrderApi->order_confirm: #{e}"
end
```

#### Using the order_confirm_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrderConfirmResponse>, Integer, Hash)> order_confirm_with_http_info(id, order_payment_request)

```ruby
begin
  # Confirm Order
  data, status_code, headers = api_instance.order_confirm_with_http_info(id, order_payment_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrderConfirmResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrderApi->order_confirm_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **String** |  |  |
| **order_payment_request** | [**OrderPaymentRequest**](OrderPaymentRequest.md) | Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...) |  |

### Return type

[**OrderConfirmResponse**](OrderConfirmResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## order_create

> <OrderCreateResponse> order_create(order_create_request)

Create Order

Create a new order for payment using the provided data

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

api_instance = OpenapiClient::OrderApi.new
order_create_request = OpenapiClient::OrderCreateRequest.new({charge_amount: 3.56, client_ip: 'client_ip_example', customer: OpenapiClient::CustomerCreateRequest.new({document_number: 'document_number_example', document_type: OpenapiClient::DocumentType::Cpf, email: 'email_example', name: 'name_example'}), discount_amount: 3.56, external_id: 'external_id_example', payment: OpenapiClient::OrderBankSlipPaymentRequest.new({payment_method: OpenapiClient::PaymentMethod::Pix}), shipping_fee: 3.56, tax_fee: 3.56}) # OrderCreateRequest | Order data for payment processing

begin
  # Create Order
  result = api_instance.order_create(order_create_request)
  p result
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrderApi->order_create: #{e}"
end
```

#### Using the order_create_with_http_info variant

This returns an Array which contains the response data, status code and headers.

> <Array(<OrderCreateResponse>, Integer, Hash)> order_create_with_http_info(order_create_request)

```ruby
begin
  # Create Order
  data, status_code, headers = api_instance.order_create_with_http_info(order_create_request)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => <OrderCreateResponse>
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrderApi->order_create_with_http_info: #{e}"
end
```

### Parameters

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **order_create_request** | [**OrderCreateRequest**](OrderCreateRequest.md) | Order data for payment processing |  |

### Return type

[**OrderCreateResponse**](OrderCreateResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json


## order_list

> order_list(page, page_size, opts)

List Orders

Retrieve a list of orders. Use date filter and pagination parameters to refine results as needed.

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

api_instance = OpenapiClient::OrderApi.new
page = 8.14 # Float | 
page_size = 8.14 # Float | 
opts = {
  end_date: Time.parse('2013-10-20T19:20:30+01:00'), # Time | 
  start_date: Time.parse('2013-10-20T19:20:30+01:00'), # Time | 
  id: 'id_example', # String | 
  status: 'Generating' # String | 
}

begin
  # List Orders
  api_instance.order_list(page, page_size, opts)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrderApi->order_list: #{e}"
end
```

#### Using the order_list_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> order_list_with_http_info(page, page_size, opts)

```ruby
begin
  # List Orders
  data, status_code, headers = api_instance.order_list_with_http_info(page, page_size, opts)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrderApi->order_list_with_http_info: #{e}"
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
| **status** | **String** |  | [optional] |

### Return type

nil (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined


## order_read

> order_read(id)

Get Order By ID

Retrieve the complete data of an order by our ID

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

api_instance = OpenapiClient::OrderApi.new
id = 'id_example' # String | 

begin
  # Get Order By ID
  api_instance.order_read(id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrderApi->order_read: #{e}"
end
```

#### Using the order_read_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> order_read_with_http_info(id)

```ruby
begin
  # Get Order By ID
  data, status_code, headers = api_instance.order_read_with_http_info(id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrderApi->order_read_with_http_info: #{e}"
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


## order_refund

> order_refund(id)

Refund Order

Initiate a refund for the order specified by ID.

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

api_instance = OpenapiClient::OrderApi.new
id = 'id_example' # String | 

begin
  # Refund Order
  api_instance.order_refund(id)
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrderApi->order_refund: #{e}"
end
```

#### Using the order_refund_with_http_info variant

This returns an Array which contains the response data (`nil` in this case), status code and headers.

> <Array(nil, Integer, Hash)> order_refund_with_http_info(id)

```ruby
begin
  # Refund Order
  data, status_code, headers = api_instance.order_refund_with_http_info(id)
  p status_code # => 2xx
  p headers # => { ... }
  p data # => nil
rescue OpenapiClient::ApiError => e
  puts "Error when calling OrderApi->order_refund_with_http_info: #{e}"
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

