# AddressCreateRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**City** | **string** | City name | 
**Country** | **string** | Country code in ISO 3166-1 alpha-2 format | [default to "BR"]
**Neighborhood** | **string** | Neighborhood name | 
**Number** | **string** | Address number | 
**State** | **string** | State code in ISO 3166-2 format | 
**Street** | **string** | Street name | 
**ZipCode** | **string** | ZIP code without formatting | 

## Methods

### NewAddressCreateRequest

`func NewAddressCreateRequest(city string, country string, neighborhood string, number string, state string, street string, zipCode string, ) *AddressCreateRequest`

NewAddressCreateRequest instantiates a new AddressCreateRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewAddressCreateRequestWithDefaults

`func NewAddressCreateRequestWithDefaults() *AddressCreateRequest`

NewAddressCreateRequestWithDefaults instantiates a new AddressCreateRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetCity

`func (o *AddressCreateRequest) GetCity() string`

GetCity returns the City field if non-nil, zero value otherwise.

### GetCityOk

`func (o *AddressCreateRequest) GetCityOk() (*string, bool)`

GetCityOk returns a tuple with the City field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCity

`func (o *AddressCreateRequest) SetCity(v string)`

SetCity sets City field to given value.


### GetCountry

`func (o *AddressCreateRequest) GetCountry() string`

GetCountry returns the Country field if non-nil, zero value otherwise.

### GetCountryOk

`func (o *AddressCreateRequest) GetCountryOk() (*string, bool)`

GetCountryOk returns a tuple with the Country field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCountry

`func (o *AddressCreateRequest) SetCountry(v string)`

SetCountry sets Country field to given value.


### GetNeighborhood

`func (o *AddressCreateRequest) GetNeighborhood() string`

GetNeighborhood returns the Neighborhood field if non-nil, zero value otherwise.

### GetNeighborhoodOk

`func (o *AddressCreateRequest) GetNeighborhoodOk() (*string, bool)`

GetNeighborhoodOk returns a tuple with the Neighborhood field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNeighborhood

`func (o *AddressCreateRequest) SetNeighborhood(v string)`

SetNeighborhood sets Neighborhood field to given value.


### GetNumber

`func (o *AddressCreateRequest) GetNumber() string`

GetNumber returns the Number field if non-nil, zero value otherwise.

### GetNumberOk

`func (o *AddressCreateRequest) GetNumberOk() (*string, bool)`

GetNumberOk returns a tuple with the Number field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNumber

`func (o *AddressCreateRequest) SetNumber(v string)`

SetNumber sets Number field to given value.


### GetState

`func (o *AddressCreateRequest) GetState() string`

GetState returns the State field if non-nil, zero value otherwise.

### GetStateOk

`func (o *AddressCreateRequest) GetStateOk() (*string, bool)`

GetStateOk returns a tuple with the State field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetState

`func (o *AddressCreateRequest) SetState(v string)`

SetState sets State field to given value.


### GetStreet

`func (o *AddressCreateRequest) GetStreet() string`

GetStreet returns the Street field if non-nil, zero value otherwise.

### GetStreetOk

`func (o *AddressCreateRequest) GetStreetOk() (*string, bool)`

GetStreetOk returns a tuple with the Street field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStreet

`func (o *AddressCreateRequest) SetStreet(v string)`

SetStreet sets Street field to given value.


### GetZipCode

`func (o *AddressCreateRequest) GetZipCode() string`

GetZipCode returns the ZipCode field if non-nil, zero value otherwise.

### GetZipCodeOk

`func (o *AddressCreateRequest) GetZipCodeOk() (*string, bool)`

GetZipCodeOk returns a tuple with the ZipCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetZipCode

`func (o *AddressCreateRequest) SetZipCode(v string)`

SetZipCode sets ZipCode field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


