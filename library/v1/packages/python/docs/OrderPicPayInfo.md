# OrderPicPayInfo

PicPay payment data

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**copy_and_paste_code** | **str** | PicPay copy and paste code | 
**qr_code_url** | **str** | PicPay QR Code image URL | 

## Example

```python
from payconductor_sdk.models.order_pic_pay_info import OrderPicPayInfo

# TODO update the JSON string below
json = "{}"
# create an instance of OrderPicPayInfo from a JSON string
order_pic_pay_info_instance = OrderPicPayInfo.from_json(json)
# print the JSON string representation of the object
print(OrderPicPayInfo.to_json())

# convert the object into a dict
order_pic_pay_info_dict = order_pic_pay_info_instance.to_dict()
# create an instance of OrderPicPayInfo from a dict
order_pic_pay_info_from_dict = OrderPicPayInfo.from_dict(order_pic_pay_info_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


