# order_create_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**charge_amount** | **double** | Total amount to be charged on the order in floating point value | 
**client_ip** | **char \*** | Client IP address | 
**customer** | [**customer_create_request_t**](customer_create_request.md) \* |  | 
**discount_amount** | **double** | Discount amount | [default to 0]
**external_id** | **char \*** | Order ID in your system | 
**fingerprints** | [**order_fraud_fingerprints_t**](order_fraud_fingerprints.md) \* |  | [optional] 
**items** | [**list_t**](order_item_data.md) \* | List of products or services in the order | [optional] 
**merchant** | [**merchant_input_t**](merchant_input.md) \* |  | [optional] 
**payment** | [**order_payment_request_t**](order_payment_request.md) \* |  | 
**split_amount_total** | **double** | Total split amount to be paid to the merchant (Used only for reporting purposes, does not generate actual split) | [optional] 
**session** | [**order_create_request_session_t**](order_create_request_session.md) \* |  | [optional] 
**shipping_fee** | **double** | Shipping fee | [default to 0]
**tax_fee** | **double** | Additional fees | [default to 0]
**metadata** | [**object_t**](.md) \* | Additional metadata for the order as key-value pairs. Keys should not contain spaces or special characters | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


