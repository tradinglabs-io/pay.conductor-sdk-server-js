# CustomerListPagination

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**CurrentPage** | **float32** | Current page number | 
**PageSize** | **float32** | Number of items per page | 
**TotalItems** | **float32** | Total number of customers | 
**TotalPages** | **float32** | Total number of pages | 

## Methods

### NewCustomerListPagination

`func NewCustomerListPagination(currentPage float32, pageSize float32, totalItems float32, totalPages float32, ) *CustomerListPagination`

NewCustomerListPagination instantiates a new CustomerListPagination object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCustomerListPaginationWithDefaults

`func NewCustomerListPaginationWithDefaults() *CustomerListPagination`

NewCustomerListPaginationWithDefaults instantiates a new CustomerListPagination object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetCurrentPage

`func (o *CustomerListPagination) GetCurrentPage() float32`

GetCurrentPage returns the CurrentPage field if non-nil, zero value otherwise.

### GetCurrentPageOk

`func (o *CustomerListPagination) GetCurrentPageOk() (*float32, bool)`

GetCurrentPageOk returns a tuple with the CurrentPage field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCurrentPage

`func (o *CustomerListPagination) SetCurrentPage(v float32)`

SetCurrentPage sets CurrentPage field to given value.


### GetPageSize

`func (o *CustomerListPagination) GetPageSize() float32`

GetPageSize returns the PageSize field if non-nil, zero value otherwise.

### GetPageSizeOk

`func (o *CustomerListPagination) GetPageSizeOk() (*float32, bool)`

GetPageSizeOk returns a tuple with the PageSize field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPageSize

`func (o *CustomerListPagination) SetPageSize(v float32)`

SetPageSize sets PageSize field to given value.


### GetTotalItems

`func (o *CustomerListPagination) GetTotalItems() float32`

GetTotalItems returns the TotalItems field if non-nil, zero value otherwise.

### GetTotalItemsOk

`func (o *CustomerListPagination) GetTotalItemsOk() (*float32, bool)`

GetTotalItemsOk returns a tuple with the TotalItems field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTotalItems

`func (o *CustomerListPagination) SetTotalItems(v float32)`

SetTotalItems sets TotalItems field to given value.


### GetTotalPages

`func (o *CustomerListPagination) GetTotalPages() float32`

GetTotalPages returns the TotalPages field if non-nil, zero value otherwise.

### GetTotalPagesOk

`func (o *CustomerListPagination) GetTotalPagesOk() (*float32, bool)`

GetTotalPagesOk returns a tuple with the TotalPages field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTotalPages

`func (o *CustomerListPagination) SetTotalPages(v float32)`

SetTotalPages sets TotalPages field to given value.



[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


