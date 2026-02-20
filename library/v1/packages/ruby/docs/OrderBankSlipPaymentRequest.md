# OpenapiClient::OrderBankSlipPaymentRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **payment_method** | [**PaymentMethod**](PaymentMethod.md) |  |  |
| **expiration_in_days** | **Float** | Days until bank slip expires | [optional][default to 7] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrderBankSlipPaymentRequest.new(
  payment_method: null,
  expiration_in_days: null
)
```

