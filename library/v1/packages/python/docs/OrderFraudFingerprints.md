# OrderFraudFingerprints

Fraud analysis fingerprint data

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**threat_metrix_fingerprint_id** | **str** | ThreatMetrix fingerprint ID for fraud analysis | [optional] 

## Example

```python
from payconductor_sdk.models.order_fraud_fingerprints import OrderFraudFingerprints

# TODO update the JSON string below
json = "{}"
# create an instance of OrderFraudFingerprints from a JSON string
order_fraud_fingerprints_instance = OrderFraudFingerprints.from_json(json)
# print the JSON string representation of the object
print(OrderFraudFingerprints.to_json())

# convert the object into a dict
order_fraud_fingerprints_dict = order_fraud_fingerprints_instance.to_dict()
# create an instance of OrderFraudFingerprints from a dict
order_fraud_fingerprints_from_dict = OrderFraudFingerprints.from_dict(order_fraud_fingerprints_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


