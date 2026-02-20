# OrderPIXInfo

PIX payment data and QR code information

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**copy_and_paste_code** | **str** | PIX copy and paste code | 
**qr_code_url** | **str** | PIX QR Code image URL | 
**end_to_end_id** | **str** | PIX E2E ID | 

## Example

```python
from payconductor_sdk.models.order_pix_info import OrderPIXInfo

# TODO update the JSON string below
json = "{}"
# create an instance of OrderPIXInfo from a JSON string
order_pix_info_instance = OrderPIXInfo.from_json(json)
# print the JSON string representation of the object
print(OrderPIXInfo.to_json())

# convert the object into a dict
order_pix_info_dict = order_pix_info_instance.to_dict()
# create an instance of OrderPIXInfo from a dict
order_pix_info_from_dict = OrderPIXInfo.from_dict(order_pix_info_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


