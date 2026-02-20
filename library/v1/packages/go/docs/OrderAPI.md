# \OrderAPI

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**OrderConfirm**](OrderAPI.md#OrderConfirm) | **Post** /orders/{id}/confirm | Confirm Order
[**OrderCreate**](OrderAPI.md#OrderCreate) | **Post** /orders/ | Create Order
[**OrderList**](OrderAPI.md#OrderList) | **Get** /orders/ | List Orders
[**OrderRead**](OrderAPI.md#OrderRead) | **Get** /orders/{id} | Get Order By ID
[**OrderRefund**](OrderAPI.md#OrderRefund) | **Post** /orders/{id}/refund | Refund Order



## OrderConfirm

> OrderConfirmResponse OrderConfirm(ctx, id).OrderPaymentRequest(orderPaymentRequest).Execute()

Confirm Order



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
	orderPaymentRequest := openapiclient.Order_Payment_Request{OrderBankSlipPaymentRequest: openapiclient.NewOrderBankSlipPaymentRequest("PaymentMethod_example")} // OrderPaymentRequest | Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.OrderAPI.OrderConfirm(context.Background(), id).OrderPaymentRequest(orderPaymentRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `OrderAPI.OrderConfirm``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `OrderConfirm`: OrderConfirmResponse
	fmt.Fprintf(os.Stdout, "Response from `OrderAPI.OrderConfirm`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiOrderConfirmRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **orderPaymentRequest** | [**OrderPaymentRequest**](OrderPaymentRequest.md) | Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...) | 

### Return type

[**OrderConfirmResponse**](OrderConfirmResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## OrderCreate

> OrderCreateResponse OrderCreate(ctx).OrderCreateRequest(orderCreateRequest).Execute()

Create Order



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
	orderCreateRequest := *openapiclient.NewOrderCreateRequest(float32(123), "ClientIp_example", *openapiclient.NewCustomerCreateRequest("DocumentNumber_example", openapiclient.DocumentType("Cpf"), "Email_example", "Name_example"), float32(123), "ExternalId_example", openapiclient.Order_Payment_Request{OrderBankSlipPaymentRequest: openapiclient.NewOrderBankSlipPaymentRequest("PaymentMethod_example")}, float32(123), float32(123)) // OrderCreateRequest | Order data for payment processing

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.OrderAPI.OrderCreate(context.Background()).OrderCreateRequest(orderCreateRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `OrderAPI.OrderCreate``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `OrderCreate`: OrderCreateResponse
	fmt.Fprintf(os.Stdout, "Response from `OrderAPI.OrderCreate`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiOrderCreateRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **orderCreateRequest** | [**OrderCreateRequest**](OrderCreateRequest.md) | Order data for payment processing | 

### Return type

[**OrderCreateResponse**](OrderCreateResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## OrderList

> OrderList(ctx).Page(page).PageSize(pageSize).EndDate(endDate).StartDate(startDate).Id(id).Status(status).Execute()

List Orders



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
	endDate := time.Now() // time.Time |  (optional)
	startDate := time.Now() // time.Time |  (optional)
	id := "id_example" // string |  (optional)
	status := "status_example" // string |  (optional)

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	r, err := apiClient.OrderAPI.OrderList(context.Background()).Page(page).PageSize(pageSize).EndDate(endDate).StartDate(startDate).Id(id).Status(status).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `OrderAPI.OrderList``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiOrderListRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **float32** |  | [default to 1]
 **pageSize** | **float32** |  | [default to 20]
 **endDate** | **time.Time** |  | 
 **startDate** | **time.Time** |  | 
 **id** | **string** |  | 
 **status** | **string** |  | 

### Return type

 (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## OrderRead

> OrderRead(ctx, id).Execute()

Get Order By ID



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
	r, err := apiClient.OrderAPI.OrderRead(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `OrderAPI.OrderRead``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiOrderReadRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

 (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## OrderRefund

> OrderRefund(ctx, id).Execute()

Refund Order



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
	r, err := apiClient.OrderAPI.OrderRefund(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `OrderAPI.OrderRefund``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiOrderRefundRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

 (empty response body)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

