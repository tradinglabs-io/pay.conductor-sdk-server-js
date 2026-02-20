

# OrderCreateRequest

Order data for payment processing

## Properties

| Name | Type | Description | Notes |
|------------ | ------------- | ------------- | -------------|
|**chargeAmount** | **BigDecimal** | Total amount to be charged on the order in floating point value |  |
|**clientIp** | **String** | Client IP address |  |
|**customer** | [**CustomerCreateRequest**](CustomerCreateRequest.md) |  |  |
|**discountAmount** | **BigDecimal** | Discount amount |  |
|**externalId** | **String** | Order ID in your system |  |
|**fingerprints** | [**OrderFraudFingerprints**](OrderFraudFingerprints.md) |  |  [optional] |
|**items** | [**List&lt;OrderItemData&gt;**](OrderItemData.md) | List of products or services in the order |  [optional] |
|**merchant** | [**MerchantInput**](MerchantInput.md) |  |  [optional] |
|**payment** | [**OrderPaymentRequest**](OrderPaymentRequest.md) |  |  |
|**splitAmountTotal** | **BigDecimal** | Total split amount to be paid to the merchant (Used only for reporting purposes, does not generate actual split) |  [optional] |
|**session** | [**OrderCreateRequestSession**](OrderCreateRequestSession.md) |  |  [optional] |
|**shippingFee** | **BigDecimal** | Shipping fee |  |
|**taxFee** | **BigDecimal** | Additional fees |  |
|**metadata** | **Object** | Additional metadata for the order as key-value pairs. Keys should not contain spaces or special characters |  [optional] |



