# OrderPIXPaymentRequest


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**payment_method** | [**PaymentMethod**](PaymentMethod.md) |  | 
**expiration_in_seconds** | **float** | PIX expiration time in seconds | [optional] [default to 3600]

## Example

```python
from payconductor_sdk.models.order_pix_payment_request import OrderPIXPaymentRequest

# TODO update the JSON string below
json = "{}"
# create an instance of OrderPIXPaymentRequest from a JSON string
order_pix_payment_request_instance = OrderPIXPaymentRequest.from_json(json)
# print the JSON string representation of the object
print(OrderPIXPaymentRequest.to_json())

# convert the object into a dict
order_pix_payment_request_dict = order_pix_payment_request_instance.to_dict()
# create an instance of OrderPIXPaymentRequest from a dict
order_pix_payment_request_from_dict = OrderPIXPaymentRequest.from_dict(order_pix_payment_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


