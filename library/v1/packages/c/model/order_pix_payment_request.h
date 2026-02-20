/*
 * order_pix_payment_request.h
 *
 * 
 */

#ifndef _order_pix_payment_request_H_
#define _order_pix_payment_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_pix_payment_request_t order_pix_payment_request_t;




typedef struct order_pix_payment_request_t {
    char *payment_method; // string
    double expiration_in_seconds; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} order_pix_payment_request_t;

__attribute__((deprecated)) order_pix_payment_request_t *order_pix_payment_request_create(
    char *payment_method,
    double expiration_in_seconds
);

void order_pix_payment_request_free(order_pix_payment_request_t *order_pix_payment_request);

order_pix_payment_request_t *order_pix_payment_request_parseFromJSON(cJSON *order_pix_payment_requestJSON);

cJSON *order_pix_payment_request_convertToJSON(order_pix_payment_request_t *order_pix_payment_request);

#endif /* _order_pix_payment_request_H_ */

