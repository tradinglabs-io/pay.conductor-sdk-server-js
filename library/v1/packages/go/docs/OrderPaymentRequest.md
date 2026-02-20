# OrderPaymentRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**PaymentMethod** | **string** |  | 
**ExpirationInSeconds** | Pointer to **float32** | Order expiration time in seconds | [optional] [default to 3600]
**Card** | [**OrderCreditCardPaymentRequestCard**](OrderCreditCardPaymentRequestCard.md) |  | 
**Installments** | **float32** | Number of installments | [default to 1]
**SoftDescriptor** | Pointer to **string** | Text that will appear on the card statement (soft descriptor) | [optional] 
**ExpirationInDays** | Pointer to **float32** | Days until bank slip expires | [optional] [default to 7]
**NuPay** | [**OrderNuPayPaymentRequestNuPay**](OrderNuPayPaymentRequestNuPay.md) |  | 
**AvailablePaymentMethods** | Pointer to [**[]AvailablePaymentMethods**](AvailablePaymentMethods.md) | Available payment methods for this order | [optional] 

## Methods

### NewOrderPaymentRequest

`func NewOrderPaymentRequest(paymentMethod string, card OrderCreditCardPaymentRequestCard, installments float32, nuPay OrderNuPayPaymentRequestNuPay, ) *OrderPaymentRequest`

NewOrderPaymentRequest instantiates a new OrderPaymentRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewOrderPaymentRequestWithDefaults

`func NewOrderPaymentRequestWithDefaults() *OrderPaymentRequest`

NewOrderPaymentRequestWithDefaults instantiates a new OrderPaymentRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetPaymentMethod

`func (o *OrderPaymentRequest) GetPaymentMethod() string`

GetPaymentMethod returns the PaymentMethod field if non-nil, zero value otherwise.

### GetPaymentMethodOk

`func (o *OrderPaymentRequest) GetPaymentMethodOk() (*string, bool)`

GetPaymentMethodOk returns a tuple with the PaymentMethod field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPaymentMethod

`func (o *OrderPaymentRequest) SetPaymentMethod(v string)`

SetPaymentMethod sets PaymentMethod field to given value.


### GetExpirationInSeconds

`func (o *OrderPaymentRequest) GetExpirationInSeconds() float32`

GetExpirationInSeconds returns the ExpirationInSeconds field if non-nil, zero value otherwise.

### GetExpirationInSecondsOk

`func (o *OrderPaymentRequest) GetExpirationInSecondsOk() (*float32, bool)`

GetExpirationInSecondsOk returns a tuple with the ExpirationInSeconds field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExpirationInSeconds

`func (o *OrderPaymentRequest) SetExpirationInSeconds(v float32)`

SetExpirationInSeconds sets ExpirationInSeconds field to given value.

### HasExpirationInSeconds

`func (o *OrderPaymentRequest) HasExpirationInSeconds() bool`

HasExpirationInSeconds returns a boolean if a field has been set.

### GetCard

`func (o *OrderPaymentRequest) GetCard() OrderCreditCardPaymentRequestCard`

GetCard returns the Card field if non-nil, zero value otherwise.

### GetCardOk

`func (o *OrderPaymentRequest) GetCardOk() (*OrderCreditCardPaymentRequestCard, bool)`

GetCardOk returns a tuple with the Card field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCard

`func (o *OrderPaymentRequest) SetCard(v OrderCreditCardPaymentRequestCard)`

SetCard sets Card field to given value.


### GetInstallments

`func (o *OrderPaymentRequest) GetInstallments() float32`

GetInstallments returns the Installments field if non-nil, zero value otherwise.

### GetInstallmentsOk

`func (o *OrderPaymentRequest) GetInstallmentsOk() (*float32, bool)`

GetInstallmentsOk returns a tuple with the Installments field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInstallments

`func (o *OrderPaymentRequest) SetInstallments(v float32)`

SetInstallments sets Installments field to given value.


### GetSoftDescriptor

`func (o *OrderPaymentRequest) GetSoftDescriptor() string`

GetSoftDescriptor returns the SoftDescriptor field if non-nil, zero value otherwise.

### GetSoftDescriptorOk

`func (o *OrderPaymentRequest) GetSoftDescriptorOk() (*string, bool)`

GetSoftDescriptorOk returns a tuple with the SoftDescriptor field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSoftDescriptor

`func (o *OrderPaymentRequest) SetSoftDescriptor(v string)`

SetSoftDescriptor sets SoftDescriptor field to given value.

### HasSoftDescriptor

`func (o *OrderPaymentRequest) HasSoftDescriptor() bool`

HasSoftDescriptor returns a boolean if a field has been set.

### GetExpirationInDays

`func (o *OrderPaymentRequest) GetExpirationInDays() float32`

GetExpirationInDays returns the ExpirationInDays field if non-nil, zero value otherwise.

### GetExpirationInDaysOk

`func (o *OrderPaymentRequest) GetExpirationInDaysOk() (*float32, bool)`

GetExpirationInDaysOk returns a tuple with the ExpirationInDays field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExpirationInDays

`func (o *OrderPaymentRequest) SetExpirationInDays(v float32)`

SetExpirationInDays sets ExpirationInDays field to given value.

### HasExpirationInDays

`func (o *OrderPaymentRequest) HasExpirationInDays() bool`

HasExpirationInDays returns a boolean if a field has been set.

### GetNuPay

`func (o *OrderPaymentRequest) GetNuPay() OrderNuPayPaymentRequestNuPay`

GetNuPay returns the NuPay field if non-nil, zero value otherwise.

### GetNuPayOk

`func (o *OrderPaymentRequest) GetNuPayOk() (*OrderNuPayPaymentRequestNuPay, bool)`

GetNuPayOk returns a tuple with the NuPay field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNuPay

`func (o *OrderPaymentRequest) SetNuPay(v OrderNuPayPaymentRequestNuPay)`

SetNuPay sets NuPay field to given value.


### GetAvailablePaymentMethods

`func (o *OrderPaymentRequest) GetAvailablePaymentMethods() []AvailablePaymentMethods`

GetAvailablePaymentMethods returns the AvailablePaymentMethods field if non-nil, zero value otherwise.

### GetAvailablePaymentMethodsOk

`func (o *OrderPaymentRequest) GetAvailablePaymentMethodsOk() (*[]AvailablePaymentMethods, bool)`

GetAvailablePaymentMethodsOk returns a tuple with the AvailablePaymentMethods field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAvailablePaymentMethods

`func (o *OrderPaymentRequest) SetAvailablePaymentMethods(v []AvailablePaymentMethods)`

SetAvailablePaymentMethods sets AvailablePaymentMethods field to given value.

### HasAvailablePaymentMethods

`func (o *OrderPaymentRequest) HasAvailablePaymentMethods() bool`

HasAvailablePaymentMethods returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


