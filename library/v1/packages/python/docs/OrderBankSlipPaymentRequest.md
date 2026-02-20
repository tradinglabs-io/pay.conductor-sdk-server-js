# OrderBankSlipPaymentRequest


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**payment_method** | [**PaymentMethod**](PaymentMethod.md) |  | 
**expiration_in_days** | **float** | Days until bank slip expires | [optional] [default to 7]

## Example

```python
from payconductor_sdk.models.order_bank_slip_payment_request import OrderBankSlipPaymentRequest

# TODO update the JSON string below
json = "{}"
# create an instance of OrderBankSlipPaymentRequest from a JSON string
order_bank_slip_payment_request_instance = OrderBankSlipPaymentRequest.from_json(json)
# print the JSON string representation of the object
print(OrderBankSlipPaymentRequest.to_json())

# convert the object into a dict
order_bank_slip_payment_request_dict = order_bank_slip_payment_request_instance.to_dict()
# create an instance of OrderBankSlipPaymentRequest from a dict
order_bank_slip_payment_request_from_dict = OrderBankSlipPaymentRequest.from_dict(order_bank_slip_payment_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


