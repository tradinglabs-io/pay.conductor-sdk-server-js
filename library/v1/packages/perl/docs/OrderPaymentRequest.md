# WWW::OpenAPIClient::Object::OrderPaymentRequest

## Load the model package
```perl
use WWW::OpenAPIClient::Object::OrderPaymentRequest;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**payment_method** | [**PaymentMethod**](PaymentMethod.md) |  | 
**expiration_in_seconds** | **double** | Order expiration time in seconds | [optional] [default to 3600]
**card** | [**OrderCreditCardPaymentRequestCard**](OrderCreditCardPaymentRequestCard.md) |  | 
**installments** | **double** | Number of installments | [default to 1]
**soft_descriptor** | **string** | Text that will appear on the card statement (soft descriptor) | [optional] 
**expiration_in_days** | **double** | Days until bank slip expires | [optional] [default to 7]
**nu_pay** | [**OrderNuPayPaymentRequestNuPay**](OrderNuPayPaymentRequestNuPay.md) |  | 
**available_payment_methods** | [**ARRAY[AvailablePaymentMethods]**](AvailablePaymentMethods.md) | Available payment methods for this order | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


