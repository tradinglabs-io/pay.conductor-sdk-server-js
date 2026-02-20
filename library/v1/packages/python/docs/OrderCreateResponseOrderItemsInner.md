# OrderCreateResponseOrderItemsInner


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**external_id** | **str** | External item ID | 
**id** | **str** | Item ID in the order | 
**name** | **str** | Product/service name | 
**qty** | **float** | Quantity | 
**total_amount** | **float** | Total item amount (quantity × unit price) | 
**total_net_amount** | **float** | Total net amount of the item | 
**unity_price** | **float** | Unit price | 

## Example

```python
from payconductor_sdk.models.order_create_response_order_items_inner import OrderCreateResponseOrderItemsInner

# TODO update the JSON string below
json = "{}"
# create an instance of OrderCreateResponseOrderItemsInner from a JSON string
order_create_response_order_items_inner_instance = OrderCreateResponseOrderItemsInner.from_json(json)
# print the JSON string representation of the object
print(OrderCreateResponseOrderItemsInner.to_json())

# convert the object into a dict
order_create_response_order_items_inner_dict = order_create_response_order_items_inner_instance.to_dict()
# create an instance of OrderCreateResponseOrderItemsInner from a dict
order_create_response_order_items_inner_from_dict = OrderCreateResponseOrderItemsInner.from_dict(order_create_response_order_items_inner_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


