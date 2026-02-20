# payconductor_sdk::OrderCreateResponse

Response after creating an order

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **character** | Order ID in the system | 
**externalId** | **character** | External order ID (provided by your integration) | 
**externalIntegrationKey** | **character** | Provider used to process the order | 
**externalIntegrationId** | **character** | Order ID in the payment provider | 
**amount** | **numeric** | Total order amount | 
**costFee** | **numeric** | Cost fee applied to the order | 
**pix** | [**OrderPIXInfo**](Order_PIX_Info.md) |  | [optional] 
**bankSlip** | [**OrderBankSlipInfo**](Order_Bank_Slip_Info.md) |  | [optional] 
**nuPay** | [**OrderNuPayInfo**](Order_NuPay_Info.md) |  | [optional] 
**picPay** | [**OrderPicPayInfo**](Order_PicPay_Info.md) |  | [optional] 
**creditCard** | [**OrderCreditCardInfo**](Order_Credit_Card_Info.md) |  | [optional] 
**status** | [**Status**](Status.md) |  | [Enum: ] 
**paymentMethod** | [**PaymentMethod**](PaymentMethod.md) |  | [Enum: ] 
**payedAt** | **character** | Date and time when the order was paid (ISO 8601) | 
**errorCode** | **character** | Error code, if any | 
**errorMessage** | **character** | Error message, if any | 
**orderItems** | [**array[OrderCreateResponseOrderItemsInner]**](Order_Create_Response_orderItems_inner.md) |  | 
**session** | [**OrderCreateResponseSession**](Order_Create_Response_session.md) |  | [optional] 


