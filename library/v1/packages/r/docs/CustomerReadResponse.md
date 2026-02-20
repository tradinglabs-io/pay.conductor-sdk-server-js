# payconductor_sdk::CustomerReadResponse

Customer response with complete information

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **character** | Unique customer identifier | 
**name** | **character** | Customer full name | 
**email** | **character** | Customer email | 
**documentType** | [**DocumentType**](DocumentType.md) |  | [Enum: ] 
**documentNumber** | **character** | Customer CPF or CNPJ without formatting | 
**phoneNumber** | **character** | Customer phone number in +55 DD 9XXXXXXXX format | 
**address** | [**CustomerAddressResponse**](Customer_Address_Response.md) |  | 
**createdAt** | **character** | Date and time when the customer was created (ISO 8601 format) | 
**updatedAt** | **character** | Date and time when the customer was last updated (ISO 8601 format) | 


