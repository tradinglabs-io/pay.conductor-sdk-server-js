# customer_read_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **char \*** | Unique customer identifier | 
**name** | **char \*** | Customer full name | 
**email** | **char \*** | Customer email | 
**document_type** | **document_type_t \*** |  | 
**document_number** | **char \*** | Customer CPF or CNPJ without formatting | 
**phone_number** | **char \*** | Customer phone number in +55 DD 9XXXXXXXX format | 
**address** | [**customer_address_response_t**](customer_address_response.md) \* |  | 
**created_at** | **char \*** | Date and time when the customer was created (ISO 8601 format) | 
**updated_at** | **char \*** | Date and time when the customer was last updated (ISO 8601 format) | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


