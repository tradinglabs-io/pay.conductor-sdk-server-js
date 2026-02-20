# payconductor_sdk.Model.OrderConfirmResponse
Response after confirming a draft order

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **string** | Order ID in the system | 
**Amount** | **decimal** | Total order amount | 
**CostFee** | **decimal** | Cost fee applied to the order | 
**Status** | **Status** |  | 
**PaymentMethod** | **PaymentMethod** |  | 
**ExternalId** | **string** | External order ID (provided by your integration) | 
**Pix** | [**OrderPIXInfo**](OrderPIXInfo.md) |  | [optional] 
**BankSlip** | [**OrderBankSlipInfo**](OrderBankSlipInfo.md) |  | [optional] 
**NuPay** | [**OrderNuPayInfo**](OrderNuPayInfo.md) |  | [optional] 
**PicPay** | [**OrderPicPayInfo**](OrderPicPayInfo.md) |  | [optional] 
**PayedAt** | **string** | Date and time when the order was paid (ISO 8601) | 
**ErrorCode** | **string** | Error code, if any | 
**ErrorMessage** | **string** | Error message, if any | 

[[Back to Model list]](../../README.md#documentation-for-models) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to README]](../../README.md)

