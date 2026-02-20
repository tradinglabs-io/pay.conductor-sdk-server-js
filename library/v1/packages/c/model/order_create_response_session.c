#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_create_response_session.h"



static order_create_response_session_t *order_create_response_session_create_internal(
    char *session_id
    ) {
    order_create_response_session_t *order_create_response_session_local_var = malloc(sizeof(order_create_response_session_t));
    if (!order_create_response_session_local_var) {
        return NULL;
    }
    order_create_response_session_local_var->session_id = session_id;

    order_create_response_session_local_var->_library_owned = 1;
    return order_create_response_session_local_var;
}

__attribute__((deprecated)) order_create_response_session_t *order_create_response_session_create(
    char *session_id
    ) {
    return order_create_response_session_create_internal (
        session_id
        );
}

void order_create_response_session_free(order_create_response_session_t *order_create_response_session) {
    if(NULL == order_create_response_session){
        return ;
    }
    if(order_create_response_session->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_create_response_session_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_create_response_session->session_id) {
        free(order_create_response_session->session_id);
        order_create_response_session->session_id = NULL;
    }
    free(order_create_response_session);
}

cJSON *order_create_response_session_convertToJSON(order_create_response_session_t *order_create_response_session) {
    cJSON *item = cJSON_CreateObject();

    // order_create_response_session->session_id
    if (!order_create_response_session->session_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sessionId", order_create_response_session->session_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_create_response_session_t *order_create_response_session_parseFromJSON(cJSON *order_create_response_sessionJSON){

    order_create_response_session_t *order_create_response_session_local_var = NULL;

    // order_create_response_session->session_id
    cJSON *session_id = cJSON_GetObjectItemCaseSensitive(order_create_response_sessionJSON, "sessionId");
    if (cJSON_IsNull(session_id)) {
        session_id = NULL;
    }
    if (!session_id) {
        goto end;
    }

    
    if(!cJSON_IsString(session_id))
    {
    goto end; //String
    }


    order_create_response_session_local_var = order_create_response_session_create_internal (
        strdup(session_id->valuestring)
        );

    return order_create_response_session_local_var;
end:
    return NULL;

}
