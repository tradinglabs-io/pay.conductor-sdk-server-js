# payconductor-sdk::PostOrdersRequestSession

Caso o externalSessionId ou sessionId sejam fornecidos e houver uma sessão existente, ela será atualizada com os novos dados. Caso contrário, uma nova sessão será criada.

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**expiresInMinutes** | **numeric** | Tempo em minutos para expiração da sessão do checkout | [optional] [default to 30] [Min: 15] 
**checkoutUrl** | **character** | URL do checkout para que possamos redirecionar | [optional] 
**sessionId** | **character** | Id gerado pelo nosso serviço para identificar a sessão de checkout | [optional] 
**externalSessionId** | **character** | Id da sessão de checkout gerado pelo lado do cliente. O id deve ser único para cada sessão de carrinho | [optional] [Min. length: 16] 


