# CustomerAddressResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | **string** | Unique address identifier | 
**Street** | **string** | Street name | 
**Number** | **string** | Address number | 
**Neighborhood** | **string** | Neighborhood name | 
**City** | **string** | City name | 
**State** | **string** | State code in ISO 3166-2 format | 
**ZipCode** | **string** | ZIP code without formatting | 
**Country** | **string** | Country code in ISO 3166-1 alpha-2 format | 

## Methods

### NewCustomerAddressResponse

`func NewCustomerAddressResponse(id string, street string, number string, neighborhood string, city string, state string, zipCode string, country string, ) *CustomerAddressResponse`

NewCustomerAddressResponse instantiates a new CustomerAddressResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCustomerAddressResponseWithDefaults

`func NewCustomerAddressResponseWithDefaults() *CustomerAddressResponse`

NewCustomerAddressResponseWithDefaults instantiates a new CustomerAddressResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetId

`func (o *CustomerAddressResponse) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *CustomerAddressResponse) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *CustomerAddressResponse) SetId(v string)`

SetId sets Id field to given value.


### GetStreet

`func (o *CustomerAddressResponse) GetStreet() string`

GetStreet returns the Street field if non-nil, zero value otherwise.

### GetStreetOk

`func (o *CustomerAddressResponse) GetStreetOk() (*string, bool)`

GetStreetOk returns a tuple with the Street field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStreet

`func (o *CustomerAddressResponse) SetStreet(v string)`

SetStreet sets Street field to given value.


### GetNumber

`func (o *CustomerAddressResponse) GetNumber() string`

GetNumber returns the Number field if non-nil, zero value otherwise.

### GetNumberOk

`func (o *CustomerAddressResponse) GetNumberOk() (*string, bool)`

GetNumberOk returns a tuple with the Number field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNumber

`func (o *CustomerAddressResponse) SetNumber(v string)`

SetNumber sets Number field to given value.


### GetNeighborhood

`func (o *CustomerAddressResponse) GetNeighborhood() string`

GetNeighborhood returns the Neighborhood field if non-nil, zero value otherwise.

### GetNeighborhoodOk

`func (o *CustomerAddressResponse) GetNeighborhoodOk() (*string, bool)`

GetNeighborhoodOk returns a tuple with the Neighborhood field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNeighborhood

`func (o *CustomerAddressResponse) SetNeighborhood(v string)`

SetNeighborhood sets Neighborhood field to given value.


### GetCity

`func (o *CustomerAddressResponse) GetCity() string`

GetCity returns the City field if non-nil, zero value otherwise.

### GetCityOk

`func (o *CustomerAddressResponse) GetCityOk() (*string, bool)`

GetCityOk returns a tuple with the City field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCity

`func (o *CustomerAddressResponse) SetCity(v string)`

SetCity sets City field to given value.


### GetState

`func (o *CustomerAddressResponse) GetState() string`

GetState returns the State field if non-nil, zero value otherwise.

### GetStateOk

`func (o *CustomerAddressResponse) GetStateOk() (*string, bool)`

GetStateOk returns a tuple with the State field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetState

`func (o *CustomerAddressResponse) SetState(v string)`

SetState sets State field to given value.


### GetZipCode

`func (o *CustomerAddressResponse) GetZipCode() string`

GetZipCode returns the ZipCode field if non-nil, zero value otherwise.

### GetZipCodeOk

`func (o *CustomerAddressResponse) GetZipCodeOk() (*string, bool)`

GetZipCodeOk returns a tuple with the ZipCode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetZipCode

`func (o *CustomerAddressResponse) SetZipCode(v string)`

SetZipCode sets ZipCode field to given value.


### GetCountry

`func (o *CustomerAddressResponse) GetCountry() string`

GetCountry returns the Country field if non-nil, zero value otherwise.

### GetCountryOk

`func (o *CustomerAddressResponse) GetCountryOk() (*string, bool)`

GetCountryOk returns a tuple with the Country field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCountry

`func (o *CustomerAddressResponse) SetCountry(v string)`

SetCountry sets Country field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


