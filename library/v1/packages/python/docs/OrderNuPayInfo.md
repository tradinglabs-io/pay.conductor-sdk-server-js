# OrderNuPayInfo

NuPay payment data

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**payment_url** | **str** | NuPay payment URL | 

## Example

```python
from payconductor_sdk.models.order_nu_pay_info import OrderNuPayInfo

# TODO update the JSON string below
json = "{}"
# create an instance of OrderNuPayInfo from a JSON string
order_nu_pay_info_instance = OrderNuPayInfo.from_json(json)
# print the JSON string representation of the object
print(OrderNuPayInfo.to_json())

# convert the object into a dict
order_nu_pay_info_dict = order_nu_pay_info_instance.to_dict()
# create an instance of OrderNuPayInfo from a dict
order_nu_pay_info_from_dict = OrderNuPayInfo.from_dict(order_nu_pay_info_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


