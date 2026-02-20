# \CardTokenizationAPI

All URIs are relative to *https://app.payconductor.ai/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CardTokenize**](CardTokenizationAPI.md#CardTokenize) | **Post** /card-tokenization/ | Tokenize Card



## CardTokenize

> CardTokenizationCreateResponse CardTokenize(ctx).CardTokenizationCreateRequest(cardTokenizationCreateRequest).Execute()

Tokenize Card



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
	cardTokenizationCreateRequest := *openapiclient.NewCardTokenizationCreateRequest(*openapiclient.NewCardCreateRequest("Cvv_example", *openapiclient.NewCardExpirationData(float32(123), float32(123)), "HolderName_example", "Number_example"), false, openapiclient.Card_Tokenization_Create_Request_customer{CardTokenizationCustomerByIdData: openapiclient.NewCardTokenizationCustomerByIdData("Id_example")}) // CardTokenizationCreateRequest | Data for creating a customer card with customer information

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)
	resp, r, err := apiClient.CardTokenizationAPI.CardTokenize(context.Background()).CardTokenizationCreateRequest(cardTokenizationCreateRequest).Execute()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error when calling `CardTokenizationAPI.CardTokenize``: %v\n", err)
		fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
	}
	// response from `CardTokenize`: CardTokenizationCreateResponse
	fmt.Fprintf(os.Stdout, "Response from `CardTokenizationAPI.CardTokenize`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiCardTokenizeRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **cardTokenizationCreateRequest** | [**CardTokenizationCreateRequest**](CardTokenizationCreateRequest.md) | Data for creating a customer card with customer information | 

### Return type

[**CardTokenizationCreateResponse**](CardTokenizationCreateResponse.md)

### Authorization

[basicAuth](../README.md#basicAuth)

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

