# # OrderPaymentRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**payment_method** | **string** |  |
**expiration_in_seconds** | **float** | Order expiration time in seconds | [optional] [default to 3600]
**card** | [**\OpenAPI\Client\Model\OrderCreditCardPaymentRequestCard**](OrderCreditCardPaymentRequestCard.md) |  |
**installments** | **float** | Number of installments | [default to 1]
**soft_descriptor** | **string** | Text that will appear on the card statement (soft descriptor) | [optional]
**expiration_in_days** | **float** | Days until bank slip expires | [optional] [default to 7]
**nu_pay** | [**\OpenAPI\Client\Model\OrderNuPayPaymentRequestNuPay**](OrderNuPayPaymentRequestNuPay.md) |  |
**available_payment_methods** | [**\OpenAPI\Client\Model\AvailablePaymentMethods[]**](AvailablePaymentMethods.md) | Available payment methods for this order | [optional]

[[Back to Model list]](../../README.md#models) [[Back to API list]](../../README.md#endpoints) [[Back to README]](../../README.md)
