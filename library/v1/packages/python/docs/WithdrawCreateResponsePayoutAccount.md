# WithdrawCreateResponsePayoutAccount


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **str** | Unique payment account identifier | 
**owner_document** | **str** | Account holder document (CPF or CNPJ) | 
**owner_name** | **str** | Account holder name | 
**pix_key** | **str** | PIX key used for the withdrawal | 
**pix_type** | [**PixType**](PixType.md) |  | 

## Example

```python
from payconductor_sdk.models.withdraw_create_response_payout_account import WithdrawCreateResponsePayoutAccount

# TODO update the JSON string below
json = "{}"
# create an instance of WithdrawCreateResponsePayoutAccount from a JSON string
withdraw_create_response_payout_account_instance = WithdrawCreateResponsePayoutAccount.from_json(json)
# print the JSON string representation of the object
print(WithdrawCreateResponsePayoutAccount.to_json())

# convert the object into a dict
withdraw_create_response_payout_account_dict = withdraw_create_response_payout_account_instance.to_dict()
# create an instance of WithdrawCreateResponsePayoutAccount from a dict
withdraw_create_response_payout_account_from_dict = WithdrawCreateResponsePayoutAccount.from_dict(withdraw_create_response_payout_account_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


