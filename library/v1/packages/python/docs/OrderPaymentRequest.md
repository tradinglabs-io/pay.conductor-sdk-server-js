# OrderPaymentRequest

Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...)

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**payment_method** | **str** |  | 
**expiration_in_seconds** | **float** | Order expiration time in seconds | [optional] [default to 3600]
**card** | [**OrderCreditCardPaymentRequestCard**](OrderCreditCardPaymentRequestCard.md) |  | 
**installments** | **float** | Number of installments | [default to 1]
**soft_descriptor** | **str** | Text that will appear on the card statement (soft descriptor) | [optional] 
**expiration_in_days** | **float** | Days until bank slip expires | [optional] [default to 7]
**nu_pay** | [**OrderNuPayPaymentRequestNuPay**](OrderNuPayPaymentRequestNuPay.md) |  | 
**available_payment_methods** | [**List[AvailablePaymentMethods]**](AvailablePaymentMethods.md) | Available payment methods for this order | [optional] 

## Example

```python
from payconductor_sdk.models.order_payment_request import OrderPaymentRequest

# TODO update the JSON string below
json = "{}"
# create an instance of OrderPaymentRequest from a JSON string
order_payment_request_instance = OrderPaymentRequest.from_json(json)
# print the JSON string representation of the object
print(OrderPaymentRequest.to_json())

# convert the object into a dict
order_payment_request_dict = order_payment_request_instance.to_dict()
# create an instance of OrderPaymentRequest from a dict
order_payment_request_from_dict = OrderPaymentRequest.from_dict(order_payment_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


