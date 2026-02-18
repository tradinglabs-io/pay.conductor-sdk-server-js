# PayconductorSdk.PostWithdraws200Response

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **String** | Identificador único do saque | 
**externalId** | **String** | ID do saque no sistema no seu sistema | 
**externalIntegrationKey** | **String** | Chave do provedor utilizado para o saque | 
**externalIntegrationId** | **String** | ID do saque no provedor de pagamento | 
**costFee** | **Number** | Taxa de custo aplicada ao saque | 
**status** | **String** | Status do saque | [default to &#39;Pending&#39;]
**errorCode** | **String** | Código do erro, se houver | 
**errorMessage** | **String** | Mensagem descritiva do erro, se houver | 
**payedAt** | [**PostWithdraws200ResponsePayedAt**](PostWithdraws200ResponsePayedAt.md) |  | 
**payoutAccount** | [**PostWithdraws200ResponsePayoutAccount**](PostWithdraws200ResponsePayoutAccount.md) |  | 



## Enum: StatusEnum


* `Pending` (value: `"Pending"`)

* `Transferring` (value: `"Transferring"`)

* `Completed` (value: `"Completed"`)

* `Failed` (value: `"Failed"`)




