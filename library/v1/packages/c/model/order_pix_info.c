#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_pix_info.h"



static order_pix_info_t *order_pix_info_create_internal(
    char *copy_and_paste_code,
    char *qr_code_url,
    char *end_to_end_id
    ) {
    order_pix_info_t *order_pix_info_local_var = malloc(sizeof(order_pix_info_t));
    if (!order_pix_info_local_var) {
        return NULL;
    }
    order_pix_info_local_var->copy_and_paste_code = copy_and_paste_code;
    order_pix_info_local_var->qr_code_url = qr_code_url;
    order_pix_info_local_var->end_to_end_id = end_to_end_id;

    order_pix_info_local_var->_library_owned = 1;
    return order_pix_info_local_var;
}

__attribute__((deprecated)) order_pix_info_t *order_pix_info_create(
    char *copy_and_paste_code,
    char *qr_code_url,
    char *end_to_end_id
    ) {
    return order_pix_info_create_internal (
        copy_and_paste_code,
        qr_code_url,
        end_to_end_id
        );
}

void order_pix_info_free(order_pix_info_t *order_pix_info) {
    if(NULL == order_pix_info){
        return ;
    }
    if(order_pix_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_pix_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_pix_info->copy_and_paste_code) {
        free(order_pix_info->copy_and_paste_code);
        order_pix_info->copy_and_paste_code = NULL;
    }
    if (order_pix_info->qr_code_url) {
        free(order_pix_info->qr_code_url);
        order_pix_info->qr_code_url = NULL;
    }
    if (order_pix_info->end_to_end_id) {
        free(order_pix_info->end_to_end_id);
        order_pix_info->end_to_end_id = NULL;
    }
    free(order_pix_info);
}

cJSON *order_pix_info_convertToJSON(order_pix_info_t *order_pix_info) {
    cJSON *item = cJSON_CreateObject();

    // order_pix_info->copy_and_paste_code
    if (!order_pix_info->copy_and_paste_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "copyAndPasteCode", order_pix_info->copy_and_paste_code) == NULL) {
    goto fail; //String
    }


    // order_pix_info->qr_code_url
    if (!order_pix_info->qr_code_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "qrCodeUrl", order_pix_info->qr_code_url) == NULL) {
    goto fail; //String
    }


    // order_pix_info->end_to_end_id
    if (!order_pix_info->end_to_end_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "endToEndId", order_pix_info->end_to_end_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_pix_info_t *order_pix_info_parseFromJSON(cJSON *order_pix_infoJSON){

    order_pix_info_t *order_pix_info_local_var = NULL;

    // order_pix_info->copy_and_paste_code
    cJSON *copy_and_paste_code = cJSON_GetObjectItemCaseSensitive(order_pix_infoJSON, "copyAndPasteCode");
    if (cJSON_IsNull(copy_and_paste_code)) {
        copy_and_paste_code = NULL;
    }
    if (!copy_and_paste_code) {
        goto end;
    }

    
    if(!cJSON_IsString(copy_and_paste_code))
    {
    goto end; //String
    }

    // order_pix_info->qr_code_url
    cJSON *qr_code_url = cJSON_GetObjectItemCaseSensitive(order_pix_infoJSON, "qrCodeUrl");
    if (cJSON_IsNull(qr_code_url)) {
        qr_code_url = NULL;
    }
    if (!qr_code_url) {
        goto end;
    }

    
    if(!cJSON_IsString(qr_code_url))
    {
    goto end; //String
    }

    // order_pix_info->end_to_end_id
    cJSON *end_to_end_id = cJSON_GetObjectItemCaseSensitive(order_pix_infoJSON, "endToEndId");
    if (cJSON_IsNull(end_to_end_id)) {
        end_to_end_id = NULL;
    }
    if (!end_to_end_id) {
        goto end;
    }

    
    if(!cJSON_IsString(end_to_end_id))
    {
    goto end; //String
    }


    order_pix_info_local_var = order_pix_info_create_internal (
        strdup(copy_and_paste_code->valuestring),
        strdup(qr_code_url->valuestring),
        strdup(end_to_end_id->valuestring)
        );

    return order_pix_info_local_var;
end:
    return NULL;

}
