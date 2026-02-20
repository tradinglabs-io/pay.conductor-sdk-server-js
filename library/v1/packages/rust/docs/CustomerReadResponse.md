# CustomerReadResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **String** | Unique customer identifier | 
**name** | **String** | Customer full name | 
**email** | **String** | Customer email | 
**document_type** | [**models::DocumentType**](DocumentType.md) |  | 
**document_number** | Option<**String**> | Customer CPF or CNPJ without formatting | 
**phone_number** | Option<**String**> | Customer phone number in +55 DD 9XXXXXXXX format | 
**address** | Option<[**models::CustomerAddressResponse**](CustomerAddressResponse.md)> |  | 
**created_at** | **String** | Date and time when the customer was created (ISO 8601 format) | 
**updated_at** | **String** | Date and time when the customer was last updated (ISO 8601 format) | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


