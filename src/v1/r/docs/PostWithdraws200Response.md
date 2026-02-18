# payconductor-sdk::PostWithdraws200Response


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **character** | Identificador único do saque | 
**externalId** | **character** | ID do saque no sistema no seu sistema | 
**externalIntegrationKey** | **character** | Chave do provedor utilizado para o saque | 
**externalIntegrationId** | **character** | ID do saque no provedor de pagamento | 
**costFee** | **numeric** | Taxa de custo aplicada ao saque | 
**status** | **character** | Status do saque | [default to &quot;Pending&quot;] [Enum: [Pending, Transferring, Completed, Failed]] 
**errorCode** | **character** | Código do erro, se houver | 
**errorMessage** | **character** | Mensagem descritiva do erro, se houver | 
**payedAt** | [**PostWithdraws200ResponsePayedAt**](postWithdraws_200_response_payedAt.md) |  | 
**payoutAccount** | [**PostWithdraws200ResponsePayoutAccount**](postWithdraws_200_response_payoutAccount.md) |  | 


