# OrderCreateResponseSession


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**session_id** | **str** | ID of the checkout session associated with the order | 

## Example

```python
from payconductor_sdk.models.order_create_response_session import OrderCreateResponseSession

# TODO update the JSON string below
json = "{}"
# create an instance of OrderCreateResponseSession from a JSON string
order_create_response_session_instance = OrderCreateResponseSession.from_json(json)
# print the JSON string representation of the object
print(OrderCreateResponseSession.to_json())

# convert the object into a dict
order_create_response_session_dict = order_create_response_session_instance.to_dict()
# create an instance of OrderCreateResponseSession from a dict
order_create_response_session_from_dict = OrderCreateResponseSession.from_dict(order_create_response_session_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


