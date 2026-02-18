# # PostOrdersRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**charge_amount** | **float** | Valor total a ser cobrado no pedido em valor flutuante |
**client_ip** | **string** | Endereço IP do cliente |
**customer** | [**\OpenAPI\Client\Model\Cliente**](Cliente.md) |  |
**discount_amount** | **float** | Valor do desconto | [default to 0]
**external_id** | **string** | ID da ordem no seu sistema |
**fingerprints** | [**\OpenAPI\Client\Model\PostOrdersRequestFingerprints**](PostOrdersRequestFingerprints.md) |  | [optional]
**items** | [**\OpenAPI\Client\Model\PostOrdersRequestItemsInner[]**](PostOrdersRequestItemsInner.md) | Lista de produtos ou serviços do pedido | [optional]
**merchant** | [**\OpenAPI\Client\Model\MerchantInput**](MerchantInput.md) |  | [optional]
**payment** | [**\OpenAPI\Client\Model\PostOrdersRequestPayment**](PostOrdersRequestPayment.md) |  |
**split_amount_total** | **float** | Valor total do split a ser pago ao merchant (Sendo usado apenas para fins de relatório, ou seja não gera split real) | [optional]
**session** | [**\OpenAPI\Client\Model\PostOrdersRequestSession**](PostOrdersRequestSession.md) |  | [optional]
**shipping_fee** | **float** | Valor do frete | [default to 0]
**tax_fee** | **float** | Taxas adicionais | [default to 0]
**metadata** | **object** | Metadados adicionais para o pedido como pares chave-valor. Não deve ter espaços ou caracteres especiais nas chaves | [optional]

[[Back to Model list]](../../README.md#models) [[Back to API list]](../../README.md#endpoints) [[Back to README]](../../README.md)
