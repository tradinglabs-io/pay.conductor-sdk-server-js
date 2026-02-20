# OrderCreditCardPaymentRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**payment_method** | [**models::PaymentMethod**](PaymentMethod.md) |  | 
**card** | [**models::OrderCreditCardPaymentRequestCard**](OrderCreditCardPaymentRequestCard.md) |  | 
**installments** | **f64** | Number of installments | [default to 1]
**soft_descriptor** | Option<**String**> | Text that will appear on the card statement (soft descriptor) | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


