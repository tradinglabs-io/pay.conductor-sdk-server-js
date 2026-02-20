# OrderCreditCardPaymentRequestCard

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**FirstSixCardNumber** | Pointer to **string** | First 6 digits of the credit card | [optional] 
**Token** | **string** | Previously generated credit card token | 
**Cvv** | **string** | Card security code (CVV) | 
**Expiration** | [**CardExpirationData**](CardExpirationData.md) |  | 
**HolderName** | **string** | Card holder name | 
**Number** | **string** | Credit card number | 

## Methods

### NewOrderCreditCardPaymentRequestCard

`func NewOrderCreditCardPaymentRequestCard(token string, cvv string, expiration CardExpirationData, holderName string, number string, ) *OrderCreditCardPaymentRequestCard`

NewOrderCreditCardPaymentRequestCard instantiates a new OrderCreditCardPaymentRequestCard object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewOrderCreditCardPaymentRequestCardWithDefaults

`func NewOrderCreditCardPaymentRequestCardWithDefaults() *OrderCreditCardPaymentRequestCard`

NewOrderCreditCardPaymentRequestCardWithDefaults instantiates a new OrderCreditCardPaymentRequestCard object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetFirstSixCardNumber

`func (o *OrderCreditCardPaymentRequestCard) GetFirstSixCardNumber() string`

GetFirstSixCardNumber returns the FirstSixCardNumber field if non-nil, zero value otherwise.

### GetFirstSixCardNumberOk

`func (o *OrderCreditCardPaymentRequestCard) GetFirstSixCardNumberOk() (*string, bool)`

GetFirstSixCardNumberOk returns a tuple with the FirstSixCardNumber field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFirstSixCardNumber

`func (o *OrderCreditCardPaymentRequestCard) SetFirstSixCardNumber(v string)`

SetFirstSixCardNumber sets FirstSixCardNumber field to given value.

### HasFirstSixCardNumber

`func (o *OrderCreditCardPaymentRequestCard) HasFirstSixCardNumber() bool`

HasFirstSixCardNumber returns a boolean if a field has been set.

### GetToken

`func (o *OrderCreditCardPaymentRequestCard) GetToken() string`

GetToken returns the Token field if non-nil, zero value otherwise.

### GetTokenOk

`func (o *OrderCreditCardPaymentRequestCard) GetTokenOk() (*string, bool)`

GetTokenOk returns a tuple with the Token field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetToken

`func (o *OrderCreditCardPaymentRequestCard) SetToken(v string)`

SetToken sets Token field to given value.


### GetCvv

`func (o *OrderCreditCardPaymentRequestCard) GetCvv() string`

GetCvv returns the Cvv field if non-nil, zero value otherwise.

### GetCvvOk

`func (o *OrderCreditCardPaymentRequestCard) GetCvvOk() (*string, bool)`

GetCvvOk returns a tuple with the Cvv field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCvv

`func (o *OrderCreditCardPaymentRequestCard) SetCvv(v string)`

SetCvv sets Cvv field to given value.


### GetExpiration

`func (o *OrderCreditCardPaymentRequestCard) GetExpiration() CardExpirationData`

GetExpiration returns the Expiration field if non-nil, zero value otherwise.

### GetExpirationOk

`func (o *OrderCreditCardPaymentRequestCard) GetExpirationOk() (*CardExpirationData, bool)`

GetExpirationOk returns a tuple with the Expiration field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExpiration

`func (o *OrderCreditCardPaymentRequestCard) SetExpiration(v CardExpirationData)`

SetExpiration sets Expiration field to given value.


### GetHolderName

`func (o *OrderCreditCardPaymentRequestCard) GetHolderName() string`

GetHolderName returns the HolderName field if non-nil, zero value otherwise.

### GetHolderNameOk

`func (o *OrderCreditCardPaymentRequestCard) GetHolderNameOk() (*string, bool)`

GetHolderNameOk returns a tuple with the HolderName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHolderName

`func (o *OrderCreditCardPaymentRequestCard) SetHolderName(v string)`

SetHolderName sets HolderName field to given value.


### GetNumber

`func (o *OrderCreditCardPaymentRequestCard) GetNumber() string`

GetNumber returns the Number field if non-nil, zero value otherwise.

### GetNumberOk

`func (o *OrderCreditCardPaymentRequestCard) GetNumberOk() (*string, bool)`

GetNumberOk returns a tuple with the Number field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNumber

`func (o *OrderCreditCardPaymentRequestCard) SetNumber(v string)`

SetNumber sets Number field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


