# # CustomerReadResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **string** | Unique customer identifier |
**name** | **string** | Customer full name |
**email** | **string** | Customer email |
**document_type** | [**\OpenAPI\Client\Model\DocumentType**](DocumentType.md) |  |
**document_number** | **string** | Customer CPF or CNPJ without formatting |
**phone_number** | **string** | Customer phone number in +55 DD 9XXXXXXXX format |
**address** | [**\OpenAPI\Client\Model\CustomerAddressResponse**](CustomerAddressResponse.md) |  |
**created_at** | **string** | Date and time when the customer was created (ISO 8601 format) |
**updated_at** | **string** | Date and time when the customer was last updated (ISO 8601 format) |

[[Back to Model list]](../../README.md#models) [[Back to API list]](../../README.md#endpoints) [[Back to README]](../../README.md)
