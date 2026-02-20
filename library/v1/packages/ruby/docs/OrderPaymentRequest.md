# OpenapiClient::OrderPaymentRequest

## Class instance methods

### `openapi_one_of`

Returns the list of classes defined in oneOf.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::OrderPaymentRequest.openapi_one_of
# =>
# [
#   :'OrderBankSlipPaymentRequest',
#   :'OrderCreditCardPaymentRequest',
#   :'OrderDraftPaymentRequest',
#   :'OrderNuPayPaymentRequest',
#   :'OrderPIXPaymentRequest',
#   :'OrderPicPayPaymentRequest'
# ]
```

### `openapi_discriminator_name`

Returns the discriminator's property name.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::OrderPaymentRequest.openapi_discriminator_name
# => :'payment_method'
```

### `openapi_discriminator_name`

Returns the discriminator's mapping.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::OrderPaymentRequest.openapi_discriminator_mapping
# =>
# {
#   :'OrderBankSlipPaymentRequest' => :'OrderBankSlipPaymentRequest',
#   :'OrderCreditCardPaymentRequest' => :'OrderCreditCardPaymentRequest',
#   :'OrderDraftPaymentRequest' => :'OrderDraftPaymentRequest',
#   :'OrderNuPayPaymentRequest' => :'OrderNuPayPaymentRequest',
#   :'OrderPIXPaymentRequest' => :'OrderPIXPaymentRequest',
#   :'OrderPicPayPaymentRequest' => :'OrderPicPayPaymentRequest'
# }
```

### build

Find the appropriate object from the `openapi_one_of` list and casts the data into it.

#### Example

```ruby
require 'openapi_client'

OpenapiClient::OrderPaymentRequest.build(data)
# => #<OrderBankSlipPaymentRequest:0x00007fdd4aab02a0>

OpenapiClient::OrderPaymentRequest.build(data_that_doesnt_match)
# => nil
```

#### Parameters

| Name | Type | Description |
| ---- | ---- | ----------- |
| **data** | **Mixed** | data to be matched against the list of oneOf items |

#### Return type

- `OrderBankSlipPaymentRequest`
- `OrderCreditCardPaymentRequest`
- `OrderDraftPaymentRequest`
- `OrderNuPayPaymentRequest`
- `OrderPIXPaymentRequest`
- `OrderPicPayPaymentRequest`
- `nil` (if no type matches)

