# payconductor_sdk.Model.CustomerReadResponse
Customer response with complete information

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **string** | Unique customer identifier | 
**Name** | **string** | Customer full name | 
**Email** | **string** | Customer email | 
**DocumentType** | **DocumentType** |  | 
**CreatedAt** | **string** | Date and time when the customer was created (ISO 8601 format) | 
**UpdatedAt** | **string** | Date and time when the customer was last updated (ISO 8601 format) | 
**DocumentNumber** | **string** | Customer CPF or CNPJ without formatting | 
**PhoneNumber** | **string** | Customer phone number in +55 DD 9XXXXXXXX format | 
**Address** | [**CustomerAddressResponse**](CustomerAddressResponse.md) |  | 

[[Back to Model list]](../../README.md#documentation-for-models) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to README]](../../README.md)

