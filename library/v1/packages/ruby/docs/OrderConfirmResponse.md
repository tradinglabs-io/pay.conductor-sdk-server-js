# OpenapiClient::OrderConfirmResponse

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **String** | Order ID in the system |  |
| **external_id** | **String** | External order ID (provided by your integration) |  |
| **amount** | **Float** | Total order amount |  |
| **cost_fee** | **Float** | Cost fee applied to the order |  |
| **pix** | [**OrderPIXInfo**](OrderPIXInfo.md) |  | [optional] |
| **bank_slip** | [**OrderBankSlipInfo**](OrderBankSlipInfo.md) |  | [optional] |
| **nu_pay** | [**OrderNuPayInfo**](OrderNuPayInfo.md) |  | [optional] |
| **pic_pay** | [**OrderPicPayInfo**](OrderPicPayInfo.md) |  | [optional] |
| **status** | [**Status**](Status.md) |  |  |
| **payment_method** | [**PaymentMethod**](PaymentMethod.md) |  |  |
| **payed_at** | **String** | Date and time when the order was paid (ISO 8601) |  |
| **error_code** | **String** | Error code, if any |  |
| **error_message** | **String** | Error message, if any |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrderConfirmResponse.new(
  id: null,
  external_id: null,
  amount: null,
  cost_fee: null,
  pix: null,
  bank_slip: null,
  nu_pay: null,
  pic_pay: null,
  status: null,
  payment_method: null,
  payed_at: null,
  error_code: null,
  error_message: null
)
```

