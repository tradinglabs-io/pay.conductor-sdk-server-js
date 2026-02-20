/*
 * order_credit_card_payment_request.h
 *
 * 
 */

#ifndef _order_credit_card_payment_request_H_
#define _order_credit_card_payment_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_credit_card_payment_request_t order_credit_card_payment_request_t;

#include "order_credit_card_payment_request_card.h"



typedef struct order_credit_card_payment_request_t {
    char *payment_method; // string
    struct order_credit_card_payment_request_card_t *card; //model
    double installments; //numeric
    char *soft_descriptor; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_credit_card_payment_request_t;

__attribute__((deprecated)) order_credit_card_payment_request_t *order_credit_card_payment_request_create(
    char *payment_method,
    order_credit_card_payment_request_card_t *card,
    double installments,
    char *soft_descriptor
);

void order_credit_card_payment_request_free(order_credit_card_payment_request_t *order_credit_card_payment_request);

order_credit_card_payment_request_t *order_credit_card_payment_request_parseFromJSON(cJSON *order_credit_card_payment_requestJSON);

cJSON *order_credit_card_payment_request_convertToJSON(order_credit_card_payment_request_t *order_credit_card_payment_request);

#endif /* _order_credit_card_payment_request_H_ */

