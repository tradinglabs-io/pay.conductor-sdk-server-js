# # OrderCreateResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **string** | Order ID in the system |
**external_id** | **string** | External order ID (provided by your integration) |
**external_integration_key** | **string** | Provider used to process the order |
**external_integration_id** | **string** | Order ID in the payment provider |
**amount** | **float** | Total order amount |
**cost_fee** | **float** | Cost fee applied to the order |
**pix** | [**\OpenAPI\Client\Model\OrderPIXInfo**](OrderPIXInfo.md) |  | [optional]
**bank_slip** | [**\OpenAPI\Client\Model\OrderBankSlipInfo**](OrderBankSlipInfo.md) |  | [optional]
**nu_pay** | [**\OpenAPI\Client\Model\OrderNuPayInfo**](OrderNuPayInfo.md) |  | [optional]
**pic_pay** | [**\OpenAPI\Client\Model\OrderPicPayInfo**](OrderPicPayInfo.md) |  | [optional]
**credit_card** | [**\OpenAPI\Client\Model\OrderCreditCardInfo**](OrderCreditCardInfo.md) |  | [optional]
**status** | [**\OpenAPI\Client\Model\Status**](Status.md) |  |
**payment_method** | [**\OpenAPI\Client\Model\PaymentMethod**](PaymentMethod.md) |  |
**payed_at** | **string** | Date and time when the order was paid (ISO 8601) |
**error_code** | **string** | Error code, if any |
**error_message** | **string** | Error message, if any |
**order_items** | [**\OpenAPI\Client\Model\OrderCreateResponseOrderItemsInner[]**](OrderCreateResponseOrderItemsInner.md) |  |
**session** | [**\OpenAPI\Client\Model\OrderCreateResponseSession**](OrderCreateResponseSession.md) |  | [optional]

[[Back to Model list]](../../README.md#models) [[Back to API list]](../../README.md#endpoints) [[Back to README]](../../README.md)
