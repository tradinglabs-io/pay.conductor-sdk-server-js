/*
 * cart_o_tokenizado.h
 *
 * 
 */

#ifndef _cart_o_tokenizado_H_
#define _cart_o_tokenizado_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cart_o_tokenizado_t cart_o_tokenizado_t;




typedef struct cart_o_tokenizado_t {
    char *first_six_card_number; // string
    char *token; // string

    int _library_owned; // Is the library responsible for freeing this object?
} cart_o_tokenizado_t;

__attribute__((deprecated)) cart_o_tokenizado_t *cart_o_tokenizado_create(
    char *first_six_card_number,
    char *token
);

void cart_o_tokenizado_free(cart_o_tokenizado_t *cart_o_tokenizado);

cart_o_tokenizado_t *cart_o_tokenizado_parseFromJSON(cJSON *cart_o_tokenizadoJSON);

cJSON *cart_o_tokenizado_convertToJSON(cart_o_tokenizado_t *cart_o_tokenizado);

#endif /* _cart_o_tokenizado_H_ */

