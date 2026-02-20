# # WithdrawCreateResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **string** | Unique withdrawal identifier |
**external_id** | **string** | Withdrawal ID in your system |
**external_integration_key** | **string** | Provider key used for the withdrawal |
**external_integration_id** | **string** | Withdrawal ID in the payment provider |
**cost_fee** | **float** | Cost fee applied to the withdrawal |
**status** | [**\OpenAPI\Client\Model\Status**](Status.md) |  |
**error_code** | **string** | Error code, if any |
**error_message** | **string** | Descriptive error message, if any |
**payed_at** | [**\OpenAPI\Client\Model\WithdrawCreateResponsePayedAt**](WithdrawCreateResponsePayedAt.md) |  |
**payout_account** | [**\OpenAPI\Client\Model\WithdrawCreateResponsePayoutAccount**](WithdrawCreateResponsePayoutAccount.md) |  |

[[Back to Model list]](../../README.md#models) [[Back to API list]](../../README.md#endpoints) [[Back to README]](../../README.md)
