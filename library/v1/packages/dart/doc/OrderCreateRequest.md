# openapi.model.OrderCreateRequest

## Load the model package
```dart
import 'package:openapi/api.dart';
```

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chargeAmount** | **num** | Total amount to be charged on the order in floating point value | 
**clientIp** | **String** | Client IP address | 
**customer** | [**CustomerCreateRequest**](CustomerCreateRequest.md) |  | 
**discountAmount** | **num** | Discount amount | [default to 0]
**externalId** | **String** | Order ID in your system | 
**fingerprints** | [**OrderFraudFingerprints**](OrderFraudFingerprints.md) |  | [optional] 
**items** | [**BuiltList&lt;OrderItemData&gt;**](OrderItemData.md) | List of products or services in the order | [optional] 
**merchant** | [**MerchantInput**](MerchantInput.md) |  | [optional] 
**payment** | [**OrderPaymentRequest**](OrderPaymentRequest.md) |  | 
**splitAmountTotal** | **num** | Total split amount to be paid to the merchant (Used only for reporting purposes, does not generate actual split) | [optional] 
**session** | [**OrderCreateRequestSession**](OrderCreateRequestSession.md) |  | [optional] 
**shippingFee** | **num** | Shipping fee | [default to 0]
**taxFee** | **num** | Additional fees | [default to 0]
**metadata** | [**JsonObject**](.md) | Additional metadata for the order as key-value pairs. Keys should not contain spaces or special characters | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


