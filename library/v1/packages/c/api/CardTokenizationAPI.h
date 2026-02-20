#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/card_tokenization_create_request.h"
#include "../model/card_tokenization_create_response.h"


// Tokenize Card
//
// Tokenize credit cards for future charges.
//
card_tokenization_create_response_t*
CardTokenizationAPI_cardTokenize(apiClient_t *apiClient, card_tokenization_create_request_t *card_tokenization_create_request);


