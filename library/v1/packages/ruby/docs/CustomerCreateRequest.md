# OpenapiClient::CustomerCreateRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **address** | [**AddressCreateRequest**](AddressCreateRequest.md) |  | [optional] |
| **document_number** | **String** | Customer CPF or CNPJ without formatting |  |
| **document_type** | [**DocumentType**](DocumentType.md) |  |  |
| **email** | **String** | Customer email |  |
| **name** | **String** | Customer full name |  |
| **phone_number** | **String** | Customer phone number in +55 DD 9XXXXXXXX format | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CustomerCreateRequest.new(
  address: null,
  document_number: null,
  document_type: null,
  email: null,
  name: null,
  phone_number: null
)
```

