/*
 * order_nu_pay_payment_request_nu_pay.h
 *
 * Specific data for NuPay payment
 */

#ifndef _order_nu_pay_payment_request_nu_pay_H_
#define _order_nu_pay_payment_request_nu_pay_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_nu_pay_payment_request_nu_pay_t order_nu_pay_payment_request_nu_pay_t;




typedef struct order_nu_pay_payment_request_nu_pay_t {
    char *cancel_url; // string
    char *merchant_name; // string
    char *return_url; // string
    char *store_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_nu_pay_payment_request_nu_pay_t;

__attribute__((deprecated)) order_nu_pay_payment_request_nu_pay_t *order_nu_pay_payment_request_nu_pay_create(
    char *cancel_url,
    char *merchant_name,
    char *return_url,
    char *store_name
);

void order_nu_pay_payment_request_nu_pay_free(order_nu_pay_payment_request_nu_pay_t *order_nu_pay_payment_request_nu_pay);

order_nu_pay_payment_request_nu_pay_t *order_nu_pay_payment_request_nu_pay_parseFromJSON(cJSON *order_nu_pay_payment_request_nu_payJSON);

cJSON *order_nu_pay_payment_request_nu_pay_convertToJSON(order_nu_pay_payment_request_nu_pay_t *order_nu_pay_payment_request_nu_pay);

#endif /* _order_nu_pay_payment_request_nu_pay_H_ */

