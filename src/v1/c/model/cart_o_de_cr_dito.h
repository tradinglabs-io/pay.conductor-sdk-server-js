/*
 * cart_o_de_cr_dito.h
 *
 * 
 */

#ifndef _cart_o_de_cr_dito_H_
#define _cart_o_de_cr_dito_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_o_de_cr_dito_t cart_o_de_cr_dito_t;

#include "cart_o_de_cr_dito_card.h"
#include "cart_o_de_cr_dito_installments.h"



typedef struct cart_o_de_cr_dito_t {
    char *payment_method; // string
    struct cart_o_de_cr_dito_card_t *card; //model
    struct cart_o_de_cr_dito_installments_t *installments; //model
    char *soft_descriptor; // string

    int _library_owned; // Is the library responsible for freeing this object?
} cart_o_de_cr_dito_t;

__attribute__((deprecated)) cart_o_de_cr_dito_t *cart_o_de_cr_dito_create(
    char *payment_method,
    cart_o_de_cr_dito_card_t *card,
    cart_o_de_cr_dito_installments_t *installments,
    char *soft_descriptor
);

void cart_o_de_cr_dito_free(cart_o_de_cr_dito_t *cart_o_de_cr_dito);

cart_o_de_cr_dito_t *cart_o_de_cr_dito_parseFromJSON(cJSON *cart_o_de_cr_ditoJSON);

cJSON *cart_o_de_cr_dito_convertToJSON(cart_o_de_cr_dito_t *cart_o_de_cr_dito);

#endif /* _cart_o_de_cr_dito_H_ */

