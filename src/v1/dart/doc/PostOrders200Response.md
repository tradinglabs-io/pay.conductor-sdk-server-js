# openapi.model.PostOrders200Response

## Load the model package
```dart
import 'package:openapi/api.dart';
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **String** | ID do pedido no sistema | 
**externalId** | **String** | ID externo do pedido (fornecido pela sua integração) | 
**externalIntegrationKey** | **String** | Provedor utilizada para processar o pedido | 
**externalIntegrationId** | **String** | ID do pedido no provedor de pagamento | 
**amount** | **num** | Valor total do pedido | 
**costFee** | **num** | Taxa de custo aplicada ao pedido | 
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
**orderItems** | [**BuiltList&lt;PostOrders200ResponseOrderItemsInner&gt;**](PostOrders200ResponseOrderItemsInner.md) |  | 
**session** | [**PostOrders200ResponseSession**](PostOrders200ResponseSession.md) |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


