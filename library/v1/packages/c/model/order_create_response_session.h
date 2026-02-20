/*
 * order_create_response_session.h
 *
 * 
 */

#ifndef _order_create_response_session_H_
#define _order_create_response_session_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_create_response_session_t order_create_response_session_t;




typedef struct order_create_response_session_t {
    char *session_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_create_response_session_t;

__attribute__((deprecated)) order_create_response_session_t *order_create_response_session_create(
    char *session_id
);

void order_create_response_session_free(order_create_response_session_t *order_create_response_session);

order_create_response_session_t *order_create_response_session_parseFromJSON(cJSON *order_create_response_sessionJSON);

cJSON *order_create_response_session_convertToJSON(order_create_response_session_t *order_create_response_session);

#endif /* _order_create_response_session_H_ */

