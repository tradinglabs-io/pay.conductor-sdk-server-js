# payconductor-sdk::PostOrdersRequest


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chargeAmount** | **numeric** | Valor total a ser cobrado no pedido em valor flutuante | 
**clientIp** | **character** | Endereço IP do cliente | 
**customer** | [**Cliente**](Cliente.md) |  | 
**discountAmount** | **numeric** | Valor do desconto | [default to 0] 
**externalId** | **character** | ID da ordem no seu sistema | 
**fingerprints** | [**PostOrdersRequestFingerprints**](postOrders_request_fingerprints.md) |  | [optional] 
**items** | [**array[PostOrdersRequestItemsInner]**](postOrders_request_items_inner.md) | Lista de produtos ou serviços do pedido | [optional] [Max. items: 20] 
**merchant** | [**MerchantInput**](MerchantInput.md) |  | [optional] 
**payment** | [**PostOrdersRequestPayment**](postOrders_request_payment.md) |  | 
**splitAmountTotal** | **numeric** | Valor total do split a ser pago ao merchant (Sendo usado apenas para fins de relatório, ou seja não gera split real) | [optional] [Min: 0] 
**session** | [**PostOrdersRequestSession**](postOrders_request_session.md) |  | [optional] 
**shippingFee** | **numeric** | Valor do frete | [default to 0] 
**taxFee** | **numeric** | Taxas adicionais | [default to 0] 
**metadata** | **object** | Metadados adicionais para o pedido como pares chave-valor. Não deve ter espaços ou caracteres especiais nas chaves | [optional] 


