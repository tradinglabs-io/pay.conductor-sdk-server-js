# openapi.model.PostWithdraws200Response

## Load the model package
```dart
import 'package:openapi/api.dart';
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **String** | Identificador único do saque | 
**externalId** | **String** | ID do saque no sistema no seu sistema | 
**externalIntegrationKey** | **String** | Chave do provedor utilizado para o saque | 
**externalIntegrationId** | **String** | ID do saque no provedor de pagamento | 
**costFee** | **num** | Taxa de custo aplicada ao saque | 
**status** | **String** | Status do saque | [default to 'Pending']
**errorCode** | **String** | Código do erro, se houver | 
**errorMessage** | **String** | Mensagem descritiva do erro, se houver | 
**payedAt** | [**PostWithdraws200ResponsePayedAt**](PostWithdraws200ResponsePayedAt.md) |  | 
**payoutAccount** | [**PostWithdraws200ResponsePayoutAccount**](PostWithdraws200ResponsePayoutAccount.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


