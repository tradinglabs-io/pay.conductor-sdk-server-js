# openapi.model.OrderPaymentRequest

## Load the model package
```dart
import 'package:openapi/api.dart';
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**paymentMethod** | [**PaymentMethod**](PaymentMethod.md) |  | 
**expirationInSeconds** | **num** | Order expiration time in seconds | [optional] [default to 3600]
**card** | [**OrderCreditCardPaymentRequestCard**](OrderCreditCardPaymentRequestCard.md) |  | 
**installments** | **num** | Number of installments | [default to 1]
**softDescriptor** | **String** | Text that will appear on the card statement (soft descriptor) | [optional] 
**expirationInDays** | **num** | Days until bank slip expires | [optional] [default to 7]
**nuPay** | [**OrderNuPayPaymentRequestNuPay**](OrderNuPayPaymentRequestNuPay.md) |  | 
**availablePaymentMethods** | [**BuiltList&lt;AvailablePaymentMethods&gt;**](AvailablePaymentMethods.md) | Available payment methods for this order | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


