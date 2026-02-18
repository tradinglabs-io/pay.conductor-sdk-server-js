/*
 * boleto.h
 *
 * 
 */

#ifndef _boleto_H_
#define _boleto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct boleto_t boleto_t;

#include "boleto_expiration_in_days.h"



typedef struct boleto_t {
    char *payment_method; // string
    struct boleto_expiration_in_days_t *expiration_in_days; //model

    int _library_owned; // Is the library responsible for freeing this object?
} boleto_t;

__attribute__((deprecated)) boleto_t *boleto_create(
    char *payment_method,
    boleto_expiration_in_days_t *expiration_in_days
);

void boleto_free(boleto_t *boleto);

boleto_t *boleto_parseFromJSON(cJSON *boletoJSON);

cJSON *boleto_convertToJSON(boleto_t *boleto);

#endif /* _boleto_H_ */

