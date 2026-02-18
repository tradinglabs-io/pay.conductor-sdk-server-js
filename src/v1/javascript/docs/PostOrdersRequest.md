# PayconductorSdk.PostOrdersRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chargeAmount** | **Number** | Valor total a ser cobrado no pedido em valor flutuante | 
**clientIp** | **String** | Endereço IP do cliente | 
**customer** | [**Cliente**](Cliente.md) |  | 
**discountAmount** | **Number** | Valor do desconto | [default to 0]
**externalId** | **String** | ID da ordem no seu sistema | 
**fingerprints** | [**PostOrdersRequestFingerprints**](PostOrdersRequestFingerprints.md) |  | [optional] 
**items** | [**[PostOrdersRequestItemsInner]**](PostOrdersRequestItemsInner.md) | Lista de produtos ou serviços do pedido | [optional] 
**merchant** | [**MerchantInput**](MerchantInput.md) |  | [optional] 
**payment** | [**PostOrdersRequestPayment**](PostOrdersRequestPayment.md) |  | 
**splitAmountTotal** | **Number** | Valor total do split a ser pago ao merchant (Sendo usado apenas para fins de relatório, ou seja não gera split real) | [optional] 
**session** | [**PostOrdersRequestSession**](PostOrdersRequestSession.md) |  | [optional] 
**shippingFee** | **Number** | Valor do frete | [default to 0]
**taxFee** | **Number** | Taxas adicionais | [default to 0]
**metadata** | **Object** | Metadados adicionais para o pedido como pares chave-valor. Não deve ter espaços ou caracteres especiais nas chaves | [optional] 


