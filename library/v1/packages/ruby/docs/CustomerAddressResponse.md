# OpenapiClient::CustomerAddressResponse

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **String** | Unique address identifier |  |
| **street** | **String** | Street name |  |
| **number** | **String** | Address number |  |
| **neighborhood** | **String** | Neighborhood name |  |
| **city** | **String** | City name |  |
| **state** | **String** | State code in ISO 3166-2 format |  |
| **zip_code** | **String** | ZIP code without formatting |  |
| **country** | **String** | Country code in ISO 3166-1 alpha-2 format |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CustomerAddressResponse.new(
  id: null,
  street: null,
  number: null,
  neighborhood: null,
  city: null,
  state: null,
  zip_code: null,
  country: null
)
```

