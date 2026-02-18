# PostWithdraws200Response

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **String** | Identificador único do saque | 
**external_id** | Option<**String**> | ID do saque no sistema no seu sistema | 
**external_integration_key** | **String** | Chave do provedor utilizado para o saque | 
**external_integration_id** | Option<**String**> | ID do saque no provedor de pagamento | 
**cost_fee** | **f64** | Taxa de custo aplicada ao saque | 
**status** | **Status** | Status do saque (enum: Pending, Transferring, Completed, Failed) | [default to Pending]
**error_code** | Option<**String**> | Código do erro, se houver | 
**error_message** | Option<**String**> | Mensagem descritiva do erro, se houver | 
**payed_at** | Option<[**models::PostWithdraws200ResponsePayedAt**](PostWithdraws200ResponsePayedAt.md)> |  | 
**payout_account** | [**models::PostWithdraws200ResponsePayoutAccount**](PostWithdraws200ResponsePayoutAccount.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


