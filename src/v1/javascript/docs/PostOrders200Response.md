# PayconductorSdk.PostOrders200Response

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **String** | ID do pedido no sistema | 
**externalId** | **String** | ID externo do pedido (fornecido pela sua integração) | 
**externalIntegrationKey** | **String** | Provedor utilizada para processar o pedido | 
**externalIntegrationId** | **String** | ID do pedido no provedor de pagamento | 
**amount** | **Number** | Valor total do pedido | 
**costFee** | **Number** | Taxa de custo aplicada ao pedido | 
**pix** | [**PostOrders200ResponsePix**](PostOrders200ResponsePix.md) |  | [optional] 
**bankSlip** | [**PostOrders200ResponseBankSlip**](PostOrders200ResponseBankSlip.md) |  | [optional] 
**nuPay** | [**PostOrders200ResponseNuPay**](PostOrders200ResponseNuPay.md) |  | [optional] 
**picPay** | [**PostOrders200ResponsePicPay**](PostOrders200ResponsePicPay.md) |  | [optional] 
**creditCard** | [**PostOrders200ResponseCreditCard**](PostOrders200ResponseCreditCard.md) |  | [optional] 
**status** | **String** |  | 
**paymentMethod** | **String** |  | 
**payedAt** | **String** | Data e hora em que o pedido foi pago (ISO 8601) | 
**errorCode** | **String** | Código de erro, se houver | 
**errorMessage** | **String** | Mensagem de erro, se houver | 
**orderItems** | [**[PostOrders200ResponseOrderItemsInner]**](PostOrders200ResponseOrderItemsInner.md) |  | 
**session** | [**PostOrders200ResponseSession**](PostOrders200ResponseSession.md) |  | [optional] 



## Enum: StatusEnum


* `Generating` (value: `"Generating"`)

* `Pending` (value: `"Pending"`)

* `Completed` (value: `"Completed"`)

* `Failed` (value: `"Failed"`)

* `Canceled` (value: `"Canceled"`)

* `Refunding` (value: `"Refunding"`)

* `Refunded` (value: `"Refunded"`)

* `InDispute` (value: `"InDispute"`)

* `Chargeback` (value: `"Chargeback"`)





## Enum: PaymentMethodEnum


* `Pix` (value: `"Pix"`)

* `CreditCard` (value: `"CreditCard"`)

* `DebitCard` (value: `"DebitCard"`)

* `BankSlip` (value: `"BankSlip"`)

* `Crypto` (value: `"Crypto"`)

* `ApplePay` (value: `"ApplePay"`)

* `NuPay` (value: `"NuPay"`)

* `PicPay` (value: `"PicPay"`)

* `AmazonPay` (value: `"AmazonPay"`)

* `SepaDebit` (value: `"SepaDebit"`)

* `GooglePay` (value: `"GooglePay"`)




