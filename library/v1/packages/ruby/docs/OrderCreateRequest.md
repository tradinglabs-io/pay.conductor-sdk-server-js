# OpenapiClient::OrderCreateRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **charge_amount** | **Float** | Total amount to be charged on the order in floating point value |  |
| **client_ip** | **String** | Client IP address |  |
| **customer** | [**CustomerCreateRequest**](CustomerCreateRequest.md) |  |  |
| **discount_amount** | **Float** | Discount amount | [default to 0] |
| **external_id** | **String** | Order ID in your system |  |
| **fingerprints** | [**OrderFraudFingerprints**](OrderFraudFingerprints.md) |  | [optional] |
| **items** | [**Array&lt;OrderItemData&gt;**](OrderItemData.md) | List of products or services in the order | [optional] |
| **merchant** | [**MerchantInput**](MerchantInput.md) |  | [optional] |
| **payment** | [**OrderPaymentRequest**](OrderPaymentRequest.md) |  |  |
| **split_amount_total** | **Float** | Total split amount to be paid to the merchant (Used only for reporting purposes, does not generate actual split) | [optional] |
| **session** | [**OrderCreateRequestSession**](OrderCreateRequestSession.md) |  | [optional] |
| **shipping_fee** | **Float** | Shipping fee | [default to 0] |
| **tax_fee** | **Float** | Additional fees | [default to 0] |
| **metadata** | **Object** | Additional metadata for the order as key-value pairs. Keys should not contain spaces or special characters | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrderCreateRequest.new(
  charge_amount: null,
  client_ip: null,
  customer: null,
  discount_amount: null,
  external_id: null,
  fingerprints: null,
  items: null,
  merchant: null,
  payment: null,
  split_amount_total: null,
  session: null,
  shipping_fee: null,
  tax_fee: null,
  metadata: null
)
```

