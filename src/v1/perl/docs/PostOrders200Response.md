# WWW::OpenAPIClient::Object::PostOrders200Response

## Load the model package
```perl
use WWW::OpenAPIClient::Object::PostOrders200Response;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **string** | ID do pedido no sistema | 
**external_id** | **string** | ID externo do pedido (fornecido pela sua integração) | 
**external_integration_key** | **string** | Provedor utilizada para processar o pedido | 
**external_integration_id** | **string** | ID do pedido no provedor de pagamento | 
**amount** | **double** | Valor total do pedido | 
**cost_fee** | **double** | Taxa de custo aplicada ao pedido | 
**pix** | [**PostOrders200ResponsePix**](PostOrders200ResponsePix.md) |  | [optional] 
**bank_slip** | [**PostOrders200ResponseBankSlip**](PostOrders200ResponseBankSlip.md) |  | [optional] 
**nu_pay** | [**PostOrders200ResponseNuPay**](PostOrders200ResponseNuPay.md) |  | [optional] 
**pic_pay** | [**PostOrders200ResponsePicPay**](PostOrders200ResponsePicPay.md) |  | [optional] 
**credit_card** | [**PostOrders200ResponseCreditCard**](PostOrders200ResponseCreditCard.md) |  | [optional] 
**status** | **string** |  | 
**payment_method** | **string** |  | 
**payed_at** | **string** | Data e hora em que o pedido foi pago (ISO 8601) | 
**error_code** | **string** | Código de erro, se houver | 
**error_message** | **string** | Mensagem de erro, se houver | 
**order_items** | [**ARRAY[PostOrders200ResponseOrderItemsInner]**](PostOrders200ResponseOrderItemsInner.md) |  | 
**session** | [**PostOrders200ResponseSession**](PostOrders200ResponseSession.md) |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


