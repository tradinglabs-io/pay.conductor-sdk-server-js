# payconductor_sdk::OrderDraftPaymentRequest

Used to create an order without generating a real payment. Use to create orders that will be paid later

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**paymentMethod** | [**PaymentMethod**](PaymentMethod.md) |  | [Enum: ] 
**expirationInSeconds** | **numeric** | Order expiration time in seconds | [optional] [default to 3600] 
**availablePaymentMethods** | [**array[AvailablePaymentMethods]**](AvailablePaymentMethods.md) | Available payment methods for this order | [optional] 


