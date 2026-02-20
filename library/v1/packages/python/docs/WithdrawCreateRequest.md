# WithdrawCreateRequest

Withdrawal or transfer request data

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**amount** | **float** | Withdrawal amount in cents | 
**external_id** | **str** | Withdrawal ID in your system | [optional] 
**merchant** | [**MerchantInput**](MerchantInput.md) |  | [optional] 
**payout_account** | [**WithdrawPayoutAccountData**](WithdrawPayoutAccountData.md) |  | 

## Example

```python
from payconductor_sdk.models.withdraw_create_request import WithdrawCreateRequest

# TODO update the JSON string below
json = "{}"
# create an instance of WithdrawCreateRequest from a JSON string
withdraw_create_request_instance = WithdrawCreateRequest.from_json(json)
# print the JSON string representation of the object
print(WithdrawCreateRequest.to_json())

# convert the object into a dict
withdraw_create_request_dict = withdraw_create_request_instance.to_dict()
# create an instance of WithdrawCreateRequest from a dict
withdraw_create_request_from_dict = WithdrawCreateRequest.from_dict(withdraw_create_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


