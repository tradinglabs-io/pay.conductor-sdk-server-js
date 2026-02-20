# OrderCreditCardPaymentRequestCard


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**first_six_card_number** | **str** | First 6 digits of the credit card | [optional] 
**token** | **str** | Previously generated credit card token | 
**cvv** | **str** | Card security code (CVV) | 
**expiration** | [**CardExpirationData**](CardExpirationData.md) |  | 
**holder_name** | **str** | Card holder name | 
**number** | **str** | Credit card number | 

## Example

```python
from payconductor_sdk.models.order_credit_card_payment_request_card import OrderCreditCardPaymentRequestCard

# TODO update the JSON string below
json = "{}"
# create an instance of OrderCreditCardPaymentRequestCard from a JSON string
order_credit_card_payment_request_card_instance = OrderCreditCardPaymentRequestCard.from_json(json)
# print the JSON string representation of the object
print(OrderCreditCardPaymentRequestCard.to_json())

# convert the object into a dict
order_credit_card_payment_request_card_dict = order_credit_card_payment_request_card_instance.to_dict()
# create an instance of OrderCreditCardPaymentRequestCard from a dict
order_credit_card_payment_request_card_from_dict = OrderCreditCardPaymentRequestCard.from_dict(order_credit_card_payment_request_card_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


