# payconductor_sdk::CustomerUpdateRequest

Schema for updating customer information

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**address** | [**AddressCreateRequest**](Address_Create_Request.md) |  | [optional] 
**documentNumber** | **character** | Customer CPF or CNPJ without formatting | [optional] [Pattern: ^\\d{11}$|^\\d{14}$] 
**documentType** | [**DocumentType**](DocumentType.md) |  | [optional] [Enum: ] 
**email** | **character** | Customer email | [optional] 
**name** | **character** | Customer full name | [optional] 
**phoneNumber** | **character** | Customer phone number in +55 DD 9XXXXXXXX format | [optional] [Pattern: ^\\+(\\d{1,2}) (\\d{2}) (\\d{8,9})$] 


