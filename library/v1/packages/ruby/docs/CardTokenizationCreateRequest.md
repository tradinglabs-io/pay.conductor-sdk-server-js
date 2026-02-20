# OpenapiClient::CardTokenizationCreateRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **card** | [**CardCreateRequest**](CardCreateRequest.md) |  |  |
| **save_card** | **Boolean** | Indicates if the card should be saved for future use |  |
| **customer** | [**CardTokenizationCreateRequestCustomer**](CardTokenizationCreateRequestCustomer.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CardTokenizationCreateRequest.new(
  card: null,
  save_card: null,
  customer: null
)
```

