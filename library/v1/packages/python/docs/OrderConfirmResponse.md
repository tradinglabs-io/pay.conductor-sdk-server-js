# OrderConfirmResponse

Response after confirming a draft order

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **str** | Order ID in the system | 
**external_id** | **str** | External order ID (provided by your integration) | 
**amount** | **float** | Total order amount | 
**cost_fee** | **float** | Cost fee applied to the order | 
**pix** | [**OrderPIXInfo**](OrderPIXInfo.md) |  | [optional] 
**bank_slip** | [**OrderBankSlipInfo**](OrderBankSlipInfo.md) |  | [optional] 
**nu_pay** | [**OrderNuPayInfo**](OrderNuPayInfo.md) |  | [optional] 
**pic_pay** | [**OrderPicPayInfo**](OrderPicPayInfo.md) |  | [optional] 
**status** | [**Status**](Status.md) |  | 
**payment_method** | [**PaymentMethod**](PaymentMethod.md) |  | 
**payed_at** | **str** | Date and time when the order was paid (ISO 8601) | 
**error_code** | **str** | Error code, if any | 
**error_message** | **str** | Error message, if any | 

## Example

```python
from payconductor_sdk.models.order_confirm_response import OrderConfirmResponse

# TODO update the JSON string below
json = "{}"
# create an instance of OrderConfirmResponse from a JSON string
order_confirm_response_instance = OrderConfirmResponse.from_json(json)
# print the JSON string representation of the object
print(OrderConfirmResponse.to_json())

# convert the object into a dict
order_confirm_response_dict = order_confirm_response_instance.to_dict()
# create an instance of OrderConfirmResponse from a dict
order_confirm_response_from_dict = OrderConfirmResponse.from_dict(order_confirm_response_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


