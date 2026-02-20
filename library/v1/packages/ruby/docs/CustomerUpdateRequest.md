# OpenapiClient::CustomerUpdateRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **address** | [**AddressCreateRequest**](AddressCreateRequest.md) |  | [optional] |
| **document_number** | **String** | Customer CPF or CNPJ without formatting | [optional] |
| **document_type** | [**DocumentType**](DocumentType.md) |  | [optional] |
| **email** | **String** | Customer email | [optional] |
| **name** | **String** | Customer full name | [optional] |
| **phone_number** | **String** | Customer phone number in +55 DD 9XXXXXXXX format | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CustomerUpdateRequest.new(
  address: null,
  document_number: null,
  document_type: null,
  email: null,
  name: null,
  phone_number: null
)
```

