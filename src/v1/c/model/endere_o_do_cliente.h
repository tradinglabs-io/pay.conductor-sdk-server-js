/*
 * endere_o_do_cliente.h
 *
 * Schema para criação de um novo endereço
 */

#ifndef _endere_o_do_cliente_H_
#define _endere_o_do_cliente_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct endere_o_do_cliente_t endere_o_do_cliente_t;




typedef struct endere_o_do_cliente_t {
    char *city; // string
    char *country; // string
    char *neighborhood; // string
    char *number; // string
    char *state; // string
    char *street; // string
    char *zip_code; // string

    int _library_owned; // Is the library responsible for freeing this object?
} endere_o_do_cliente_t;

__attribute__((deprecated)) endere_o_do_cliente_t *endere_o_do_cliente_create(
    char *city,
    char *country,
    char *neighborhood,
    char *number,
    char *state,
    char *street,
    char *zip_code
);

void endere_o_do_cliente_free(endere_o_do_cliente_t *endere_o_do_cliente);

endere_o_do_cliente_t *endere_o_do_cliente_parseFromJSON(cJSON *endere_o_do_clienteJSON);

cJSON *endere_o_do_cliente_convertToJSON(endere_o_do_cliente_t *endere_o_do_cliente);

#endif /* _endere_o_do_cliente_H_ */

