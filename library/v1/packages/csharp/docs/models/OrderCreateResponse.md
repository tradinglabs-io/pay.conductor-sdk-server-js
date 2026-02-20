# payconductor_sdk.Model.OrderCreateResponse
Response after creating an order

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **string** | Order ID in the system | 
**ExternalIntegrationKey** | **string** | Provider used to process the order | 
**Amount** | **decimal** | Total order amount | 
**CostFee** | **decimal** | Cost fee applied to the order | 
**Status** | **Status** |  | 
**PaymentMethod** | **PaymentMethod** |  | 
**OrderItems** | [**List&lt;OrderCreateResponseOrderItemsInner&gt;**](OrderCreateResponseOrderItemsInner.md) |  | 
**ExternalId** | **string** | External order ID (provided by your integration) | 
**ExternalIntegrationId** | **string** | Order ID in the payment provider | 
**Pix** | [**OrderPIXInfo**](OrderPIXInfo.md) |  | [optional] 
**BankSlip** | [**OrderBankSlipInfo**](OrderBankSlipInfo.md) |  | [optional] 
**NuPay** | [**OrderNuPayInfo**](OrderNuPayInfo.md) |  | [optional] 
**PicPay** | [**OrderPicPayInfo**](OrderPicPayInfo.md) |  | [optional] 
**CreditCard** | [**OrderCreditCardInfo**](OrderCreditCardInfo.md) |  | [optional] 
**PayedAt** | **string** | Date and time when the order was paid (ISO 8601) | 
**ErrorCode** | **string** | Error code, if any | 
**ErrorMessage** | **string** | Error message, if any | 
**Session** | [**OrderCreateResponseSession**](OrderCreateResponseSession.md) |  | [optional] 

[[Back to Model list]](../../README.md#documentation-for-models) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to README]](../../README.md)

