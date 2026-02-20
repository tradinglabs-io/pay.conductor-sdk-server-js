/*
 * order_pic_pay_payment_request.h
 *
 * 
 */

#ifndef _order_pic_pay_payment_request_H_
#define _order_pic_pay_payment_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_pic_pay_payment_request_t order_pic_pay_payment_request_t;




typedef struct order_pic_pay_payment_request_t {
    char *payment_method; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_pic_pay_payment_request_t;

__attribute__((deprecated)) order_pic_pay_payment_request_t *order_pic_pay_payment_request_create(
    char *payment_method
);

void order_pic_pay_payment_request_free(order_pic_pay_payment_request_t *order_pic_pay_payment_request);

order_pic_pay_payment_request_t *order_pic_pay_payment_request_parseFromJSON(cJSON *order_pic_pay_payment_requestJSON);

cJSON *order_pic_pay_payment_request_convertToJSON(order_pic_pay_payment_request_t *order_pic_pay_payment_request);

#endif /* _order_pic_pay_payment_request_H_ */

