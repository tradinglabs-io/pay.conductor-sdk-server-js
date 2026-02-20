# payconductor_sdk::OrderPaymentRequest

Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...)

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**paymentMethod** | **character** |  | 
**expirationInSeconds** | **numeric** | Order expiration time in seconds | [optional] [default to 3600] 
**card** | [**OrderCreditCardPaymentRequestCard**](OrderCreditCardPaymentRequest_card.md) |  | 
**installments** | **numeric** | Number of installments | [default to 1] [Max: 12] [Min: 1] 
**softDescriptor** | **character** | Text that will appear on the card statement (soft descriptor) | [optional] [Max. length: 22] [Min. length: 1] 
**expirationInDays** | **numeric** | Days until bank slip expires | [optional] [default to 7] [Min: 1] 
**nuPay** | [**OrderNuPayPaymentRequestNuPay**](OrderNuPayPaymentRequest_nuPay.md) |  | 
**availablePaymentMethods** | [**array[AvailablePaymentMethods]**](AvailablePaymentMethods.md) | Available payment methods for this order | [optional] 


