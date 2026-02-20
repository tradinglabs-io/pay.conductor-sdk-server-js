# CardTokenizationCreateRequestCustomer

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Address** | Pointer to [**AddressCreateRequest**](AddressCreateRequest.md) |  | [optional] 
**DocumentNumber** | **string** | Customer CPF or CNPJ without formatting | 
**DocumentType** | [**DocumentType**](DocumentType.md) |  | 
**Email** | **string** | Customer email | 
**Name** | **string** | Customer full name | 
**PhoneNumber** | Pointer to **string** | Customer phone number in +55 DD 9XXXXXXXX format | [optional] 
**Id** | **string** | ID of an existing customer | 

## Methods

### NewCardTokenizationCreateRequestCustomer

`func NewCardTokenizationCreateRequestCustomer(documentNumber string, documentType DocumentType, email string, name string, id string, ) *CardTokenizationCreateRequestCustomer`

NewCardTokenizationCreateRequestCustomer instantiates a new CardTokenizationCreateRequestCustomer object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCardTokenizationCreateRequestCustomerWithDefaults

`func NewCardTokenizationCreateRequestCustomerWithDefaults() *CardTokenizationCreateRequestCustomer`

NewCardTokenizationCreateRequestCustomerWithDefaults instantiates a new CardTokenizationCreateRequestCustomer object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAddress

`func (o *CardTokenizationCreateRequestCustomer) GetAddress() AddressCreateRequest`

GetAddress returns the Address field if non-nil, zero value otherwise.

### GetAddressOk

`func (o *CardTokenizationCreateRequestCustomer) GetAddressOk() (*AddressCreateRequest, bool)`

GetAddressOk returns a tuple with the Address field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAddress

`func (o *CardTokenizationCreateRequestCustomer) SetAddress(v AddressCreateRequest)`

SetAddress sets Address field to given value.

### HasAddress

`func (o *CardTokenizationCreateRequestCustomer) HasAddress() bool`

HasAddress returns a boolean if a field has been set.

### GetDocumentNumber

`func (o *CardTokenizationCreateRequestCustomer) GetDocumentNumber() string`

GetDocumentNumber returns the DocumentNumber field if non-nil, zero value otherwise.

### GetDocumentNumberOk

`func (o *CardTokenizationCreateRequestCustomer) GetDocumentNumberOk() (*string, bool)`

GetDocumentNumberOk returns a tuple with the DocumentNumber field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDocumentNumber

`func (o *CardTokenizationCreateRequestCustomer) SetDocumentNumber(v string)`

SetDocumentNumber sets DocumentNumber field to given value.


### GetDocumentType

`func (o *CardTokenizationCreateRequestCustomer) GetDocumentType() DocumentType`

GetDocumentType returns the DocumentType field if non-nil, zero value otherwise.

### GetDocumentTypeOk

`func (o *CardTokenizationCreateRequestCustomer) GetDocumentTypeOk() (*DocumentType, bool)`

GetDocumentTypeOk returns a tuple with the DocumentType field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDocumentType

`func (o *CardTokenizationCreateRequestCustomer) SetDocumentType(v DocumentType)`

SetDocumentType sets DocumentType field to given value.


### GetEmail

`func (o *CardTokenizationCreateRequestCustomer) GetEmail() string`

GetEmail returns the Email field if non-nil, zero value otherwise.

### GetEmailOk

`func (o *CardTokenizationCreateRequestCustomer) GetEmailOk() (*string, bool)`

GetEmailOk returns a tuple with the Email field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEmail

`func (o *CardTokenizationCreateRequestCustomer) SetEmail(v string)`

SetEmail sets Email field to given value.


### GetName

`func (o *CardTokenizationCreateRequestCustomer) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *CardTokenizationCreateRequestCustomer) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *CardTokenizationCreateRequestCustomer) SetName(v string)`

SetName sets Name field to given value.


### GetPhoneNumber

`func (o *CardTokenizationCreateRequestCustomer) GetPhoneNumber() string`

GetPhoneNumber returns the PhoneNumber field if non-nil, zero value otherwise.

### GetPhoneNumberOk

`func (o *CardTokenizationCreateRequestCustomer) GetPhoneNumberOk() (*string, bool)`

GetPhoneNumberOk returns a tuple with the PhoneNumber field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPhoneNumber

`func (o *CardTokenizationCreateRequestCustomer) SetPhoneNumber(v string)`

SetPhoneNumber sets PhoneNumber field to given value.

### HasPhoneNumber

`func (o *CardTokenizationCreateRequestCustomer) HasPhoneNumber() bool`

HasPhoneNumber returns a boolean if a field has been set.

### GetId

`func (o *CardTokenizationCreateRequestCustomer) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *CardTokenizationCreateRequestCustomer) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *CardTokenizationCreateRequestCustomer) SetId(v string)`

SetId sets Id field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


