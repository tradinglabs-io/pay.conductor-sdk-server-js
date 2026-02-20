#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_pic_pay_info.h"



static order_pic_pay_info_t *order_pic_pay_info_create_internal(
    char *copy_and_paste_code,
    char *qr_code_url
    ) {
    order_pic_pay_info_t *order_pic_pay_info_local_var = malloc(sizeof(order_pic_pay_info_t));
    if (!order_pic_pay_info_local_var) {
        return NULL;
    }
    order_pic_pay_info_local_var->copy_and_paste_code = copy_and_paste_code;
    order_pic_pay_info_local_var->qr_code_url = qr_code_url;

    order_pic_pay_info_local_var->_library_owned = 1;
    return order_pic_pay_info_local_var;
}

__attribute__((deprecated)) order_pic_pay_info_t *order_pic_pay_info_create(
    char *copy_and_paste_code,
    char *qr_code_url
    ) {
    return order_pic_pay_info_create_internal (
        copy_and_paste_code,
        qr_code_url
        );
}

void order_pic_pay_info_free(order_pic_pay_info_t *order_pic_pay_info) {
    if(NULL == order_pic_pay_info){
        return ;
    }
    if(order_pic_pay_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_pic_pay_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_pic_pay_info->copy_and_paste_code) {
        free(order_pic_pay_info->copy_and_paste_code);
        order_pic_pay_info->copy_and_paste_code = NULL;
    }
    if (order_pic_pay_info->qr_code_url) {
        free(order_pic_pay_info->qr_code_url);
        order_pic_pay_info->qr_code_url = NULL;
    }
    free(order_pic_pay_info);
}

cJSON *order_pic_pay_info_convertToJSON(order_pic_pay_info_t *order_pic_pay_info) {
    cJSON *item = cJSON_CreateObject();

    // order_pic_pay_info->copy_and_paste_code
    if (!order_pic_pay_info->copy_and_paste_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "copyAndPasteCode", order_pic_pay_info->copy_and_paste_code) == NULL) {
    goto fail; //String
    }


    // order_pic_pay_info->qr_code_url
    if (!order_pic_pay_info->qr_code_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "qrCodeUrl", order_pic_pay_info->qr_code_url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_pic_pay_info_t *order_pic_pay_info_parseFromJSON(cJSON *order_pic_pay_infoJSON){

    order_pic_pay_info_t *order_pic_pay_info_local_var = NULL;

    // order_pic_pay_info->copy_and_paste_code
    cJSON *copy_and_paste_code = cJSON_GetObjectItemCaseSensitive(order_pic_pay_infoJSON, "copyAndPasteCode");
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

    // order_pic_pay_info->qr_code_url
    cJSON *qr_code_url = cJSON_GetObjectItemCaseSensitive(order_pic_pay_infoJSON, "qrCodeUrl");
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


    order_pic_pay_info_local_var = order_pic_pay_info_create_internal (
        strdup(copy_and_paste_code->valuestring),
        strdup(qr_code_url->valuestring)
        );

    return order_pic_pay_info_local_var;
end:
    return NULL;

}
