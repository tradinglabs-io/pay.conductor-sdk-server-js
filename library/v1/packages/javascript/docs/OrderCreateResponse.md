# PayconductorSdk.OrderCreateResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **String** | Order ID in the system | 
**externalId** | **String** | External order ID (provided by your integration) | 
**externalIntegrationKey** | **String** | Provider used to process the order | 
**externalIntegrationId** | **String** | Order ID in the payment provider | 
**amount** | **Number** | Total order amount | 
**costFee** | **Number** | Cost fee applied to the order | 
**pix** | [**OrderPIXInfo**](OrderPIXInfo.md) |  | [optional] 
**bankSlip** | [**OrderBankSlipInfo**](OrderBankSlipInfo.md) |  | [optional] 
**nuPay** | [**OrderNuPayInfo**](OrderNuPayInfo.md) |  | [optional] 
**picPay** | [**OrderPicPayInfo**](OrderPicPayInfo.md) |  | [optional] 
**creditCard** | [**OrderCreditCardInfo**](OrderCreditCardInfo.md) |  | [optional] 
**status** | [**Status**](Status.md) |  | 
**paymentMethod** | [**PaymentMethod**](PaymentMethod.md) |  | 
**payedAt** | **String** | Date and time when the order was paid (ISO 8601) | 
**errorCode** | **String** | Error code, if any | 
**errorMessage** | **String** | Error message, if any | 
**orderItems** | [**[OrderCreateResponseOrderItemsInner]**](OrderCreateResponseOrderItemsInner.md) |  | 
**session** | [**OrderCreateResponseSession**](OrderCreateResponseSession.md) |  | [optional] 


