# OrderBankSlipInfo

Bank slip payment data

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**bar_code** | **str** | Bank slip bar code | 
**digitable_line** | **str** | Bank slip digitable line | 
**pdf_url** | **str** | Bank slip PDF URL | [optional] 

## Example

```python
from payconductor_sdk.models.order_bank_slip_info import OrderBankSlipInfo

# TODO update the JSON string below
json = "{}"
# create an instance of OrderBankSlipInfo from a JSON string
order_bank_slip_info_instance = OrderBankSlipInfo.from_json(json)
# print the JSON string representation of the object
print(OrderBankSlipInfo.to_json())

# convert the object into a dict
order_bank_slip_info_dict = order_bank_slip_info_instance.to_dict()
# create an instance of OrderBankSlipInfo from a dict
order_bank_slip_info_from_dict = OrderBankSlipInfo.from_dict(order_bank_slip_info_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


