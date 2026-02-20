/*
 * order_credit_card_payment_request_card.h
 *
 * 
 */

#ifndef _order_credit_card_payment_request_card_H_
#define _order_credit_card_payment_request_card_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_credit_card_payment_request_card_t order_credit_card_payment_request_card_t;

#include "card_create_request.h"
#include "card_expiration_data.h"
#include "order_tokenized_card_data.h"



typedef struct order_credit_card_payment_request_card_t {
    char *first_six_card_number; // string
    char *token; // string
    char *cvv; // string
    struct card_expiration_data_t *expiration; //model
    char *holder_name; // string
    char *number; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_credit_card_payment_request_card_t;

__attribute__((deprecated)) order_credit_card_payment_request_card_t *order_credit_card_payment_request_card_create(
    char *first_six_card_number,
    char *token,
    char *cvv,
    card_expiration_data_t *expiration,
    char *holder_name,
    char *number
);

void order_credit_card_payment_request_card_free(order_credit_card_payment_request_card_t *order_credit_card_payment_request_card);

order_credit_card_payment_request_card_t *order_credit_card_payment_request_card_parseFromJSON(cJSON *order_credit_card_payment_request_cardJSON);

cJSON *order_credit_card_payment_request_card_convertToJSON(order_credit_card_payment_request_card_t *order_credit_card_payment_request_card);

#endif /* _order_credit_card_payment_request_card_H_ */

