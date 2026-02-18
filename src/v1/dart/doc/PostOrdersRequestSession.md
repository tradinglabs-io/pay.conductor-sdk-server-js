# openapi.model.PostOrdersRequestSession

## Load the model package
```dart
import 'package:openapi/api.dart';
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**expiresInMinutes** | **num** | Tempo em minutos para expiração da sessão do checkout | [optional] [default to 30]
**checkoutUrl** | **String** | URL do checkout para que possamos redirecionar | [optional] 
**sessionId** | **String** | Id gerado pelo nosso serviço para identificar a sessão de checkout | [optional] 
**externalSessionId** | **String** | Id da sessão de checkout gerado pelo lado do cliente. O id deve ser único para cada sessão de carrinho | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


