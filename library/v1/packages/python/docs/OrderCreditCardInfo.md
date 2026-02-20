# OrderCreditCardInfo

Credit card payment data

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**authorization_code** | **str** | Transaction authorization code | [optional] 

## Example

```python
from payconductor_sdk.models.order_credit_card_info import OrderCreditCardInfo

# TODO update the JSON string below
json = "{}"
# create an instance of OrderCreditCardInfo from a JSON string
order_credit_card_info_instance = OrderCreditCardInfo.from_json(json)
# print the JSON string representation of the object
print(OrderCreditCardInfo.to_json())

# convert the object into a dict
order_credit_card_info_dict = order_credit_card_info_instance.to_dict()
# create an instance of OrderCreditCardInfo from a dict
order_credit_card_info_from_dict = OrderCreditCardInfo.from_dict(order_credit_card_info_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


