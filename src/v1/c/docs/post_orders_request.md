# post_orders_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**charge_amount** | **double** | Valor total a ser cobrado no pedido em valor flutuante | 
**client_ip** | **char \*** | Endereço IP do cliente | 
**customer** | [**cliente_t**](cliente.md) \* |  | 
**discount_amount** | **double** | Valor do desconto | [default to 0]
**external_id** | **char \*** | ID da ordem no seu sistema | 
**fingerprints** | [**post_orders_request_fingerprints_t**](post_orders_request_fingerprints.md) \* |  | [optional] 
**items** | [**list_t**](post_orders_request_items_inner.md) \* | Lista de produtos ou serviços do pedido | [optional] 
**merchant** | [**merchant_input_t**](merchant_input.md) \* |  | [optional] 
**payment** | [**post_orders_request_payment_t**](post_orders_request_payment.md) \* |  | 
**split_amount_total** | **double** | Valor total do split a ser pago ao merchant (Sendo usado apenas para fins de relatório, ou seja não gera split real) | [optional] 
**session** | [**post_orders_request_session_t**](post_orders_request_session.md) \* |  | [optional] 
**shipping_fee** | **double** | Valor do frete | [default to 0]
**tax_fee** | **double** | Taxas adicionais | [default to 0]
**metadata** | [**object_t**](.md) \* | Metadados adicionais para o pedido como pares chave-valor. Não deve ter espaços ou caracteres especiais nas chaves | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


