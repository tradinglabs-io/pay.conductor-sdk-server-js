

# OrderPaymentRequest

Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...)

## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**paymentMethod** | **PaymentMethod** |  |  |
|**expirationInSeconds** | **BigDecimal** | Order expiration time in seconds |  [optional] |
|**card** | [**OrderCreditCardPaymentRequestCard**](OrderCreditCardPaymentRequestCard.md) |  |  |
|**installments** | **BigDecimal** | Number of installments |  |
|**softDescriptor** | **String** | Text that will appear on the card statement (soft descriptor) |  [optional] |
|**expirationInDays** | **BigDecimal** | Days until bank slip expires |  [optional] |
|**nuPay** | [**OrderNuPayPaymentRequestNuPay**](OrderNuPayPaymentRequestNuPay.md) |  |  |
|**availablePaymentMethods** | **List&lt;AvailablePaymentMethods&gt;** | Available payment methods for this order |  [optional] |



