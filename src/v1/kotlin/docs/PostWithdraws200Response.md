
# PostWithdraws200Response

## Properties
| Name | Type | Description | Notes |
| ------------ | ------------- | ------------- | ------------- |
| **id** | **kotlin.String** | Identificador único do saque |  |
| **externalId** | **kotlin.String** | ID do saque no sistema no seu sistema |  |
| **externalIntegrationKey** | **kotlin.String** | Chave do provedor utilizado para o saque |  |
| **externalIntegrationId** | **kotlin.String** | ID do saque no provedor de pagamento |  |
| **costFee** | [**java.math.BigDecimal**](java.math.BigDecimal.md) | Taxa de custo aplicada ao saque |  |
| **status** | [**inline**](#Status) | Status do saque |  |
| **errorCode** | **kotlin.String** | Código do erro, se houver |  |
| **errorMessage** | **kotlin.String** | Mensagem descritiva do erro, se houver |  |
| **payedAt** | [**PostWithdraws200ResponsePayedAt**](PostWithdraws200ResponsePayedAt.md) |  |  |
| **payoutAccount** | [**PostWithdraws200ResponsePayoutAccount**](PostWithdraws200ResponsePayoutAccount.md) |  |  |


<a id="Status"></a>
## Enum: status
| Name | Value |
| ---- | ----- |
| status | Pending, Transferring, Completed, Failed |



