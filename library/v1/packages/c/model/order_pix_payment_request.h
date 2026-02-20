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

#include "payment_method.h"



typedef struct order_pix_payment_request_t {
    payconductor_api_payment_method__e payment_method; //referenced enum
    double expiration_in_seconds; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} order_pix_payment_request_t;

__attribute__((deprecated)) order_pix_payment_request_t *order_pix_payment_request_create(
    payconductor_api_payment_method__e payment_method,
    double expiration_in_seconds
);

void order_pix_payment_request_free(order_pix_payment_request_t *order_pix_payment_request);

order_pix_payment_request_t *order_pix_payment_request_parseFromJSON(cJSON *order_pix_payment_requestJSON);

cJSON *order_pix_payment_request_convertToJSON(order_pix_payment_request_t *order_pix_payment_request);

#endif /* _order_pix_payment_request_H_ */

