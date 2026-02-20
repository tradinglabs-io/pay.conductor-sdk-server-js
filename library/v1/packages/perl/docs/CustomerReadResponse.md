# WWW::OpenAPIClient::Object::CustomerReadResponse

## Load the model package
```perl
use WWW::OpenAPIClient::Object::CustomerReadResponse;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **string** | Unique customer identifier | 
**name** | **string** | Customer full name | 
**email** | **string** | Customer email | 
**document_type** | [**DocumentType**](DocumentType.md) |  | 
**document_number** | **string** | Customer CPF or CNPJ without formatting | 
**phone_number** | **string** | Customer phone number in +55 DD 9XXXXXXXX format | 
**address** | [**CustomerAddressResponse**](CustomerAddressResponse.md) |  | 
**created_at** | **string** | Date and time when the customer was created (ISO 8601 format) | 
**updated_at** | **string** | Date and time when the customer was last updated (ISO 8601 format) | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


