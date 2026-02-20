# OrderNuPayPaymentRequest


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**payment_method** | [**PaymentMethod**](PaymentMethod.md) |  | 
**nu_pay** | [**OrderNuPayPaymentRequestNuPay**](OrderNuPayPaymentRequestNuPay.md) |  | 

## Example

```python
from payconductor_sdk.models.order_nu_pay_payment_request import OrderNuPayPaymentRequest

# TODO update the JSON string below
json = "{}"
# create an instance of OrderNuPayPaymentRequest from a JSON string
order_nu_pay_payment_request_instance = OrderNuPayPaymentRequest.from_json(json)
# print the JSON string representation of the object
print(OrderNuPayPaymentRequest.to_json())

# convert the object into a dict
order_nu_pay_payment_request_dict = order_nu_pay_payment_request_instance.to_dict()
# create an instance of OrderNuPayPaymentRequest from a dict
order_nu_pay_payment_request_from_dict = OrderNuPayPaymentRequest.from_dict(order_nu_pay_payment_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


