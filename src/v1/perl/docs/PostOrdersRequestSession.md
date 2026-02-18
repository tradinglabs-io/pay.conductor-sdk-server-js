# WWW::OpenAPIClient::Object::PostOrdersRequestSession

## Load the model package
```perl
use WWW::OpenAPIClient::Object::PostOrdersRequestSession;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**expires_in_minutes** | **double** | Tempo em minutos para expiração da sessão do checkout | [optional] [default to 30]
**checkout_url** | **string** | URL do checkout para que possamos redirecionar | [optional] 
**session_id** | **string** | Id gerado pelo nosso serviço para identificar a sessão de checkout | [optional] 
**external_session_id** | **string** | Id da sessão de checkout gerado pelo lado do cliente. O id deve ser único para cada sessão de carrinho | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


