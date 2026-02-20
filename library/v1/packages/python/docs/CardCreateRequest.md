# CardCreateRequest

Complete card data for payment processing

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**cvv** | **str** | Card security code (CVV) | 
**expiration** | [**CardExpirationData**](CardExpirationData.md) |  | 
**holder_name** | **str** | Card holder name | 
**number** | **str** | Credit card number | 

## Example

```python
from payconductor_sdk.models.card_create_request import CardCreateRequest

# TODO update the JSON string below
json = "{}"
# create an instance of CardCreateRequest from a JSON string
card_create_request_instance = CardCreateRequest.from_json(json)
# print the JSON string representation of the object
print(CardCreateRequest.to_json())

# convert the object into a dict
card_create_request_dict = card_create_request_instance.to_dict()
# create an instance of CardCreateRequest from a dict
card_create_request_from_dict = CardCreateRequest.from_dict(card_create_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


