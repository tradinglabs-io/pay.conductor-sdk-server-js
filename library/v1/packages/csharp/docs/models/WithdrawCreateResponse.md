# payconductor_sdk.Model.WithdrawCreateResponse
Response after creating a withdrawal or transfer

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **string** | Unique withdrawal identifier | 
**ExternalIntegrationKey** | **string** | Provider key used for the withdrawal | 
**CostFee** | **decimal** | Cost fee applied to the withdrawal | 
**Status** | **Status** |  | 
**PayoutAccount** | [**WithdrawCreateResponsePayoutAccount**](WithdrawCreateResponsePayoutAccount.md) |  | 
**ExternalId** | **string** | Withdrawal ID in your system | 
**ExternalIntegrationId** | **string** | Withdrawal ID in the payment provider | 
**ErrorCode** | **string** | Error code, if any | 
**ErrorMessage** | **string** | Descriptive error message, if any | 
**PayedAt** | [**WithdrawCreateResponsePayedAt**](WithdrawCreateResponsePayedAt.md) |  | 

[[Back to Model list]](../../README.md#documentation-for-models) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to README]](../../README.md)

