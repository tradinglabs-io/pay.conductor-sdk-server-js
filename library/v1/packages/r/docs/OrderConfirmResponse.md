# payconductor_sdk::OrderConfirmResponse

Response after confirming a draft order

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **character** | Order ID in the system | 
**externalId** | **character** | External order ID (provided by your integration) | 
**amount** | **numeric** | Total order amount | 
**costFee** | **numeric** | Cost fee applied to the order | 
**pix** | [**OrderPIXInfo**](Order_PIX_Info.md) |  | [optional] 
**bankSlip** | [**OrderBankSlipInfo**](Order_Bank_Slip_Info.md) |  | [optional] 
**nuPay** | [**OrderNuPayInfo**](Order_NuPay_Info.md) |  | [optional] 
**picPay** | [**OrderPicPayInfo**](Order_PicPay_Info.md) |  | [optional] 
**status** | [**Status**](Status.md) |  | [Enum: ] 
**paymentMethod** | [**PaymentMethod**](PaymentMethod.md) |  | [Enum: ] 
**payedAt** | **character** | Date and time when the order was paid (ISO 8601) | 
**errorCode** | **character** | Error code, if any | 
**errorMessage** | **character** | Error message, if any | 


