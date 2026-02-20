
# OrderCreateResponse

## Properties
| Name | Type | Description | Notes |
| ------------ | ------------- | ------------- | ------------- |
| **id** | **kotlin.String** | Order ID in the system |  |
| **externalId** | **kotlin.String** | External order ID (provided by your integration) |  |
| **externalIntegrationKey** | **kotlin.String** | Provider used to process the order |  |
| **externalIntegrationId** | **kotlin.String** | Order ID in the payment provider |  |
| **amount** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Total order amount |  |
| **costFee** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Cost fee applied to the order |  |
| **status** | [**Status**](Status.md) |  |  |
| **paymentMethod** | [**PaymentMethod**](PaymentMethod.md) |  |  |
| **payedAt** | **kotlin.String** | Date and time when the order was paid (ISO 8601) |  |
| **errorCode** | **kotlin.String** | Error code, if any |  |
| **errorMessage** | **kotlin.String** | Error message, if any |  |
| **orderItems** | [**kotlin.collections.List&lt;OrderCreateResponseOrderItemsInner&gt;**](OrderCreateResponseOrderItemsInner.md) |  |  |
| **pix** | [**OrderPIXInfo**](OrderPIXInfo.md) |  |  [optional] |
| **bankSlip** | [**OrderBankSlipInfo**](OrderBankSlipInfo.md) |  |  [optional] |
| **nuPay** | [**OrderNuPayInfo**](OrderNuPayInfo.md) |  |  [optional] |
| **picPay** | [**OrderPicPayInfo**](OrderPicPayInfo.md) |  |  [optional] |
| **creditCard** | [**OrderCreditCardInfo**](OrderCreditCardInfo.md) |  |  [optional] |
| **session** | [**OrderCreateResponseSession**](OrderCreateResponseSession.md) |  |  [optional] |



