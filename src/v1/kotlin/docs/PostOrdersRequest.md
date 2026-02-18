
# PostOrdersRequest

## Properties
| Name | Type | Description | Notes |
| ------------ | ------------- | ------------- | ------------- |
| **chargeAmount** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Valor total a ser cobrado no pedido em valor flutuante |  |
| **clientIp** | **kotlin.String** | Endereço IP do cliente |  |
| **customer** | [**Cliente**](Cliente.md) |  |  |
| **discountAmount** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Valor do desconto |  |
| **externalId** | **kotlin.String** | ID da ordem no seu sistema |  |
| **payment** | [**PostOrdersRequestPayment**](PostOrdersRequestPayment.md) |  |  |
| **shippingFee** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Valor do frete |  |
| **taxFee** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Taxas adicionais |  |
| **fingerprints** | [**PostOrdersRequestFingerprints**](PostOrdersRequestFingerprints.md) |  |  [optional] |
| **items** | [**kotlin.collections.List&lt;PostOrdersRequestItemsInner&gt;**](PostOrdersRequestItemsInner.md) | Lista de produtos ou serviços do pedido |  [optional] |
| **merchant** | [**MerchantInput**](MerchantInput.md) |  |  [optional] |
| **splitAmountTotal** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Valor total do split a ser pago ao merchant (Sendo usado apenas para fins de relatório, ou seja não gera split real) |  [optional] |
| **session** | [**PostOrdersRequestSession**](PostOrdersRequestSession.md) |  |  [optional] |
| **metadata** | [**kotlin.Any**](.md) | Metadados adicionais para o pedido como pares chave-valor. Não deve ter espaços ou caracteres especiais nas chaves |  [optional] |



