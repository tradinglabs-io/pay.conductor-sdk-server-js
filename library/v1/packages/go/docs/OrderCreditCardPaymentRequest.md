# OrderCreditCardPaymentRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**PaymentMethod** | **string** |  | 
**Card** | [**OrderCreditCardPaymentRequestCard**](OrderCreditCardPaymentRequestCard.md) |  | 
**Installments** | **float32** | Number of installments | [default to 1]
**SoftDescriptor** | Pointer to **string** | Text that will appear on the card statement (soft descriptor) | [optional] 

## Methods

### NewOrderCreditCardPaymentRequest

`func NewOrderCreditCardPaymentRequest(paymentMethod string, card OrderCreditCardPaymentRequestCard, installments float32, ) *OrderCreditCardPaymentRequest`

NewOrderCreditCardPaymentRequest instantiates a new OrderCreditCardPaymentRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewOrderCreditCardPaymentRequestWithDefaults

`func NewOrderCreditCardPaymentRequestWithDefaults() *OrderCreditCardPaymentRequest`

NewOrderCreditCardPaymentRequestWithDefaults instantiates a new OrderCreditCardPaymentRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetPaymentMethod

`func (o *OrderCreditCardPaymentRequest) GetPaymentMethod() string`

GetPaymentMethod returns the PaymentMethod field if non-nil, zero value otherwise.

### GetPaymentMethodOk

`func (o *OrderCreditCardPaymentRequest) GetPaymentMethodOk() (*string, bool)`

GetPaymentMethodOk returns a tuple with the PaymentMethod field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPaymentMethod

`func (o *OrderCreditCardPaymentRequest) SetPaymentMethod(v string)`

SetPaymentMethod sets PaymentMethod field to given value.


### GetCard

`func (o *OrderCreditCardPaymentRequest) GetCard() OrderCreditCardPaymentRequestCard`

GetCard returns the Card field if non-nil, zero value otherwise.

### GetCardOk

`func (o *OrderCreditCardPaymentRequest) GetCardOk() (*OrderCreditCardPaymentRequestCard, bool)`

GetCardOk returns a tuple with the Card field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCard

`func (o *OrderCreditCardPaymentRequest) SetCard(v OrderCreditCardPaymentRequestCard)`

SetCard sets Card field to given value.


### GetInstallments

`func (o *OrderCreditCardPaymentRequest) GetInstallments() float32`

GetInstallments returns the Installments field if non-nil, zero value otherwise.

### GetInstallmentsOk

`func (o *OrderCreditCardPaymentRequest) GetInstallmentsOk() (*float32, bool)`

GetInstallmentsOk returns a tuple with the Installments field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInstallments

`func (o *OrderCreditCardPaymentRequest) SetInstallments(v float32)`

SetInstallments sets Installments field to given value.


### GetSoftDescriptor

`func (o *OrderCreditCardPaymentRequest) GetSoftDescriptor() string`

GetSoftDescriptor returns the SoftDescriptor field if non-nil, zero value otherwise.

### GetSoftDescriptorOk

`func (o *OrderCreditCardPaymentRequest) GetSoftDescriptorOk() (*string, bool)`

GetSoftDescriptorOk returns a tuple with the SoftDescriptor field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSoftDescriptor

`func (o *OrderCreditCardPaymentRequest) SetSoftDescriptor(v string)`

SetSoftDescriptor sets SoftDescriptor field to given value.

### HasSoftDescriptor

`func (o *OrderCreditCardPaymentRequest) HasSoftDescriptor() bool`

HasSoftDescriptor returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


