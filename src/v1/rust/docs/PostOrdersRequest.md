# PostOrdersRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**charge_amount** | **f64** | Valor total a ser cobrado no pedido em valor flutuante | 
**client_ip** | **String** | Endereço IP do cliente | 
**customer** | [**models::Cliente**](Cliente.md) |  | 
**discount_amount** | **f64** | Valor do desconto | [default to 0]
**external_id** | **String** | ID da ordem no seu sistema | 
**fingerprints** | Option<[**models::PostOrdersRequestFingerprints**](PostOrdersRequestFingerprints.md)> |  | [optional]
**items** | Option<[**Vec<models::PostOrdersRequestItemsInner>**](PostOrdersRequestItemsInner.md)> | Lista de produtos ou serviços do pedido | [optional]
**merchant** | Option<[**models::MerchantInput**](MerchantInput.md)> |  | [optional]
**payment** | [**models::PostOrdersRequestPayment**](PostOrdersRequestPayment.md) |  | 
**split_amount_total** | Option<**f64**> | Valor total do split a ser pago ao merchant (Sendo usado apenas para fins de relatório, ou seja não gera split real) | [optional]
**session** | Option<[**models::PostOrdersRequestSession**](PostOrdersRequestSession.md)> |  | [optional]
**shipping_fee** | **f64** | Valor do frete | [default to 0]
**tax_fee** | **f64** | Taxas adicionais | [default to 0]
**metadata** | Option<**serde_json::Value**> | Metadados adicionais para o pedido como pares chave-valor. Não deve ter espaços ou caracteres especiais nas chaves | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


