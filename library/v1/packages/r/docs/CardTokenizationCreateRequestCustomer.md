# payconductor_sdk::CardTokenizationCreateRequestCustomer


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**address** | [**AddressCreateRequest**](Address_Create_Request.md) |  | [optional] 
**documentNumber** | **character** | Customer CPF or CNPJ without formatting | [Pattern: ^\\d{11}$|^\\d{14}$] 
**documentType** | [**DocumentType**](DocumentType.md) |  | [Enum: ] 
**email** | **character** | Customer email | 
**name** | **character** | Customer full name | 
**phoneNumber** | **character** | Customer phone number in +55 DD 9XXXXXXXX format | [optional] [Pattern: ^\\+(\\d{1,2}) (\\d{2}) (\\d{8,9})$] 
**id** | **character** | ID of an existing customer | 


