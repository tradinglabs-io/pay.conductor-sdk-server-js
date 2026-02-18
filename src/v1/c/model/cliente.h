/*
 * cliente.h
 *
 * Schema para criação de um novo cliente
 */

#ifndef _cliente_H_
#define _cliente_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cliente_t cliente_t;

#include "endere_o_do_cliente.h"

// Enum DOCUMENTTYPE for cliente

typedef enum  { payconductor_api_cliente_DOCUMENTTYPE_NULL = 0, payconductor_api_cliente_DOCUMENTTYPE_Cpf, payconductor_api_cliente_DOCUMENTTYPE_Cnpj } payconductor_api_cliente_DOCUMENTTYPE_e;

char* cliente_document_type_ToString(payconductor_api_cliente_DOCUMENTTYPE_e document_type);

payconductor_api_cliente_DOCUMENTTYPE_e cliente_document_type_FromString(char* document_type);



typedef struct cliente_t {
    struct endere_o_do_cliente_t *address; //model
    char *document_number; // string
    payconductor_api_cliente_DOCUMENTTYPE_e document_type; //enum
    char *email; // string
    char *name; // string
    char *phone_number; // string

    int _library_owned; // Is the library responsible for freeing this object?
} cliente_t;

__attribute__((deprecated)) cliente_t *cliente_create(
    endere_o_do_cliente_t *address,
    char *document_number,
    payconductor_api_cliente_DOCUMENTTYPE_e document_type,
    char *email,
    char *name,
    char *phone_number
);

void cliente_free(cliente_t *cliente);

cliente_t *cliente_parseFromJSON(cJSON *clienteJSON);

cJSON *cliente_convertToJSON(cliente_t *cliente);

#endif /* _cliente_H_ */

