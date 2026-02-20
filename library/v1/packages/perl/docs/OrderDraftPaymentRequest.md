# WWW::OpenAPIClient::Object::OrderDraftPaymentRequest

## Load the model package
```perl
use WWW::OpenAPIClient::Object::OrderDraftPaymentRequest;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**payment_method** | [**PaymentMethod**](PaymentMethod.md) |  | 
**expiration_in_seconds** | **double** | Order expiration time in seconds | [optional] [default to 3600]
**available_payment_methods** | [**ARRAY[AvailablePaymentMethods]**](AvailablePaymentMethods.md) | Available payment methods for this order | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


