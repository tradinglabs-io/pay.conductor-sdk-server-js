/*
 * cart_o_de_cr_dito_card.h
 *
 * 
 */

#ifndef _cart_o_de_cr_dito_card_H_
#define _cart_o_de_cr_dito_card_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_o_de_cr_dito_card_t cart_o_de_cr_dito_card_t;

#include "cart_o_tokenizado.h"
#include "dados_completos_do_cart_o.h"
#include "dados_completos_do_cart_o_expiration.h"



typedef struct cart_o_de_cr_dito_card_t {
    char *first_six_card_number; // string
    char *token; // string
    char *cvv; // string
    struct dados_completos_do_cart_o_expiration_t *expiration; //model
    char *holder_name; // string
    char *number; // string

    int _library_owned; // Is the library responsible for freeing this object?
} cart_o_de_cr_dito_card_t;

__attribute__((deprecated)) cart_o_de_cr_dito_card_t *cart_o_de_cr_dito_card_create(
    char *first_six_card_number,
    char *token,
    char *cvv,
    dados_completos_do_cart_o_expiration_t *expiration,
    char *holder_name,
    char *number
);

void cart_o_de_cr_dito_card_free(cart_o_de_cr_dito_card_t *cart_o_de_cr_dito_card);

cart_o_de_cr_dito_card_t *cart_o_de_cr_dito_card_parseFromJSON(cJSON *cart_o_de_cr_dito_cardJSON);

cJSON *cart_o_de_cr_dito_card_convertToJSON(cart_o_de_cr_dito_card_t *cart_o_de_cr_dito_card);

#endif /* _cart_o_de_cr_dito_card_H_ */

