# OpenapiClient::OrderCreateResponse

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **String** | Order ID in the system |  |
| **external_id** | **String** | External order ID (provided by your integration) |  |
| **external_integration_key** | **String** | Provider used to process the order |  |
| **external_integration_id** | **String** | Order ID in the payment provider |  |
| **amount** | **Float** | Total order amount |  |
| **cost_fee** | **Float** | Cost fee applied to the order |  |
| **pix** | [**OrderPIXInfo**](OrderPIXInfo.md) |  | [optional] |
| **bank_slip** | [**OrderBankSlipInfo**](OrderBankSlipInfo.md) |  | [optional] |
| **nu_pay** | [**OrderNuPayInfo**](OrderNuPayInfo.md) |  | [optional] |
| **pic_pay** | [**OrderPicPayInfo**](OrderPicPayInfo.md) |  | [optional] |
| **credit_card** | [**OrderCreditCardInfo**](OrderCreditCardInfo.md) |  | [optional] |
| **status** | [**Status**](Status.md) |  |  |
| **payment_method** | [**PaymentMethod**](PaymentMethod.md) |  |  |
| **payed_at** | **String** | Date and time when the order was paid (ISO 8601) |  |
| **error_code** | **String** | Error code, if any |  |
| **error_message** | **String** | Error message, if any |  |
| **order_items** | [**Array&lt;OrderCreateResponseOrderItemsInner&gt;**](OrderCreateResponseOrderItemsInner.md) |  |  |
| **session** | [**OrderCreateResponseSession**](OrderCreateResponseSession.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrderCreateResponse.new(
  id: null,
  external_id: null,
  external_integration_key: null,
  external_integration_id: null,
  amount: null,
  cost_fee: null,
  pix: null,
  bank_slip: null,
  nu_pay: null,
  pic_pay: null,
  credit_card: null,
  status: null,
  payment_method: null,
  payed_at: null,
  error_code: null,
  error_message: null,
  order_items: null,
  session: null
)
```

