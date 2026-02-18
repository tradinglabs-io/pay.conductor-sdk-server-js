

# PostOrdersRequestSession

Caso o externalSessionId ou sessionId sejam fornecidos e houver uma sessão existente, ela será atualizada com os novos dados. Caso contrário, uma nova sessão será criada.

## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**expiresInMinutes** | **BigDecimal** | Tempo em minutos para expiração da sessão do checkout |  [optional] |
|**checkoutUrl** | **String** | URL do checkout para que possamos redirecionar |  [optional] |
|**sessionId** | **String** | Id gerado pelo nosso serviço para identificar a sessão de checkout |  [optional] |
|**externalSessionId** | **String** | Id da sessão de checkout gerado pelo lado do cliente. O id deve ser único para cada sessão de carrinho |  [optional] |



