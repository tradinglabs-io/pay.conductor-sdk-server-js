# OrderTokenizedCardData


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**first_six_card_number** | **str** | First 6 digits of the credit card | [optional] 
**token** | **str** | Previously generated credit card token | 

## Example

```python
from payconductor_sdk.models.order_tokenized_card_data import OrderTokenizedCardData

# TODO update the JSON string below
json = "{}"
# create an instance of OrderTokenizedCardData from a JSON string
order_tokenized_card_data_instance = OrderTokenizedCardData.from_json(json)
# print the JSON string representation of the object
print(OrderTokenizedCardData.to_json())

# convert the object into a dict
order_tokenized_card_data_dict = order_tokenized_card_data_instance.to_dict()
# create an instance of OrderTokenizedCardData from a dict
order_tokenized_card_data_from_dict = OrderTokenizedCardData.from_dict(order_tokenized_card_data_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


