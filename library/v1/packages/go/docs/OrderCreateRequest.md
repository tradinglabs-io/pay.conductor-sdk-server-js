# OrderCreateRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ChargeAmount** | **float32** | Total amount to be charged on the order in floating point value | 
**ClientIp** | **string** | Client IP address | 
**Customer** | [**CustomerCreateRequest**](CustomerCreateRequest.md) |  | 
**DiscountAmount** | **float32** | Discount amount | [default to 0]
**ExternalId** | **string** | Order ID in your system | 
**Fingerprints** | Pointer to [**OrderFraudFingerprints**](OrderFraudFingerprints.md) |  | [optional] 
**Items** | Pointer to [**[]OrderItemData**](OrderItemData.md) | List of products or services in the order | [optional] 
**Merchant** | Pointer to [**MerchantInput**](MerchantInput.md) |  | [optional] 
**Payment** | [**OrderPaymentRequest**](OrderPaymentRequest.md) |  | 
**SplitAmountTotal** | Pointer to **float32** | Total split amount to be paid to the merchant (Used only for reporting purposes, does not generate actual split) | [optional] 
**Session** | Pointer to [**OrderCreateRequestSession**](OrderCreateRequestSession.md) |  | [optional] 
**ShippingFee** | **float32** | Shipping fee | [default to 0]
**TaxFee** | **float32** | Additional fees | [default to 0]
**Metadata** | Pointer to **map[string]interface{}** | Additional metadata for the order as key-value pairs. Keys should not contain spaces or special characters | [optional] 

## Methods

### NewOrderCreateRequest

`func NewOrderCreateRequest(chargeAmount float32, clientIp string, customer CustomerCreateRequest, discountAmount float32, externalId string, payment OrderPaymentRequest, shippingFee float32, taxFee float32, ) *OrderCreateRequest`

NewOrderCreateRequest instantiates a new OrderCreateRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewOrderCreateRequestWithDefaults

`func NewOrderCreateRequestWithDefaults() *OrderCreateRequest`

NewOrderCreateRequestWithDefaults instantiates a new OrderCreateRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetChargeAmount

`func (o *OrderCreateRequest) GetChargeAmount() float32`

GetChargeAmount returns the ChargeAmount field if non-nil, zero value otherwise.

### GetChargeAmountOk

`func (o *OrderCreateRequest) GetChargeAmountOk() (*float32, bool)`

GetChargeAmountOk returns a tuple with the ChargeAmount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetChargeAmount

`func (o *OrderCreateRequest) SetChargeAmount(v float32)`

SetChargeAmount sets ChargeAmount field to given value.


### GetClientIp

`func (o *OrderCreateRequest) GetClientIp() string`

GetClientIp returns the ClientIp field if non-nil, zero value otherwise.

### GetClientIpOk

`func (o *OrderCreateRequest) GetClientIpOk() (*string, bool)`

GetClientIpOk returns a tuple with the ClientIp field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetClientIp

`func (o *OrderCreateRequest) SetClientIp(v string)`

SetClientIp sets ClientIp field to given value.


### GetCustomer

`func (o *OrderCreateRequest) GetCustomer() CustomerCreateRequest`

GetCustomer returns the Customer field if non-nil, zero value otherwise.

### GetCustomerOk

`func (o *OrderCreateRequest) GetCustomerOk() (*CustomerCreateRequest, bool)`

GetCustomerOk returns a tuple with the Customer field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustomer

`func (o *OrderCreateRequest) SetCustomer(v CustomerCreateRequest)`

SetCustomer sets Customer field to given value.


### GetDiscountAmount

`func (o *OrderCreateRequest) GetDiscountAmount() float32`

GetDiscountAmount returns the DiscountAmount field if non-nil, zero value otherwise.

### GetDiscountAmountOk

`func (o *OrderCreateRequest) GetDiscountAmountOk() (*float32, bool)`

GetDiscountAmountOk returns a tuple with the DiscountAmount field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDiscountAmount

`func (o *OrderCreateRequest) SetDiscountAmount(v float32)`

SetDiscountAmount sets DiscountAmount field to given value.


### GetExternalId

`func (o *OrderCreateRequest) GetExternalId() string`

GetExternalId returns the ExternalId field if non-nil, zero value otherwise.

### GetExternalIdOk

`func (o *OrderCreateRequest) GetExternalIdOk() (*string, bool)`

GetExternalIdOk returns a tuple with the ExternalId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExternalId

`func (o *OrderCreateRequest) SetExternalId(v string)`

SetExternalId sets ExternalId field to given value.


### GetFingerprints

`func (o *OrderCreateRequest) GetFingerprints() OrderFraudFingerprints`

GetFingerprints returns the Fingerprints field if non-nil, zero value otherwise.

### GetFingerprintsOk

`func (o *OrderCreateRequest) GetFingerprintsOk() (*OrderFraudFingerprints, bool)`

GetFingerprintsOk returns a tuple with the Fingerprints field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFingerprints

