# OpenapiClient::OrderPIXPaymentRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **payment_method** | [**PaymentMethod**](PaymentMethod.md) |  |  |
| **expiration_in_seconds** | **Float** | PIX expiration time in seconds | [optional][default to 3600] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrderPIXPaymentRequest.new(
  payment_method: null,
  expiration_in_seconds: null
)
```

