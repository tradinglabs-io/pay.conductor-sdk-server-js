# payconductor-sdk::PostOrders200Response


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **character** | ID do pedido no sistema | 
**externalId** | **character** | ID externo do pedido (fornecido pela sua integração) | 
**externalIntegrationKey** | **character** | Provedor utilizada para processar o pedido | 
**externalIntegrationId** | **character** | ID do pedido no provedor de pagamento | 
**amount** | **numeric** | Valor total do pedido | 
**costFee** | **numeric** | Taxa de custo aplicada ao pedido | 
**pix** | [**PostOrders200ResponsePix**](postOrders_200_response_pix.md) |  | [optional] 
**bankSlip** | [**PostOrders200ResponseBankSlip**](postOrders_200_response_bankSlip.md) |  | [optional] 
**nuPay** | [**PostOrders200ResponseNuPay**](postOrders_200_response_nuPay.md) |  | [optional] 
**picPay** | [**PostOrders200ResponsePicPay**](postOrders_200_response_picPay.md) |  | [optional] 
**creditCard** | [**PostOrders200ResponseCreditCard**](postOrders_200_response_creditCard.md) |  | [optional] 
**status** | **character** |  | [Enum: [Generating, Pending, Completed, Failed, Canceled, Refunding, Refunded, InDispute, Chargeback]] 
**paymentMethod** | **character** |  | [Enum: [Pix, CreditCard, DebitCard, BankSlip, Crypto, ApplePay, NuPay, PicPay, AmazonPay, SepaDebit, GooglePay]] 
**payedAt** | **character** | Data e hora em que o pedido foi pago (ISO 8601) | 
**errorCode** | **character** | Código de erro, se houver | 
**errorMessage** | **character** | Mensagem de erro, se houver | 
**orderItems** | [**array[PostOrders200ResponseOrderItemsInner]**](postOrders_200_response_orderItems_inner.md) |  | 
**session** | [**PostOrders200ResponseSession**](postOrders_200_response_session.md) |  | [optional] 


