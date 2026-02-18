# PostOrders200Response

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **String** | ID do pedido no sistema | 
**external_id** | Option<**String**> | ID externo do pedido (fornecido pela sua integração) | 
**external_integration_key** | **String** | Provedor utilizada para processar o pedido | 
**external_integration_id** | Option<**String**> | ID do pedido no provedor de pagamento | 
**amount** | **f64** | Valor total do pedido | 
**cost_fee** | **f64** | Taxa de custo aplicada ao pedido | 
**pix** | Option<[**models::PostOrders200ResponsePix**](PostOrders200ResponsePix.md)> |  | [optional]
**bank_slip** | Option<[**models::PostOrders200ResponseBankSlip**](PostOrders200ResponseBankSlip.md)> |  | [optional]
**nu_pay** | Option<[**models::PostOrders200ResponseNuPay**](PostOrders200ResponseNuPay.md)> |  | [optional]
**pic_pay** | Option<[**models::PostOrders200ResponsePicPay**](PostOrders200ResponsePicPay.md)> |  | [optional]
**credit_card** | Option<[**models::PostOrders200ResponseCreditCard**](PostOrders200ResponseCreditCard.md)> |  | [optional]
**status** | **Status** |  (enum: Generating, Pending, Completed, Failed, Canceled, Refunding, Refunded, InDispute, Chargeback) | 
**payment_method** | **PaymentMethod** |  (enum: Pix, CreditCard, DebitCard, BankSlip, Crypto, ApplePay, NuPay, PicPay, AmazonPay, SepaDebit, GooglePay) | 
**payed_at** | Option<**String**> | Data e hora em que o pedido foi pago (ISO 8601) | 
**error_code** | Option<**String**> | Código de erro, se houver | 
**error_message** | Option<**String**> | Mensagem de erro, se houver | 
**order_items** | [**Vec<models::PostOrders200ResponseOrderItemsInner>**](PostOrders200ResponseOrderItemsInner.md) |  | 
**session** | Option<[**models::PostOrders200ResponseSession**](PostOrders200ResponseSession.md)> |  | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


