# payconductor_sdk::OrderCreditCardPaymentRequest


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**paymentMethod** | **character** |  | 
**card** | [**OrderCreditCardPaymentRequestCard**](OrderCreditCardPaymentRequest_card.md) |  | 
**installments** | **numeric** | Number of installments | [default to 1] [Max: 12] [Min: 1] 
**softDescriptor** | **character** | Text that will appear on the card statement (soft descriptor) | [optional] [Max. length: 22] [Min. length: 1] 


