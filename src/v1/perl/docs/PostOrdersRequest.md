# WWW::OpenAPIClient::Object::PostOrdersRequest

## Load the model package
```perl
use WWW::OpenAPIClient::Object::PostOrdersRequest;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**charge_amount** | **double** | Valor total a ser cobrado no pedido em valor flutuante | 
**client_ip** | **string** | Endereço IP do cliente | 
**customer** | [**Cliente**](Cliente.md) |  | 
**discount_amount** | **double** | Valor do desconto | [default to 0]
**external_id** | **string** | ID da ordem no seu sistema | 
**fingerprints** | [**PostOrdersRequestFingerprints**](PostOrdersRequestFingerprints.md) |  | [optional] 
**items** | [**ARRAY[PostOrdersRequestItemsInner]**](PostOrdersRequestItemsInner.md) | Lista de produtos ou serviços do pedido | [optional] 
**merchant** | [**MerchantInput**](MerchantInput.md) |  | [optional] 
**payment** | [**PostOrdersRequestPayment**](PostOrdersRequestPayment.md) |  | 
**split_amount_total** | **double** | Valor total do split a ser pago ao merchant (Sendo usado apenas para fins de relatório, ou seja não gera split real) | [optional] 
**session** | [**PostOrdersRequestSession**](PostOrdersRequestSession.md) |  | [optional] 
**shipping_fee** | **double** | Valor do frete | [default to 0]
**tax_fee** | **double** | Taxas adicionais | [default to 0]
**metadata** | **object** | Metadados adicionais para o pedido como pares chave-valor. Não deve ter espaços ou caracteres especiais nas chaves | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


