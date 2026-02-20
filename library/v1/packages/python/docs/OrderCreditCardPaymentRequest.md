# OrderCreditCardPaymentRequest


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**payment_method** | **str** |  | 
**card** | [**OrderCreditCardPaymentRequestCard**](OrderCreditCardPaymentRequestCard.md) |  | 
**installments** | **float** | Number of installments | [default to 1]
**soft_descriptor** | **str** | Text that will appear on the card statement (soft descriptor) | [optional] 

## Example

```python
from payconductor_sdk.models.order_credit_card_payment_request import OrderCreditCardPaymentRequest

# TODO update the JSON string below
json = "{}"
# create an instance of OrderCreditCardPaymentRequest from a JSON string
order_credit_card_payment_request_instance = OrderCreditCardPaymentRequest.from_json(json)
# print the JSON string representation of the object
print(OrderCreditCardPaymentRequest.to_json())

# convert the object into a dict
order_credit_card_payment_request_dict = order_credit_card_payment_request_instance.to_dict()
# create an instance of OrderCreditCardPaymentRequest from a dict
order_credit_card_payment_request_from_dict = OrderCreditCardPaymentRequest.from_dict(order_credit_card_payment_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


