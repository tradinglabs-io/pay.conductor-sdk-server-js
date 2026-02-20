/*
 * withdraw_create_response_payed_at.h
 *
 * Date and time when the withdrawal was paid (ISO 8601 format)
 */

#ifndef _withdraw_create_response_payed_at_H_
#define _withdraw_create_response_payed_at_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct withdraw_create_response_payed_at_t withdraw_create_response_payed_at_t;




typedef struct withdraw_create_response_payed_at_t {

    int _library_owned; // Is the library responsible for freeing this object?
} withdraw_create_response_payed_at_t;

__attribute__((deprecated)) withdraw_create_response_payed_at_t *withdraw_create_response_payed_at_create(
);

void withdraw_create_response_payed_at_free(withdraw_create_response_payed_at_t *withdraw_create_response_payed_at);

withdraw_create_response_payed_at_t *withdraw_create_response_payed_at_parseFromJSON(cJSON *withdraw_create_response_payed_atJSON);

cJSON *withdraw_create_response_payed_at_convertToJSON(withdraw_create_response_payed_at_t *withdraw_create_response_payed_at);

#endif /* _withdraw_create_response_payed_at_H_ */

