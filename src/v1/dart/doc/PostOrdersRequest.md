# openapi.model.PostOrdersRequest

## Load the model package
```dart
import 'package:openapi/api.dart';
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chargeAmount** | **num** | Valor total a ser cobrado no pedido em valor flutuante | 
**clientIp** | **String** | Endereço IP do cliente | 
**customer** | [**Cliente**](Cliente.md) |  | 
**discountAmount** | **num** | Valor do desconto | [default to 0]
**externalId** | **String** | ID da ordem no seu sistema | 
**fingerprints** | [**PostOrdersRequestFingerprints**](PostOrdersRequestFingerprints.md) |  | [optional] 
**items** | [**BuiltList&lt;PostOrdersRequestItemsInner&gt;**](PostOrdersRequestItemsInner.md) | Lista de produtos ou serviços do pedido | [optional] 
**merchant** | [**MerchantInput**](MerchantInput.md) |  | [optional] 
**payment** | [**PostOrdersRequestPayment**](PostOrdersRequestPayment.md) |  | 
**splitAmountTotal** | **num** | Valor total do split a ser pago ao merchant (Sendo usado apenas para fins de relatório, ou seja não gera split real) | [optional] 
**session** | [**PostOrdersRequestSession**](PostOrdersRequestSession.md) |  | [optional] 
**shippingFee** | **num** | Valor do frete | [default to 0]
**taxFee** | **num** | Taxas adicionais | [default to 0]
**metadata** | [**JsonObject**](.md) | Metadados adicionais para o pedido como pares chave-valor. Não deve ter espaços ou caracteres especiais nas chaves | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


