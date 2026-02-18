
# PostOrders200Response

## Properties
| Name | Type | Description | Notes |
| ------------ | ------------- | ------------- | ------------- |
| **id** | **kotlin.String** | ID do pedido no sistema |  |
| **externalId** | **kotlin.String** | ID externo do pedido (fornecido pela sua integração) |  |
| **externalIntegrationKey** | **kotlin.String** | Provedor utilizada para processar o pedido |  |
| **externalIntegrationId** | **kotlin.String** | ID do pedido no provedor de pagamento |  |
| **amount** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Valor total do pedido |  |
| **costFee** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Taxa de custo aplicada ao pedido |  |
| **status** | [**inline**](#Status) |  |  |
| **paymentMethod** | [**inline**](#PaymentMethod) |  |  |
| **payedAt** | **kotlin.String** | Data e hora em que o pedido foi pago (ISO 8601) |  |
| **errorCode** | **kotlin.String** | Código de erro, se houver |  |
| **errorMessage** | **kotlin.String** | Mensagem de erro, se houver |  |
| **orderItems** | [**kotlin.collections.List&lt;PostOrders200ResponseOrderItemsInner&gt;**](PostOrders200ResponseOrderItemsInner.md) |  |  |
| **pix** | [**PostOrders200ResponsePix**](PostOrders200ResponsePix.md) |  |  [optional] |
| **bankSlip** | [**PostOrders200ResponseBankSlip**](PostOrders200ResponseBankSlip.md) |  |  [optional] |
| **nuPay** | [**PostOrders200ResponseNuPay**](PostOrders200ResponseNuPay.md) |  |  [optional] |
| **picPay** | [**PostOrders200ResponsePicPay**](PostOrders200ResponsePicPay.md) |  |  [optional] |
| **creditCard** | [**PostOrders200ResponseCreditCard**](PostOrders200ResponseCreditCard.md) |  |  [optional] |
| **session** | [**PostOrders200ResponseSession**](PostOrders200ResponseSession.md) |  |  [optional] |


<a id="Status"></a>
## Enum: status
| Name | Value |
| ---- | ----- |
| status | Generating, Pending, Completed, Failed, Canceled, Refunding, Refunded, InDispute, Chargeback |


<a id="PaymentMethod"></a>
## Enum: paymentMethod
| Name | Value |
| ---- | ----- |
| paymentMethod | Pix, CreditCard, DebitCard, BankSlip, Crypto, ApplePay, NuPay, PicPay, AmazonPay, SepaDebit, GooglePay |



