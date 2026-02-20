# openapi.model.CustomerReadResponse

## Load the model package
```dart
import 'package:openapi/api.dart';
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **String** | Unique customer identifier | 
**name** | **String** | Customer full name | 
**email** | **String** | Customer email | 
**documentType** | [**DocumentType**](DocumentType.md) |  | 
**documentNumber** | **String** | Customer CPF or CNPJ without formatting | 
**phoneNumber** | **String** | Customer phone number in +55 DD 9XXXXXXXX format | 
**address** | [**CustomerAddressResponse**](CustomerAddressResponse.md) |  | 
**createdAt** | **String** | Date and time when the customer was created (ISO 8601 format) | 
**updatedAt** | **String** | Date and time when the customer was last updated (ISO 8601 format) | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


