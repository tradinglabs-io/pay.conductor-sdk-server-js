/*
 * dados_completos_do_cart_o.h
 *
 * 
 */

#ifndef _dados_completos_do_cart_o_H_
#define _dados_completos_do_cart_o_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dados_completos_do_cart_o_t dados_completos_do_cart_o_t;

#include "dados_completos_do_cart_o_expiration.h"



typedef struct dados_completos_do_cart_o_t {
    char *cvv; // string
    struct dados_completos_do_cart_o_expiration_t *expiration; //model
    char *holder_name; // string
    char *number; // string

    int _library_owned; // Is the library responsible for freeing this object?
} dados_completos_do_cart_o_t;

__attribute__((deprecated)) dados_completos_do_cart_o_t *dados_completos_do_cart_o_create(
    char *cvv,
    dados_completos_do_cart_o_expiration_t *expiration,
    char *holder_name,
    char *number
);

void dados_completos_do_cart_o_free(dados_completos_do_cart_o_t *dados_completos_do_cart_o);

dados_completos_do_cart_o_t *dados_completos_do_cart_o_parseFromJSON(cJSON *dados_completos_do_cart_oJSON);

cJSON *dados_completos_do_cart_o_convertToJSON(dados_completos_do_cart_o_t *dados_completos_do_cart_o);

#endif /* _dados_completos_do_cart_o_H_ */

