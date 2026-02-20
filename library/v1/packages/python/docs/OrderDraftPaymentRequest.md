# OrderDraftPaymentRequest

Used to create an order without generating a real payment. Use to create orders that will be paid later

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**payment_method** | [**PaymentMethod**](PaymentMethod.md) |  | 
**expiration_in_seconds** | **float** | Order expiration time in seconds | [optional] [default to 3600]
**available_payment_methods** | [**List[AvailablePaymentMethods]**](AvailablePaymentMethods.md) | Available payment methods for this order | [optional] 

## Example

```python
from payconductor_sdk.models.order_draft_payment_request import OrderDraftPaymentRequest

# TODO update the JSON string below
json = "{}"
# create an instance of OrderDraftPaymentRequest from a JSON string
order_draft_payment_request_instance = OrderDraftPaymentRequest.from_json(json)
# print the JSON string representation of the object
print(OrderDraftPaymentRequest.to_json())

# convert the object into a dict
order_draft_payment_request_dict = order_draft_payment_request_instance.to_dict()
# create an instance of OrderDraftPaymentRequest from a dict
order_draft_payment_request_from_dict = OrderDraftPaymentRequest.from_dict(order_draft_payment_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


