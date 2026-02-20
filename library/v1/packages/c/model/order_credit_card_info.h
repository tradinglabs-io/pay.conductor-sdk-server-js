/*
 * order_credit_card_info.h
 *
 * Credit card payment data
 */

#ifndef _order_credit_card_info_H_
#define _order_credit_card_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_credit_card_info_t order_credit_card_info_t;




typedef struct order_credit_card_info_t {
    char *authorization_code; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_credit_card_info_t;

__attribute__((deprecated)) order_credit_card_info_t *order_credit_card_info_create(
    char *authorization_code
);

void order_credit_card_info_free(order_credit_card_info_t *order_credit_card_info);

order_credit_card_info_t *order_credit_card_info_parseFromJSON(cJSON *order_credit_card_infoJSON);

cJSON *order_credit_card_info_convertToJSON(order_credit_card_info_t *order_credit_card_info);

#endif /* _order_credit_card_info_H_ */

