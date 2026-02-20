# OrderItemData

Product or service item in the order

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **str** | Product or service ID in your system | 
**is_physical** | **bool** | Defines if the item is a physical product or a service | [default to False]
**name** | **str** | Product or service name | 
**qty** | **float** | Quantity of the product or service | 
**unit_price** | **float** | Unit price | 

## Example

```python
from payconductor_sdk.models.order_item_data import OrderItemData

# TODO update the JSON string below
json = "{}"
# create an instance of OrderItemData from a JSON string
order_item_data_instance = OrderItemData.from_json(json)
# print the JSON string representation of the object
print(OrderItemData.to_json())

# convert the object into a dict
order_item_data_dict = order_item_data_instance.to_dict()
# create an instance of OrderItemData from a dict
order_item_data_from_dict = OrderItemData.from_dict(order_item_data_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


