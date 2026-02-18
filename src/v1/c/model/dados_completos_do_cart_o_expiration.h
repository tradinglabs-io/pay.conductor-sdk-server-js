/*
 * dados_completos_do_cart_o_expiration.h
 *
 * 
 */

#ifndef _dados_completos_do_cart_o_expiration_H_
#define _dados_completos_do_cart_o_expiration_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dados_completos_do_cart_o_expiration_t dados_completos_do_cart_o_expiration_t;




typedef struct dados_completos_do_cart_o_expiration_t {
    double month; //numeric
    double year; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} dados_completos_do_cart_o_expiration_t;

__attribute__((deprecated)) dados_completos_do_cart_o_expiration_t *dados_completos_do_cart_o_expiration_create(
    double month,
    double year
);

void dados_completos_do_cart_o_expiration_free(dados_completos_do_cart_o_expiration_t *dados_completos_do_cart_o_expiration);

dados_completos_do_cart_o_expiration_t *dados_completos_do_cart_o_expiration_parseFromJSON(cJSON *dados_completos_do_cart_o_expirationJSON);

cJSON *dados_completos_do_cart_o_expiration_convertToJSON(dados_completos_do_cart_o_expiration_t *dados_completos_do_cart_o_expiration);

#endif /* _dados_completos_do_cart_o_expiration_H_ */

