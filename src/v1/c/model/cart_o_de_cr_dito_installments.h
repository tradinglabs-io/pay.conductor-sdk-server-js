/*
 * cart_o_de_cr_dito_installments.h
 *
 * Número de parcelas
 */

#ifndef _cart_o_de_cr_dito_installments_H_
#define _cart_o_de_cr_dito_installments_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_o_de_cr_dito_installments_t cart_o_de_cr_dito_installments_t;




typedef struct cart_o_de_cr_dito_installments_t {

    int _library_owned; // Is the library responsible for freeing this object?
} cart_o_de_cr_dito_installments_t;

__attribute__((deprecated)) cart_o_de_cr_dito_installments_t *cart_o_de_cr_dito_installments_create(
);

void cart_o_de_cr_dito_installments_free(cart_o_de_cr_dito_installments_t *cart_o_de_cr_dito_installments);

cart_o_de_cr_dito_installments_t *cart_o_de_cr_dito_installments_parseFromJSON(cJSON *cart_o_de_cr_dito_installmentsJSON);

cJSON *cart_o_de_cr_dito_installments_convertToJSON(cart_o_de_cr_dito_installments_t *cart_o_de_cr_dito_installments);

#endif /* _cart_o_de_cr_dito_installments_H_ */

