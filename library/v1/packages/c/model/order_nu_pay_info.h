/*
 * order_nu_pay_info.h
 *
 * NuPay payment data
 */

#ifndef _order_nu_pay_info_H_
#define _order_nu_pay_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_nu_pay_info_t order_nu_pay_info_t;




typedef struct order_nu_pay_info_t {
    char *payment_url; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_nu_pay_info_t;

__attribute__((deprecated)) order_nu_pay_info_t *order_nu_pay_info_create(
    char *payment_url
);

void order_nu_pay_info_free(order_nu_pay_info_t *order_nu_pay_info);

order_nu_pay_info_t *order_nu_pay_info_parseFromJSON(cJSON *order_nu_pay_infoJSON);

cJSON *order_nu_pay_info_convertToJSON(order_nu_pay_info_t *order_nu_pay_info);

#endif /* _order_nu_pay_info_H_ */

