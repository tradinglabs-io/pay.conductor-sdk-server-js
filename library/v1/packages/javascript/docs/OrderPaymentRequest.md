# PayconductorSdk.OrderPaymentRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**paymentMethod** | [**PaymentMethod**](PaymentMethod.md) |  | 
**expirationInSeconds** | **Number** | Order expiration time in seconds | [optional] [default to 3600]
**card** | [**OrderCreditCardPaymentRequestCard**](OrderCreditCardPaymentRequestCard.md) |  | 
**installments** | **Number** | Number of installments | [default to 1]
**softDescriptor** | **String** | Text that will appear on the card statement (soft descriptor) | [optional] 
**expirationInDays** | **Number** | Days until bank slip expires | [optional] [default to 7]
**nuPay** | [**OrderNuPayPaymentRequestNuPay**](OrderNuPayPaymentRequestNuPay.md) |  | 
**availablePaymentMethods** | [**[AvailablePaymentMethods]**](AvailablePaymentMethods.md) | Available payment methods for this order | [optional] 


