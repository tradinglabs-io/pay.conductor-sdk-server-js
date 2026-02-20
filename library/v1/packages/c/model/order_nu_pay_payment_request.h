/*
 * order_nu_pay_payment_request.h
 *
 * 
 */

#ifndef _order_nu_pay_payment_request_H_
#define _order_nu_pay_payment_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_nu_pay_payment_request_t order_nu_pay_payment_request_t;

#include "order_nu_pay_payment_request_nu_pay.h"
#include "payment_method.h"



typedef struct order_nu_pay_payment_request_t {
    payconductor_api_payment_method__e payment_method; //referenced enum
    struct order_nu_pay_payment_request_nu_pay_t *nu_pay; //model

    int _library_owned; // Is the library responsible for freeing this object?
} order_nu_pay_payment_request_t;

__attribute__((deprecated)) order_nu_pay_payment_request_t *order_nu_pay_payment_request_create(
    payconductor_api_payment_method__e payment_method,
    order_nu_pay_payment_request_nu_pay_t *nu_pay
);

void order_nu_pay_payment_request_free(order_nu_pay_payment_request_t *order_nu_pay_payment_request);

order_nu_pay_payment_request_t *order_nu_pay_payment_request_parseFromJSON(cJSON *order_nu_pay_payment_requestJSON);

cJSON *order_nu_pay_payment_request_convertToJSON(order_nu_pay_payment_request_t *order_nu_pay_payment_request);

#endif /* _order_nu_pay_payment_request_H_ */

