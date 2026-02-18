/*
 * boleto_expiration_in_days.h
 *
 * Dias até o vencimento do boleto
 */

#ifndef _boleto_expiration_in_days_H_
#define _boleto_expiration_in_days_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct boleto_expiration_in_days_t boleto_expiration_in_days_t;




typedef struct boleto_expiration_in_days_t {

    int _library_owned; // Is the library responsible for freeing this object?
} boleto_expiration_in_days_t;

__attribute__((deprecated)) boleto_expiration_in_days_t *boleto_expiration_in_days_create(
);

void boleto_expiration_in_days_free(boleto_expiration_in_days_t *boleto_expiration_in_days);

boleto_expiration_in_days_t *boleto_expiration_in_days_parseFromJSON(cJSON *boleto_expiration_in_daysJSON);

cJSON *boleto_expiration_in_days_convertToJSON(boleto_expiration_in_days_t *boleto_expiration_in_days);

#endif /* _boleto_expiration_in_days_H_ */

