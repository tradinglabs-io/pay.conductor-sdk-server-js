

# PostOrdersRequest


## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**chargeAmount** | **BigDecimal** | Valor total a ser cobrado no pedido em valor flutuante |  |
|**clientIp** | **String** | Endereço IP do cliente |  |
|**customer** | [**Cliente**](Cliente.md) |  |  |
|**discountAmount** | **BigDecimal** | Valor do desconto |  |
|**externalId** | **String** | ID da ordem no seu sistema |  |
|**fingerprints** | [**PostOrdersRequestFingerprints**](PostOrdersRequestFingerprints.md) |  |  [optional] |
|**items** | [**List&lt;PostOrdersRequestItemsInner&gt;**](PostOrdersRequestItemsInner.md) | Lista de produtos ou serviços do pedido |  [optional] |
|**merchant** | [**MerchantInput**](MerchantInput.md) |  |  [optional] |
|**payment** | [**PostOrdersRequestPayment**](PostOrdersRequestPayment.md) |  |  |
|**splitAmountTotal** | **BigDecimal** | Valor total do split a ser pago ao merchant (Sendo usado apenas para fins de relatório, ou seja não gera split real) |  [optional] |
|**session** | [**PostOrdersRequestSession**](PostOrdersRequestSession.md) |  |  [optional] |
|**shippingFee** | **BigDecimal** | Valor do frete |  |
|**taxFee** | **BigDecimal** | Taxas adicionais |  |
|**metadata** | **Object** | Metadados adicionais para o pedido como pares chave-valor. Não deve ter espaços ou caracteres especiais nas chaves |  [optional] |



