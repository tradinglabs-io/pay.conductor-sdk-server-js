/*
 * order_bank_slip_info.h
 *
 * Bank slip payment data
 */

#ifndef _order_bank_slip_info_H_
#define _order_bank_slip_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_bank_slip_info_t order_bank_slip_info_t;




typedef struct order_bank_slip_info_t {
    char *bar_code; // string
    char *digitable_line; // string
    char *pdf_url; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_bank_slip_info_t;

__attribute__((deprecated)) order_bank_slip_info_t *order_bank_slip_info_create(
    char *bar_code,
    char *digitable_line,
    char *pdf_url
);

void order_bank_slip_info_free(order_bank_slip_info_t *order_bank_slip_info);

order_bank_slip_info_t *order_bank_slip_info_parseFromJSON(cJSON *order_bank_slip_infoJSON);

cJSON *order_bank_slip_info_convertToJSON(order_bank_slip_info_t *order_bank_slip_info);

#endif /* _order_bank_slip_info_H_ */

