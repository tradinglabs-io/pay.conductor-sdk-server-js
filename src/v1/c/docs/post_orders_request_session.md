# post_orders_request_session_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**expires_in_minutes** | **double** | Tempo em minutos para expiração da sessão do checkout | [optional] [default to 30]
**checkout_url** | **char \*** | URL do checkout para que possamos redirecionar | [optional] 
**session_id** | **char \*** | Id gerado pelo nosso serviço para identificar a sessão de checkout | [optional] 
**external_session_id** | **char \*** | Id da sessão de checkout gerado pelo lado do cliente. O id deve ser único para cada sessão de carrinho | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


