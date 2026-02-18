

# PostOrders200Response


## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**id** | **String** | ID do pedido no sistema |  |
|**externalId** | **String** | ID externo do pedido (fornecido pela sua integração) |  |
|**externalIntegrationKey** | **String** | Provedor utilizada para processar o pedido |  |
|**externalIntegrationId** | **String** | ID do pedido no provedor de pagamento |  |
|**amount** | **BigDecimal** | Valor total do pedido |  |
|**costFee** | **BigDecimal** | Taxa de custo aplicada ao pedido |  |
|**pix** | [**PostOrders200ResponsePix**](PostOrders200ResponsePix.md) |  |  [optional] |
|**bankSlip** | [**PostOrders200ResponseBankSlip**](PostOrders200ResponseBankSlip.md) |  |  [optional] |
|**nuPay** | [**PostOrders200ResponseNuPay**](PostOrders200ResponseNuPay.md) |  |  [optional] |
|**picPay** | [**PostOrders200ResponsePicPay**](PostOrders200ResponsePicPay.md) |  |  [optional] |
|**creditCard** | [**PostOrders200ResponseCreditCard**](PostOrders200ResponseCreditCard.md) |  |  [optional] |
|**status** | [**StatusEnum**](#StatusEnum) |  |  |
|**paymentMethod** | [**PaymentMethodEnum**](#PaymentMethodEnum) |  |  |
|**payedAt** | **String** | Data e hora em que o pedido foi pago (ISO 8601) |  |
|**errorCode** | **String** | Código de erro, se houver |  |
|**errorMessage** | **String** | Mensagem de erro, se houver |  |
|**orderItems** | [**List&lt;PostOrders200ResponseOrderItemsInner&gt;**](PostOrders200ResponseOrderItemsInner.md) |  |  |
|**session** | [**PostOrders200ResponseSession**](PostOrders200ResponseSession.md) |  |  [optional] |



## Enum: StatusEnum

| Name | Value |
|---- | -----|
| GENERATING | &quot;Generating&quot; |
| PENDING | &quot;Pending&quot; |
| COMPLETED | &quot;Completed&quot; |
| FAILED | &quot;Failed&quot; |
| CANCELED | &quot;Canceled&quot; |
| REFUNDING | &quot;Refunding&quot; |
| REFUNDED | &quot;Refunded&quot; |
| IN_DISPUTE | &quot;InDispute&quot; |
| CHARGEBACK | &quot;Chargeback&quot; |



## Enum: PaymentMethodEnum

| Name | Value |
|---- | -----|
| PIX | &quot;Pix&quot; |
| CREDIT_CARD | &quot;CreditCard&quot; |
| DEBIT_CARD | &quot;DebitCard&quot; |
| BANK_SLIP | &quot;BankSlip&quot; |
| CRYPTO | &quot;Crypto&quot; |
| APPLE_PAY | &quot;ApplePay&quot; |
| NU_PAY | &quot;NuPay&quot; |
| PIC_PAY | &quot;PicPay&quot; |
| AMAZON_PAY | &quot;AmazonPay&quot; |
| SEPA_DEBIT | &quot;SepaDebit&quot; |
| GOOGLE_PAY | &quot;GooglePay&quot; |



