# OpenapiClient::OrderCreditCardPaymentRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **payment_method** | **String** |  |  |
| **card** | [**OrderCreditCardPaymentRequestCard**](OrderCreditCardPaymentRequestCard.md) |  |  |
| **installments** | **Float** | Number of installments | [default to 1] |
| **soft_descriptor** | **String** | Text that will appear on the card statement (soft descriptor) | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrderCreditCardPaymentRequest.new(
  payment_method: null,
  card: null,
  installments: null,
  soft_descriptor: null
)
```

