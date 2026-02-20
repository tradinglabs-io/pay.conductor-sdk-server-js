
# OrderPaymentRequest

## Properties
| Name | Type | Description | Notes |
| ------------ | ------------- | ------------- | ------------- |
| **paymentMethod** | **kotlin.String** |  |  |
| **card** | [**OrderCreditCardPaymentRequestCard**](OrderCreditCardPaymentRequestCard.md) |  |  |
| **installments** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Number of installments |  |
| **nuPay** | [**OrderNuPayPaymentRequestNuPay**](OrderNuPayPaymentRequestNuPay.md) |  |  |
| **expirationInSeconds** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Order expiration time in seconds |  [optional] |
| **softDescriptor** | **kotlin.String** | Text that will appear on the card statement (soft descriptor) |  [optional] |
| **expirationInDays** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Days until bank slip expires |  [optional] |
| **availablePaymentMethods** | [**kotlin.collections.List&lt;AvailablePaymentMethods&gt;**](AvailablePaymentMethods.md) | Available payment methods for this order |  [optional] |



