# payconductor_sdk.Model.OrderDraftPaymentRequest
Used to create an order without generating a real payment. Use to create orders that will be paid later

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**PaymentMethod** | **PaymentMethod** |  | 
**ExpirationInSeconds** | **decimal** | Order expiration time in seconds | [optional] [default to 3600M]
**AvailablePaymentMethods** | [**List&lt;AvailablePaymentMethods&gt;**](AvailablePaymentMethods.md) | Available payment methods for this order | [optional] 

[[Back to Model list]](../../README.md#documentation-for-models) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to README]](../../README.md)

