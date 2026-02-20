# OrderCreateRequest

Order data for payment processing

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**charge_amount** | **float** | Total amount to be charged on the order in floating point value | 
**client_ip** | **str** | Client IP address | 
**customer** | [**CustomerCreateRequest**](CustomerCreateRequest.md) |  | 
**discount_amount** | **float** | Discount amount | [default to 0]
**external_id** | **str** | Order ID in your system | 
**fingerprints** | [**OrderFraudFingerprints**](OrderFraudFingerprints.md) |  | [optional] 
**items** | [**List[OrderItemData]**](OrderItemData.md) | List of products or services in the order | [optional] 
**merchant** | [**MerchantInput**](MerchantInput.md) |  | [optional] 
**payment** | [**OrderPaymentRequest**](OrderPaymentRequest.md) |  | 
**split_amount_total** | **float** | Total split amount to be paid to the merchant (Used only for reporting purposes, does not generate actual split) | [optional] 
**session** | [**OrderCreateRequestSession**](OrderCreateRequestSession.md) |  | [optional] 
**shipping_fee** | **float** | Shipping fee | [default to 0]
**tax_fee** | **float** | Additional fees | [default to 0]
**metadata** | **object** | Additional metadata for the order as key-value pairs. Keys should not contain spaces or special characters | [optional] 

## Example

```python
from payconductor_sdk.models.order_create_request import OrderCreateRequest

# TODO update the JSON string below
json = "{}"
# create an instance of OrderCreateRequest from a JSON string
order_create_request_instance = OrderCreateRequest.from_json(json)
# print the JSON string representation of the object
print(OrderCreateRequest.to_json())

# convert the object into a dict
order_create_request_dict = order_create_request_instance.to_dict()
# create an instance of OrderCreateRequest from a dict
order_create_request_from_dict = OrderCreateRequest.from_dict(order_create_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


