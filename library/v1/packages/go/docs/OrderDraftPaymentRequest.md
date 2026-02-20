# OrderDraftPaymentRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**PaymentMethod** | **string** |  | 
**ExpirationInSeconds** | Pointer to **float32** | Order expiration time in seconds | [optional] [default to 3600]
**AvailablePaymentMethods** | Pointer to [**[]AvailablePaymentMethods**](AvailablePaymentMethods.md) | Available payment methods for this order | [optional] 

## Methods

### NewOrderDraftPaymentRequest

`func NewOrderDraftPaymentRequest(paymentMethod string, ) *OrderDraftPaymentRequest`

NewOrderDraftPaymentRequest instantiates a new OrderDraftPaymentRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewOrderDraftPaymentRequestWithDefaults

`func NewOrderDraftPaymentRequestWithDefaults() *OrderDraftPaymentRequest`

NewOrderDraftPaymentRequestWithDefaults instantiates a new OrderDraftPaymentRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetPaymentMethod

`func (o *OrderDraftPaymentRequest) GetPaymentMethod() string`

GetPaymentMethod returns the PaymentMethod field if non-nil, zero value otherwise.

### GetPaymentMethodOk

`func (o *OrderDraftPaymentRequest) GetPaymentMethodOk() (*string, bool)`

GetPaymentMethodOk returns a tuple with the PaymentMethod field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPaymentMethod

`func (o *OrderDraftPaymentRequest) SetPaymentMethod(v string)`

SetPaymentMethod sets PaymentMethod field to given value.


### GetExpirationInSeconds

`func (o *OrderDraftPaymentRequest) GetExpirationInSeconds() float32`

GetExpirationInSeconds returns the ExpirationInSeconds field if non-nil, zero value otherwise.

### GetExpirationInSecondsOk

`func (o *OrderDraftPaymentRequest) GetExpirationInSecondsOk() (*float32, bool)`

GetExpirationInSecondsOk returns a tuple with the ExpirationInSeconds field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExpirationInSeconds

`func (o *OrderDraftPaymentRequest) SetExpirationInSeconds(v float32)`

SetExpirationInSeconds sets ExpirationInSeconds field to given value.

### HasExpirationInSeconds

`func (o *OrderDraftPaymentRequest) HasExpirationInSeconds() bool`

HasExpirationInSeconds returns a boolean if a field has been set.

### GetAvailablePaymentMethods

`func (o *OrderDraftPaymentRequest) GetAvailablePaymentMethods() []AvailablePaymentMethods`

GetAvailablePaymentMethods returns the AvailablePaymentMethods field if non-nil, zero value otherwise.

### GetAvailablePaymentMethodsOk

`func (o *OrderDraftPaymentRequest) GetAvailablePaymentMethodsOk() (*[]AvailablePaymentMethods, bool)`

GetAvailablePaymentMethodsOk returns a tuple with the AvailablePaymentMethods field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAvailablePaymentMethods

`func (o *OrderDraftPaymentRequest) SetAvailablePaymentMethods(v []AvailablePaymentMethods)`

SetAvailablePaymentMethods sets AvailablePaymentMethods field to given value.

### HasAvailablePaymentMethods

`func (o *OrderDraftPaymentRequest) HasAvailablePaymentMethods() bool`

HasAvailablePaymentMethods returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


