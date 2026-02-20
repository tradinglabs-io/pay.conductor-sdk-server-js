# withdraw_create_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **char \*** | Unique withdrawal identifier | 
**external_id** | **char \*** | Withdrawal ID in your system | 
**external_integration_key** | **char \*** | Provider key used for the withdrawal | 
**external_integration_id** | **char \*** | Withdrawal ID in the payment provider | 
**cost_fee** | **double** | Cost fee applied to the withdrawal | 
**status** | **status_t \*** |  | 
**error_code** | **char \*** | Error code, if any | 
**error_message** | **char \*** | Descriptive error message, if any | 
**payed_at** | [**withdraw_create_response_payed_at_t**](withdraw_create_response_payed_at.md) \* |  | 
**payout_account** | [**withdraw_create_response_payout_account_t**](withdraw_create_response_payout_account.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


