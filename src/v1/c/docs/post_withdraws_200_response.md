# post_withdraws_200_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **char \*** | Identificador único do saque | 
**external_id** | **char \*** | ID do saque no sistema no seu sistema | 
**external_integration_key** | **char \*** | Chave do provedor utilizado para o saque | 
**external_integration_id** | **char \*** | ID do saque no provedor de pagamento | 
**cost_fee** | **double** | Taxa de custo aplicada ao saque | 
**status** | **payconductor_api_post_withdraws_200_response_STATUS_e** | Status do saque | [default to 'Pending']
**error_code** | **char \*** | Código do erro, se houver | 
**error_message** | **char \*** | Mensagem descritiva do erro, se houver | 
**payed_at** | [**post_withdraws_200_response_payed_at_t**](post_withdraws_200_response_payed_at.md) \* |  | 
**payout_account** | [**post_withdraws_200_response_payout_account_t**](post_withdraws_200_response_payout_account.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


