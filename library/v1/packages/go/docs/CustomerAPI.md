# \CustomerAPI

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CustomerCreate**](CustomerAPI.md#CustomerCreate) | **Post** /customers/ | Create New Customer
[**CustomerListCustom**](CustomerAPI.md#CustomerListCustom) | **Get** /customers/ | Get All Customers
[**CustomerRead**](CustomerAPI.md#CustomerRead) | **Get** /customers/{id} | Get Customer By ID
[**CustomerUpdate**](CustomerAPI.md#CustomerUpdate) | **Patch** /customers/{id} | Update Customer Data



## CustomerCreate

> CustomerReadResponse CustomerCreate(ctx).CustomerCreateRequest(customerCreateRequest).Execute()

Create New Customer



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	customerCreateRequest := *openapiclient.NewCustomerCreateRequest("DocumentNumber_example", openapiclient.DocumentType("Cpf"), "Email_example", "Name_example") // CustomerCreateRequest | Schema for creating a new customer

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.CustomerAPI.CustomerCreate(context.Background()).CustomerCreateRequest(customerCreateRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `CustomerAPI.CustomerCreate``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `CustomerCreate`: CustomerReadResponse
	fmt.Fprintf(os.Stdout, "Response from `CustomerAPI.CustomerCreate`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiCustomerCreateRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **customerCreateRequest** | [**CustomerCreateRequest**](CustomerCreateRequest.md) | Schema for creating a new customer | 

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CustomerListCustom

> CustomerListResponse CustomerListCustom(ctx).Page(page).PageSize(pageSize).Email(email).Name(name).EndDate(endDate).StartDate(startDate).Execute()

Get All Customers



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
    "time"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	page := float32(8.14) // float32 |  (default to 1)
	pageSize := float32(8.14) // float32 |  (default to 20)
	email := "email_example" // string |  (optional)
	name := "name_example" // string |  (optional)
	endDate := time.Now() // time.Time |  (optional)
	startDate := time.Now() // time.Time |  (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.CustomerAPI.CustomerListCustom(context.Background()).Page(page).PageSize(pageSize).Email(email).Name(name).EndDate(endDate).StartDate(startDate).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `CustomerAPI.CustomerListCustom``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `CustomerListCustom`: CustomerListResponse
	fmt.Fprintf(os.Stdout, "Response from `CustomerAPI.CustomerListCustom`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiCustomerListCustomRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **float32** |  | [default to 1]
 **pageSize** | **float32** |  | [default to 20]
 **email** | **string** |  | 
 **name** | **string** |  | 
 **endDate** | **time.Time** |  | 
 **startDate** | **time.Time** |  | 

### Return type

[**CustomerListResponse**](CustomerListResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CustomerRead

> CustomerReadResponse CustomerRead(ctx, id).Execute()

Get Customer By ID



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	id := "id_example" // string | 

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.CustomerAPI.CustomerRead(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `CustomerAPI.CustomerRead``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `CustomerRead`: CustomerReadResponse
	fmt.Fprintf(os.Stdout, "Response from `CustomerAPI.CustomerRead`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiCustomerReadRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CustomerUpdate

> CustomerReadResponse CustomerUpdate(ctx, id).CustomerUpdateRequest(customerUpdateRequest).Execute()

Update Customer Data



### Example

```go
package main

import (
	"context"
	"fmt"
	"os"
	openapiclient "github.com/GIT_USER_ID/GIT_REPO_ID"
)

func main() {
	id := "id_example" // string | 
	customerUpdateRequest := *openapiclient.NewCustomerUpdateRequest() // CustomerUpdateRequest | Schema for updating customer information

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.CustomerAPI.CustomerUpdate(context.Background(), id).CustomerUpdateRequest(customerUpdateRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `CustomerAPI.CustomerUpdate``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `CustomerUpdate`: CustomerReadResponse
	fmt.Fprintf(os.Stdout, "Response from `CustomerAPI.CustomerUpdate`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiCustomerUpdateRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **customerUpdateRequest** | [**CustomerUpdateRequest**](CustomerUpdateRequest.md) | Schema for updating customer information | 

### Return type

[**CustomerReadResponse**](CustomerReadResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

