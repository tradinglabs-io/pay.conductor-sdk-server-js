#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_create_request_session.h"



static order_create_request_session_t *order_create_request_session_create_internal(
    double expires_in_minutes,
    char *checkout_url,
    char *session_id,
    char *external_session_id
    ) {
    order_create_request_session_t *order_create_request_session_local_var = malloc(sizeof(order_create_request_session_t));
    if (!order_create_request_session_local_var) {
        return NULL;
    }
    order_create_request_session_local_var->expires_in_minutes = expires_in_minutes;
    order_create_request_session_local_var->checkout_url = checkout_url;
    order_create_request_session_local_var->session_id = session_id;
    order_create_request_session_local_var->external_session_id = external_session_id;

    order_create_request_session_local_var->_library_owned = 1;
    return order_create_request_session_local_var;
}

__attribute__((deprecated)) order_create_request_session_t *order_create_request_session_create(
    double expires_in_minutes,
    char *checkout_url,
    char *session_id,
    char *external_session_id
    ) {
    return order_create_request_session_create_internal (
        expires_in_minutes,
        checkout_url,
        session_id,
        external_session_id
        );
}

void order_create_request_session_free(order_create_request_session_t *order_create_request_session) {
    if(NULL == order_create_request_session){
        return ;
    }
    if(order_create_request_session->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_create_request_session_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_create_request_session->checkout_url) {
        free(order_create_request_session->checkout_url);
        order_create_request_session->checkout_url = NULL;
    }
    if (order_create_request_session->session_id) {
        free(order_create_request_session->session_id);
        order_create_request_session->session_id = NULL;
    }
    if (order_create_request_session->external_session_id) {
        free(order_create_request_session->external_session_id);
        order_create_request_session->external_session_id = NULL;
    }
    free(order_create_request_session);
}

cJSON *order_create_request_session_convertToJSON(order_create_request_session_t *order_create_request_session) {
    cJSON *item = cJSON_CreateObject();

    // order_create_request_session->expires_in_minutes
    if(order_create_request_session->expires_in_minutes) {
    if(cJSON_AddNumberToObject(item, "expiresInMinutes", order_create_request_session->expires_in_minutes) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_create_request_session->checkout_url
    if(order_create_request_session->checkout_url) {
    if(cJSON_AddStringToObject(item, "checkoutUrl", order_create_request_session->checkout_url) == NULL) {
    goto fail; //String
    }
    }


    // order_create_request_session->session_id
    if(order_create_request_session->session_id) {
    if(cJSON_AddStringToObject(item, "sessionId", order_create_request_session->session_id) == NULL) {
    goto fail; //String
    }
    }


    // order_create_request_session->external_session_id
    if(order_create_request_session->external_session_id) {
    if(cJSON_AddStringToObject(item, "externalSessionId", order_create_request_session->external_session_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_create_request_session_t *order_create_request_session_parseFromJSON(cJSON *order_create_request_sessionJSON){

    order_create_request_session_t *order_create_request_session_local_var = NULL;

    // order_create_request_session->expires_in_minutes
    cJSON *expires_in_minutes = cJSON_GetObjectItemCaseSensitive(order_create_request_sessionJSON, "expiresInMinutes");
    if (cJSON_IsNull(expires_in_minutes)) {
        expires_in_minutes = NULL;
    }
    if (expires_in_minutes) { 
    if(!cJSON_IsNumber(expires_in_minutes))
    {
    goto end; //Numeric
    }
    }

    // order_create_request_session->checkout_url
    cJSON *checkout_url = cJSON_GetObjectItemCaseSensitive(order_create_request_sessionJSON, "checkoutUrl");
    if (cJSON_IsNull(checkout_url)) {
        checkout_url = NULL;
    }
    if (checkout_url) { 
    if(!cJSON_IsString(checkout_url) && !cJSON_IsNull(checkout_url))
    {
    goto end; //String
    }
    }

    // order_create_request_session->session_id
    cJSON *session_id = cJSON_GetObjectItemCaseSensitive(order_create_request_sessionJSON, "sessionId");
    if (cJSON_IsNull(session_id)) {
        session_id = NULL;
    }
    if (session_id) { 
    if(!cJSON_IsString(session_id) && !cJSON_IsNull(session_id))
    {
    goto end; //String
    }
    }

    // order_create_request_session->external_session_id
    cJSON *external_session_id = cJSON_GetObjectItemCaseSensitive(order_create_request_sessionJSON, "externalSessionId");
    if (cJSON_IsNull(external_session_id)) {
        external_session_id = NULL;
    }
    if (external_session_id) { 
    if(!cJSON_IsString(external_session_id) && !cJSON_IsNull(external_session_id))
    {
    goto end; //String
    }
    }


    order_create_request_session_local_var = order_create_request_session_create_internal (
        expires_in_minutes ? expires_in_minutes->valuedouble : 0,
        checkout_url && !cJSON_IsNull(checkout_url) ? strdup(checkout_url->valuestring) : NULL,
        session_id && !cJSON_IsNull(session_id) ? strdup(session_id->valuestring) : NULL,
        external_session_id && !cJSON_IsNull(external_session_id) ? strdup(external_session_id->valuestring) : NULL
        );

    return order_create_request_session_local_var;
end:
    return NULL;

}
