# WWW::OpenAPIClient::Object::PostWithdraws200Response

## Load the model package
```perl
use WWW::OpenAPIClient::Object::PostWithdraws200Response;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **string** | Identificador único do saque | 
**external_id** | **string** | ID do saque no sistema no seu sistema | 
**external_integration_key** | **string** | Chave do provedor utilizado para o saque | 
**external_integration_id** | **string** | ID do saque no provedor de pagamento | 
**cost_fee** | **double** | Taxa de custo aplicada ao saque | 
**status** | **string** | Status do saque | [default to &#39;Pending&#39;]
**error_code** | **string** | Código do erro, se houver | 
**error_message** | **string** | Mensagem descritiva do erro, se houver | 
**payed_at** | [**PostWithdraws200ResponsePayedAt**](PostWithdraws200ResponsePayedAt.md) |  | 
**payout_account** | [**PostWithdraws200ResponsePayoutAccount**](PostWithdraws200ResponsePayoutAccount.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


