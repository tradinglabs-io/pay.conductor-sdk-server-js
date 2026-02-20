# CardTokenizationCreateResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**CustomerId** | **string** | ID of the customer associated with the created card | 
**Token** | **string** | Token of the created card for future transactions | 

## Methods

### NewCardTokenizationCreateResponse

`func NewCardTokenizationCreateResponse(customerId string, token string, ) *CardTokenizationCreateResponse`

NewCardTokenizationCreateResponse instantiates a new CardTokenizationCreateResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCardTokenizationCreateResponseWithDefaults

`func NewCardTokenizationCreateResponseWithDefaults() *CardTokenizationCreateResponse`

NewCardTokenizationCreateResponseWithDefaults instantiates a new CardTokenizationCreateResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetCustomerId

`func (o *CardTokenizationCreateResponse) GetCustomerId() string`

GetCustomerId returns the CustomerId field if non-nil, zero value otherwise.

### GetCustomerIdOk

`func (o *CardTokenizationCreateResponse) GetCustomerIdOk() (*string, bool)`

GetCustomerIdOk returns a tuple with the CustomerId field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCustomerId

`func (o *CardTokenizationCreateResponse) SetCustomerId(v string)`

SetCustomerId sets CustomerId field to given value.


### GetToken

`func (o *CardTokenizationCreateResponse) GetToken() string`

GetToken returns the Token field if non-nil, zero value otherwise.

### GetTokenOk

`func (o *CardTokenizationCreateResponse) GetTokenOk() (*string, bool)`

GetTokenOk returns a tuple with the Token field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetToken

`func (o *CardTokenizationCreateResponse) SetToken(v string)`

SetToken sets Token field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


