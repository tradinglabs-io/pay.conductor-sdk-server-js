# OrderCreateResponse

Response after creating an order

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **str** | Order ID in the system | 
**external_id** | **str** | External order ID (provided by your integration) | 
**external_integration_key** | **str** | Provider used to process the order | 
**external_integration_id** | **str** | Order ID in the payment provider | 
**amount** | **float** | Total order amount | 
**cost_fee** | **float** | Cost fee applied to the order | 
**pix** | [**OrderPIXInfo**](OrderPIXInfo.md) |  | [optional] 
**bank_slip** | [**OrderBankSlipInfo**](OrderBankSlipInfo.md) |  | [optional] 
**nu_pay** | [**OrderNuPayInfo**](OrderNuPayInfo.md) |  | [optional] 
**pic_pay** | [**OrderPicPayInfo**](OrderPicPayInfo.md) |  | [optional] 
**credit_card** | [**OrderCreditCardInfo**](OrderCreditCardInfo.md) |  | [optional] 
**status** | [**Status**](Status.md) |  | 
**payment_method** | [**PaymentMethod**](PaymentMethod.md) |  | 
**payed_at** | **str** | Date and time when the order was paid (ISO 8601) | 
**error_code** | **str** | Error code, if any | 
**error_message** | **str** | Error message, if any | 
**order_items** | [**List[OrderCreateResponseOrderItemsInner]**](OrderCreateResponseOrderItemsInner.md) |  | 
**session** | [**OrderCreateResponseSession**](OrderCreateResponseSession.md) |  | [optional] 

## Example

```python
from payconductor_sdk.models.order_create_response import OrderCreateResponse

# TODO update the JSON string below
json = "{}"
# create an instance of OrderCreateResponse from a JSON string
order_create_response_instance = OrderCreateResponse.from_json(json)
# print the JSON string representation of the object
print(OrderCreateResponse.to_json())

# convert the object into a dict
order_create_response_dict = order_create_response_instance.to_dict()
# create an instance of OrderCreateResponse from a dict
order_create_response_from_dict = OrderCreateResponse.from_dict(order_create_response_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


