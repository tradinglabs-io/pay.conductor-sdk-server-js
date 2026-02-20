# WithdrawCreateResponse

Response after creating a withdrawal or transfer

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **str** | Unique withdrawal identifier | 
**external_id** | **str** | Withdrawal ID in your system | 
**external_integration_key** | **str** | Provider key used for the withdrawal | 
**external_integration_id** | **str** | Withdrawal ID in the payment provider | 
**cost_fee** | **float** | Cost fee applied to the withdrawal | 
**status** | [**Status**](Status.md) |  | 
**error_code** | **str** | Error code, if any | 
**error_message** | **str** | Descriptive error message, if any | 
**payed_at** | [**WithdrawCreateResponsePayedAt**](WithdrawCreateResponsePayedAt.md) |  | 
**payout_account** | [**WithdrawCreateResponsePayoutAccount**](WithdrawCreateResponsePayoutAccount.md) |  | 

## Example

```python
from payconductor_sdk.models.withdraw_create_response import WithdrawCreateResponse

# TODO update the JSON string below
json = "{}"
# create an instance of WithdrawCreateResponse from a JSON string
withdraw_create_response_instance = WithdrawCreateResponse.from_json(json)
# print the JSON string representation of the object
print(WithdrawCreateResponse.to_json())

# convert the object into a dict
withdraw_create_response_dict = withdraw_create_response_instance.to_dict()
# create an instance of WithdrawCreateResponse from a dict
withdraw_create_response_from_dict = WithdrawCreateResponse.from_dict(withdraw_create_response_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


