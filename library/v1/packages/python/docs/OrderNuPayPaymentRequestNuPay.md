# OrderNuPayPaymentRequestNuPay

Specific data for NuPay payment

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**cancel_url** | **str** | Payment cancellation URL | 
**merchant_name** | **str** | Merchant name | 
**return_url** | **str** | Return URL after payment completion | 
**store_name** | **str** | Store name | [optional] 

## Example

```python
from payconductor_sdk.models.order_nu_pay_payment_request_nu_pay import OrderNuPayPaymentRequestNuPay

# TODO update the JSON string below
json = "{}"
# create an instance of OrderNuPayPaymentRequestNuPay from a JSON string
order_nu_pay_payment_request_nu_pay_instance = OrderNuPayPaymentRequestNuPay.from_json(json)
# print the JSON string representation of the object
print(OrderNuPayPaymentRequestNuPay.to_json())

# convert the object into a dict
order_nu_pay_payment_request_nu_pay_dict = order_nu_pay_payment_request_nu_pay_instance.to_dict()
# create an instance of OrderNuPayPaymentRequestNuPay from a dict
order_nu_pay_payment_request_nu_pay_from_dict = OrderNuPayPaymentRequestNuPay.from_dict(order_nu_pay_payment_request_nu_pay_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


