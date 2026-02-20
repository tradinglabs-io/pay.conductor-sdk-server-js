#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "CardTokenizationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define MAX_NUMBER_LENGTH_LONG 21


// Tokenize Card
//
// Tokenize credit cards for future charges.
//
card_tokenization_create_response_t*
CardTokenizationAPI_cardTokenize(apiClient_t *apiClient, card_tokenization_create_request_t *card_tokenization_create_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;
    size_t     localVarBodyLength = 0;

    // clear the error code from the previous api call
    apiClient->response_code = 0;

    // create the path
    char *localVarPath = strdup("/card-tokenization/");





    // Body Param
    cJSON *localVarSingleItemJSON_card_tokenization_create_request = NULL;
    if (card_tokenization_create_request != NULL)
    {
        //not string, not binary
        localVarSingleItemJSON_card_tokenization_create_request = card_tokenization_create_request_convertToJSON(card_tokenization_create_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_card_tokenization_create_request);
        localVarBodyLength = strlen(localVarBodyParameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    localVarBodyLength,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Response containing customer ID and card token");
    //}
    //nonprimitive not container
    card_tokenization_create_response_t *elementToReturn = NULL;
    if(apiClient->response_code >= 200 && apiClient->response_code < 300) {
        cJSON *CardTokenizationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
        elementToReturn = card_tokenization_create_response_parseFromJSON(CardTokenizationAPIlocalVarJSON);
        cJSON_Delete(CardTokenizationAPIlocalVarJSON);
        if(elementToReturn == NULL) {
            // return 0;
        }
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_card_tokenization_create_request) {
        cJSON_Delete(localVarSingleItemJSON_card_tokenization_create_request);
        localVarSingleItemJSON_card_tokenization_create_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

