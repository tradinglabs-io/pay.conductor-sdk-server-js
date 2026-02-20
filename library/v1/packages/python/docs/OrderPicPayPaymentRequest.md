# OrderPicPayPaymentRequest


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**payment_method** | [**PaymentMethod**](PaymentMethod.md) |  | 

## Example

```python
from payconductor_sdk.models.order_pic_pay_payment_request import OrderPicPayPaymentRequest

# TODO update the JSON string below
json = "{}"
# create an instance of OrderPicPayPaymentRequest from a JSON string
order_pic_pay_payment_request_instance = OrderPicPayPaymentRequest.from_json(json)
# print the JSON string representation of the object
print(OrderPicPayPaymentRequest.to_json())

# convert the object into a dict
order_pic_pay_payment_request_dict = order_pic_pay_payment_request_instance.to_dict()
# create an instance of OrderPicPayPaymentRequest from a dict
order_pic_pay_payment_request_from_dict = OrderPicPayPaymentRequest.from_dict(order_pic_pay_payment_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


