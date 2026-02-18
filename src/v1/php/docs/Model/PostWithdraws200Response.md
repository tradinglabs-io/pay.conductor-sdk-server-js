# # PostWithdraws200Response

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **string** | Identificador único do saque |
**external_id** | **string** | ID do saque no sistema no seu sistema |
**external_integration_key** | **string** | Chave do provedor utilizado para o saque |
**external_integration_id** | **string** | ID do saque no provedor de pagamento |
**cost_fee** | **float** | Taxa de custo aplicada ao saque |
**status** | **string** | Status do saque | [default to 'Pending']
**error_code** | **string** | Código do erro, se houver |
**error_message** | **string** | Mensagem descritiva do erro, se houver |
**payed_at** | [**\OpenAPI\Client\Model\PostWithdraws200ResponsePayedAt**](PostWithdraws200ResponsePayedAt.md) |  |
**payout_account** | [**\OpenAPI\Client\Model\PostWithdraws200ResponsePayoutAccount**](PostWithdraws200ResponsePayoutAccount.md) |  |

[[Back to Model list]](../../README.md#models) [[Back to API list]](../../README.md#endpoints) [[Back to README]](../../README.md)
