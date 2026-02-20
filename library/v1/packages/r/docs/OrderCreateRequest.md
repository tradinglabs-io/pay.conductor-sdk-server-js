# payconductor_sdk::OrderCreateRequest

Order data for payment processing

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chargeAmount** | **numeric** | Total amount to be charged on the order in floating point value | 
**clientIp** | **character** | Client IP address | 
**customer** | [**CustomerCreateRequest**](Customer_Create_Request.md) |  | 
**discountAmount** | **numeric** | Discount amount | [default to 0] 
**externalId** | **character** | Order ID in your system | 
**fingerprints** | [**OrderFraudFingerprints**](Order_Fraud_Fingerprints.md) |  | [optional] 
**items** | [**array[OrderItemData]**](Order_Item_Data.md) | List of products or services in the order | [optional] [Max. items: 20] 
**merchant** | [**MerchantInput**](MerchantInput.md) |  | [optional] 
**payment** | [**OrderPaymentRequest**](Order_Payment_Request.md) |  | 
**splitAmountTotal** | **numeric** | Total split amount to be paid to the merchant (Used only for reporting purposes, does not generate actual split) | [optional] [Min: 0] 
**session** | [**OrderCreateRequestSession**](Order_Create_Request_session.md) |  | [optional] 
**shippingFee** | **numeric** | Shipping fee | [default to 0] 
**taxFee** | **numeric** | Additional fees | [default to 0] 
**metadata** | **object** | Additional metadata for the order as key-value pairs. Keys should not contain spaces or special characters | [optional] 