`func (o *OrderCreateRequest) SetFingerprints(v OrderFraudFingerprints)`

SetFingerprints sets Fingerprints field to given value.

### HasFingerprints

`func (o *OrderCreateRequest) HasFingerprints() bool`

HasFingerprints returns a boolean if a field has been set.

### GetItems

`func (o *OrderCreateRequest) GetItems() []OrderItemData`

GetItems returns the Items field if non-nil, zero value otherwise.

### GetItemsOk

`func (o *OrderCreateRequest) GetItemsOk() (*[]OrderItemData, bool)`

GetItemsOk returns a tuple with the Items field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetItems

`func (o *OrderCreateRequest) SetItems(v []OrderItemData)`

SetItems sets Items field to given value.

### HasItems

`func (o *OrderCreateRequest) HasItems() bool`

HasItems returns a boolean if a field has been set.

### GetMerchant

`func (o *OrderCreateRequest) GetMerchant() MerchantInput`

GetMerchant returns the Merchant field if non-nil, zero value otherwise.

### GetMerchantOk

`func (o *OrderCreateRequest) GetMerchantOk() (*MerchantInput, bool)`

GetMerchantOk returns a tuple with the Merchant field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMerchant

`func (o *OrderCreateRequest) SetMerchant(v MerchantInput)`

SetMerchant sets Merchant field to given value.

### HasMerchant

`func (o *OrderCreateRequest) HasMerchant() bool`

HasMerchant returns a boolean if a field has been set.

### GetPayment

`func (o *OrderCreateRequest) GetPayment() OrderPaymentRequest`

GetPayment returns the Payment field if non-nil, zero value otherwise.

### GetPaymentOk

`func (o *OrderCreateRequest) GetPaymentOk() (*OrderPaymentRequest, bool)`

GetPaymentOk returns a tuple with the Payment field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPayment

`func (o *OrderCreateRequest) SetPayment(v OrderPaymentRequest)`

SetPayment sets Payment field to given value.


### GetSplitAmountTotal

`func (o *OrderCreateRequest) GetSplitAmountTotal() float32`

GetSplitAmountTotal returns the SplitAmountTotal field if non-nil, zero value otherwise.

### GetSplitAmountTotalOk

`func (o *OrderCreateRequest) GetSplitAmountTotalOk() (*float32, bool)`

GetSplitAmountTotalOk returns a tuple with the SplitAmountTotal field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSplitAmountTotal

`func (o *OrderCreateRequest) SetSplitAmountTotal(v float32)`

SetSplitAmountTotal sets SplitAmountTotal field to given value.

### HasSplitAmountTotal

`func (o *OrderCreateRequest) HasSplitAmountTotal() bool`

HasSplitAmountTotal returns a boolean if a field has been set.

### GetSession

`func (o *OrderCreateRequest) GetSession() OrderCreateRequestSession`

GetSession returns the Session field if non-nil, zero value otherwise.

### GetSessionOk

`func (o *OrderCreateRequest) GetSessionOk() (*OrderCreateRequestSession, bool)`

GetSessionOk returns a tuple with the Session field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSession

`func (o *OrderCreateRequest) SetSession(v OrderCreateRequestSession)`

SetSession sets Session field to given value.

### HasSession

`func (o *OrderCreateRequest) HasSession() bool`

HasSession returns a boolean if a field has been set.

### GetShippingFee

`func (o *OrderCreateRequest) GetShippingFee() float32`

GetShippingFee returns the ShippingFee field if non-nil, zero value otherwise.

### GetShippingFeeOk

`func (o *OrderCreateRequest) GetShippingFeeOk() (*float32, bool)`

GetShippingFeeOk returns a tuple with the ShippingFee field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetShippingFee

`func (o *OrderCreateRequest) SetShippingFee(v float32)`

SetShippingFee sets ShippingFee field to given value.


### GetTaxFee

`func (o *OrderCreateRequest) GetTaxFee() float32`

GetTaxFee returns the TaxFee field if non-nil, zero value otherwise.

### GetTaxFeeOk

`func (o *OrderCreateRequest) GetTaxFeeOk() (*float32, bool)`

GetTaxFeeOk returns a tuple with the TaxFee field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTaxFee

`func (o *OrderCreateRequest) SetTaxFee(v float32)`

SetTaxFee sets TaxFee field to given value.


### GetMetadata

`func (o *OrderCreateRequest) GetMetadata() map[string]interface{}`

GetMetadata returns the Metadata field if non-nil, zero value otherwise.

### GetMetadataOk

`func (o *OrderCreateRequest) GetMetadataOk() (*map[string]interface{}, bool)`

GetMetadataOk returns a tuple with the Metadata field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMetadata

`func (o *OrderCreateRequest) SetMetadata(v map[string]interface{})`

SetMetadata sets Metadata field to given value.

### HasMetadata

`func (o *OrderCreateRequest) HasMetadata() bool`

HasMetadata returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


