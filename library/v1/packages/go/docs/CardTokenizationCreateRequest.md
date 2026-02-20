# CardTokenizationCreateRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Card** | [**CardCreateRequest**](CardCreateRequest.md) |  | 
**SaveCard** | **bool** | Indicates if the card should be saved for future use | 
**Customer** | [**CardTokenizationCreateRequestCustomer**](CardTokenizationCreateRequestCustomer.md) |  | 

## Methods

### NewCardTokenizationCreateRequest

`func NewCardTokenizationCreateRequest(card CardCreateRequest, saveCard bool, customer CardTokenizationCreateRequestCustomer, ) *CardTokenizationCreateRequest`

NewCardTokenizationCreateRequest instantiates a new CardTokenizationCreateRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCardTokenizationCreateRequestWithDefaults

`func NewCardTokenizationCreateRequestWithDefaults() *CardTokenizationCreateRequest`

NewCardTokenizationCreateRequestWithDefaults instantiates a new CardTokenizationCreateRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetCard

`func (o *CardTokenizationCreateRequest) GetCard() CardCreateRequest`

GetCard returns the Card field if non-nil, zero value otherwise.

### GetCardOk

`func (o *CardTokenizationCreateRequest) GetCardOk() (*CardCreateRequest, bool)`

GetCardOk returns a tuple with the Card field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCard

`func (o *CardTokenizationCreateRequest) SetCard(v CardCreateRequest)`

SetCard sets Card field to given value.


### GetSaveCard

`func (o *CardTokenizationCreateRequest) GetSaveCard() bool`

GetSaveCard returns the SaveCard field if non-nil, zero value otherwise.

### GetSaveCardOk

`func (o *CardTokenizationCreateRequest) GetSaveCardOk() (*bool, bool)`

GetSaveCardOk returns a tuple with the SaveCard field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSaveCard

`func (o *CardTokenizationCreateRequest) SetSaveCard(v bool)`

SetSaveCard sets SaveCard field to given value.


### GetCustomer

`func (o *CardTokenizationCreateRequest) GetCustomer() CardTokenizationCreateRequestCustomer`

GetCustomer returns the Customer field if non-nil, zero value otherwise.

### GetCustomerOk

`func (o *CardTokenizationCreateRequest) GetCustomerOk() (*CardTokenizationCreateRequestCustomer, bool)`

GetCustomerOk returns a tuple with the Customer field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustomer

`func (o *CardTokenizationCreateRequest) SetCustomer(v CardTokenizationCreateRequestCustomer)`

SetCustomer sets Customer field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


