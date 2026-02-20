# \WithdrawAPI

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WithdrawCreate**](WithdrawAPI.md#WithdrawCreate) | **Post** /withdraws/ | Create Withdrawal
[**WithdrawList**](WithdrawAPI.md#WithdrawList) | **Get** /withdraws/ | List Withdrawals
[**WithdrawRead**](WithdrawAPI.md#WithdrawRead) | **Get** /withdraws/{id} | Get Withdrawal By ID



## WithdrawCreate

> WithdrawCreateResponse WithdrawCreate(ctx).WithdrawCreateRequest(withdrawCreateRequest).Execute()

Create Withdrawal



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
	withdrawCreateRequest := *openapiclient.NewWithdrawCreateRequest(float32(123), *openapiclient.NewWithdrawPayoutAccountData("OwnerDocument_example", "OwnerName_example", "PixKey_example", openapiclient.PixType("Cpf"))) // WithdrawCreateRequest | Withdrawal or transfer request data

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.WithdrawAPI.WithdrawCreate(context.Background()).WithdrawCreateRequest(withdrawCreateRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WithdrawAPI.WithdrawCreate``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `WithdrawCreate`: WithdrawCreateResponse
	fmt.Fprintf(os.Stdout, "Response from `WithdrawAPI.WithdrawCreate`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiWithdrawCreateRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **withdrawCreateRequest** | [**WithdrawCreateRequest**](WithdrawCreateRequest.md) | Withdrawal or transfer request data | 

### Return type

[**WithdrawCreateResponse**](WithdrawCreateResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## WithdrawList

> WithdrawList(ctx).Page(page).PageSize(pageSize).EndDate(endDate).StartDate(startDate).Id(id).Execute()

List Withdrawals



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

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	r, err := apiClient.WithdrawAPI.WithdrawList(context.Background()).Page(page).PageSize(pageSize).EndDate(endDate).StartDate(startDate).Id(id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WithdrawAPI.WithdrawList``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiWithdrawListRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **page** | **float32** |  | [default to 1]
 **pageSize** | **float32** |  | [default to 20]
 **endDate** | **time.Time** |  | 
 **startDate** | **time.Time** |  | 
 **id** | **string** |  | 

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


## WithdrawRead

> WithdrawRead(ctx, id).Execute()

Get Withdrawal By ID



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
	r, err := apiClient.WithdrawAPI.WithdrawRead(context.Background(), id).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `WithdrawAPI.WithdrawRead``: %v\n", err)
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

Other parameters are passed through a pointer to a apiWithdrawReadRequest struct via the builder pattern


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

