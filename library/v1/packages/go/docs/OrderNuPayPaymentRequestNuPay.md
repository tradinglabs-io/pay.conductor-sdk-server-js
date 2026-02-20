# OrderNuPayPaymentRequestNuPay

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**CancelUrl** | **string** | Payment cancellation URL | 
**MerchantName** | **string** | Merchant name | 
**ReturnUrl** | **string** | Return URL after payment completion | 
**StoreName** | Pointer to **string** | Store name | [optional] 

## Methods

### NewOrderNuPayPaymentRequestNuPay

`func NewOrderNuPayPaymentRequestNuPay(cancelUrl string, merchantName string, returnUrl string, ) *OrderNuPayPaymentRequestNuPay`

NewOrderNuPayPaymentRequestNuPay instantiates a new OrderNuPayPaymentRequestNuPay object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewOrderNuPayPaymentRequestNuPayWithDefaults

`func NewOrderNuPayPaymentRequestNuPayWithDefaults() *OrderNuPayPaymentRequestNuPay`

NewOrderNuPayPaymentRequestNuPayWithDefaults instantiates a new OrderNuPayPaymentRequestNuPay object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetCancelUrl

`func (o *OrderNuPayPaymentRequestNuPay) GetCancelUrl() string`

GetCancelUrl returns the CancelUrl field if non-nil, zero value otherwise.

### GetCancelUrlOk

`func (o *OrderNuPayPaymentRequestNuPay) GetCancelUrlOk() (*string, bool)`

GetCancelUrlOk returns a tuple with the CancelUrl field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCancelUrl

`func (o *OrderNuPayPaymentRequestNuPay) SetCancelUrl(v string)`

SetCancelUrl sets CancelUrl field to given value.


### GetMerchantName

`func (o *OrderNuPayPaymentRequestNuPay) GetMerchantName() string`

GetMerchantName returns the MerchantName field if non-nil, zero value otherwise.

### GetMerchantNameOk

`func (o *OrderNuPayPaymentRequestNuPay) GetMerchantNameOk() (*string, bool)`

GetMerchantNameOk returns a tuple with the MerchantName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMerchantName

`func (o *OrderNuPayPaymentRequestNuPay) SetMerchantName(v string)`

SetMerchantName sets MerchantName field to given value.


### GetReturnUrl

`func (o *OrderNuPayPaymentRequestNuPay) GetReturnUrl() string`

GetReturnUrl returns the ReturnUrl field if non-nil, zero value otherwise.

### GetReturnUrlOk

`func (o *OrderNuPayPaymentRequestNuPay) GetReturnUrlOk() (*string, bool)`

GetReturnUrlOk returns a tuple with the ReturnUrl field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetReturnUrl

`func (o *OrderNuPayPaymentRequestNuPay) SetReturnUrl(v string)`

SetReturnUrl sets ReturnUrl field to given value.


### GetStoreName

`func (o *OrderNuPayPaymentRequestNuPay) GetStoreName() string`

GetStoreName returns the StoreName field if non-nil, zero value otherwise.

### GetStoreNameOk

`func (o *OrderNuPayPaymentRequestNuPay) GetStoreNameOk() (*string, bool)`

GetStoreNameOk returns a tuple with the StoreName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStoreName

`func (o *OrderNuPayPaymentRequestNuPay) SetStoreName(v string)`

SetStoreName sets StoreName field to given value.

### HasStoreName

`func (o *OrderNuPayPaymentRequestNuPay) HasStoreName() bool`

HasStoreName returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


