# OpenapiClient::CustomerReadResponse

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **String** | Unique customer identifier |  |
| **name** | **String** | Customer full name |  |
| **email** | **String** | Customer email |  |
| **document_type** | [**DocumentType**](DocumentType.md) |  |  |
| **document_number** | **String** | Customer CPF or CNPJ without formatting |  |
| **phone_number** | **String** | Customer phone number in +55 DD 9XXXXXXXX format |  |
| **address** | [**CustomerAddressResponse**](CustomerAddressResponse.md) |  |  |
| **created_at** | **String** | Date and time when the customer was created (ISO 8601 format) |  |
| **updated_at** | **String** | Date and time when the customer was last updated (ISO 8601 format) |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CustomerReadResponse.new(
  id: null,
  name: null,
  email: null,
  document_type: null,
  document_number: null,
  phone_number: null,
  address: null,
  created_at: null,
  updated_at: null
)
```

