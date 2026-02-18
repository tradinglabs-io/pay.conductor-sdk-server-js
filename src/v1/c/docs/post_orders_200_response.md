# post_orders_200_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **char \*** | ID do pedido no sistema | 
**external_id** | **char \*** | ID externo do pedido (fornecido pela sua integração) | 
**external_integration_key** | **char \*** | Provedor utilizada para processar o pedido | 
**external_integration_id** | **char \*** | ID do pedido no provedor de pagamento | 
**amount** | **double** | Valor total do pedido | 
**cost_fee** | **double** | Taxa de custo aplicada ao pedido | 
**pix** | [**post_orders_200_response_pix_t**](post_orders_200_response_pix.md) \* |  | [optional] 
**bank_slip** | [**post_orders_200_response_bank_slip_t**](post_orders_200_response_bank_slip.md) \* |  | [optional] 
**nu_pay** | [**post_orders_200_response_nu_pay_t**](post_orders_200_response_nu_pay.md) \* |  | [optional] 
**pic_pay** | [**post_orders_200_response_pic_pay_t**](post_orders_200_response_pic_pay.md) \* |  | [optional] 
**credit_card** | [**post_orders_200_response_credit_card_t**](post_orders_200_response_credit_card.md) \* |  | [optional] 
**status** | **payconductor_api_post_orders_200_response_STATUS_e** |  | 
**payment_method** | **payconductor_api_post_orders_200_response_PAYMENTMETHOD_e** |  | 
**payed_at** | **char \*** | Data e hora em que o pedido foi pago (ISO 8601) | 
**error_code** | **char \*** | Código de erro, se houver | 
**error_message** | **char \*** | Mensagem de erro, se houver | 
**order_items** | [**list_t**](post_orders_200_response_order_items_inner.md) \* |  | 
**session** | [**post_orders_200_response_session_t**](post_orders_200_response_session.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


