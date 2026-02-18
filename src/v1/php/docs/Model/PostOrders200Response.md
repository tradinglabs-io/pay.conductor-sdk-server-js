# # PostOrders200Response

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **string** | ID do pedido no sistema |
**external_id** | **string** | ID externo do pedido (fornecido pela sua integração) |
**external_integration_key** | **string** | Provedor utilizada para processar o pedido |
**external_integration_id** | **string** | ID do pedido no provedor de pagamento |
**amount** | **float** | Valor total do pedido |
**cost_fee** | **float** | Taxa de custo aplicada ao pedido |
**pix** | [**\OpenAPI\Client\Model\PostOrders200ResponsePix**](PostOrders200ResponsePix.md) |  | [optional]
**bank_slip** | [**\OpenAPI\Client\Model\PostOrders200ResponseBankSlip**](PostOrders200ResponseBankSlip.md) |  | [optional]
**nu_pay** | [**\OpenAPI\Client\Model\PostOrders200ResponseNuPay**](PostOrders200ResponseNuPay.md) |  | [optional]
**pic_pay** | [**\OpenAPI\Client\Model\PostOrders200ResponsePicPay**](PostOrders200ResponsePicPay.md) |  | [optional]
**credit_card** | [**\OpenAPI\Client\Model\PostOrders200ResponseCreditCard**](PostOrders200ResponseCreditCard.md) |  | [optional]
**status** | **string** |  |
**payment_method** | **string** |  |
**payed_at** | **string** | Data e hora em que o pedido foi pago (ISO 8601) |
**error_code** | **string** | Código de erro, se houver |
**error_message** | **string** | Mensagem de erro, se houver |
**order_items** | [**\OpenAPI\Client\Model\PostOrders200ResponseOrderItemsInner[]**](PostOrders200ResponseOrderItemsInner.md) |  |
**session** | [**\OpenAPI\Client\Model\PostOrders200ResponseSession**](PostOrders200ResponseSession.md) |  | [optional]

[[Back to Model list]](../../README.md#models) [[Back to API list]](../../README.md#endpoints) [[Back to README]](../../README.md)
