# WithdrawPayoutAccountData

Bank account information for withdrawal

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**owner_document** | **str** | Account holder document (CPF or CNPJ) | 
**owner_name** | **str** | Account holder name | 
**pix_key** | **str** | PIX key for withdrawal | 
**pix_type** | [**PixType**](PixType.md) |  | 

## Example

```python
from payconductor_sdk.models.withdraw_payout_account_data import WithdrawPayoutAccountData

# TODO update the JSON string below
json = "{}"
# create an instance of WithdrawPayoutAccountData from a JSON string
withdraw_payout_account_data_instance = WithdrawPayoutAccountData.from_json(json)
# print the JSON string representation of the object
print(WithdrawPayoutAccountData.to_json())

# convert the object into a dict
withdraw_payout_account_data_dict = withdraw_payout_account_data_instance.to_dict()
# create an instance of WithdrawPayoutAccountData from a dict
withdraw_payout_account_data_from_dict = WithdrawPayoutAccountData.from_dict(withdraw_payout_account_data_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


