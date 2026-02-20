# WWW::OpenAPIClient::Object::WithdrawCreateResponse

## Load the model package
```perl
use WWW::OpenAPIClient::Object::WithdrawCreateResponse;
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **string** | Unique withdrawal identifier | 
**external_id** | **string** | Withdrawal ID in your system | 
**external_integration_key** | **string** | Provider key used for the withdrawal | 
**external_integration_id** | **string** | Withdrawal ID in the payment provider | 
**cost_fee** | **double** | Cost fee applied to the withdrawal | 
**status** | [**Status**](Status.md) |  | 
**error_code** | **string** | Error code, if any | 
**error_message** | **string** | Descriptive error message, if any | 
**payed_at** | [**WithdrawCreateResponsePayedAt**](WithdrawCreateResponsePayedAt.md) |  | 
**payout_account** | [**WithdrawCreateResponsePayoutAccount**](WithdrawCreateResponsePayoutAccount.md) |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


