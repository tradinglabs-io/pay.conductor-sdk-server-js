# PayconductorSdk.OrderCreateRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chargeAmount** | **Number** | Total amount to be charged on the order in floating point value | 
**clientIp** | **String** | Client IP address | 
**customer** | [**CustomerCreateRequest**](CustomerCreateRequest.md) |  | 
**discountAmount** | **Number** | Discount amount | [default to 0]
**externalId** | **String** | Order ID in your system | 
**fingerprints** | [**OrderFraudFingerprints**](OrderFraudFingerprints.md) |  | [optional] 
**items** | [**[OrderItemData]**](OrderItemData.md) | List of products or services in the order | [optional] 
**merchant** | [**MerchantInput**](MerchantInput.md) |  | [optional] 
**payment** | [**OrderPaymentRequest**](OrderPaymentRequest.md) |  | 
**splitAmountTotal** | **Number** | Total split amount to be paid to the merchant (Used only for reporting purposes, does not generate actual split) | [optional] 
**session** | [**OrderCreateRequestSession**](OrderCreateRequestSession.md) |  | [optional] 
**shippingFee** | **Number** | Shipping fee | [default to 0]
**taxFee** | **Number** | Additional fees | [default to 0]
**metadata** | **Object** | Additional metadata for the order as key-value pairs. Keys should not contain spaces or special characters | [optional] 


