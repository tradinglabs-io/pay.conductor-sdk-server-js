# payconductor_sdk::WithdrawCreateResponse

Response after creating a withdrawal or transfer

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **character** | Unique withdrawal identifier | 
**externalId** | **character** | Withdrawal ID in your system | 
**externalIntegrationKey** | **character** | Provider key used for the withdrawal | 
**externalIntegrationId** | **character** | Withdrawal ID in the payment provider | 
**costFee** | **numeric** | Cost fee applied to the withdrawal | 
**status** | [**Status**](Status.md) |  | [Enum: ] 
**errorCode** | **character** | Error code, if any | 
**errorMessage** | **character** | Descriptive error message, if any | 
**payedAt** | [**WithdrawCreateResponsePayedAt**](Withdraw_Create_Response_payedAt.md) |  | 
**payoutAccount** | [**WithdrawCreateResponsePayoutAccount**](Withdraw_Create_Response_payoutAccount.md) |  | 


