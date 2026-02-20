# payconductor_sdk::OrderCreditCardPaymentRequestCard


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**firstSixCardNumber** | **character** | First 6 digits of the credit card | [optional] 
**token** | **character** | Previously generated credit card token | 
**cvv** | **character** | Card security code (CVV) | [Max. length: 4] [Min. length: 3] 
**expiration** | [**CardExpirationData**](Card_Expiration_Data.md) |  | 
**holderName** | **character** | Card holder name | 
**number** | **character** | Credit card number | 


