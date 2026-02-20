# OpenapiClient::CardCreateRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **cvv** | **String** | Card security code (CVV) |  |
| **expiration** | [**CardExpirationData**](CardExpirationData.md) |  |  |
| **holder_name** | **String** | Card holder name |  |
| **number** | **String** | Credit card number |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CardCreateRequest.new(
  cvv: null,
  expiration: null,
  holder_name: null,
  number: null
)
```

