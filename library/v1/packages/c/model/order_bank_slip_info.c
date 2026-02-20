#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_bank_slip_info.h"



static order_bank_slip_info_t *order_bank_slip_info_create_internal(
    char *bar_code,
    char *digitable_line,
    char *pdf_url
    ) {
    order_bank_slip_info_t *order_bank_slip_info_local_var = malloc(sizeof(order_bank_slip_info_t));
    if (!order_bank_slip_info_local_var) {
        return NULL;
    }
    order_bank_slip_info_local_var->bar_code = bar_code;
    order_bank_slip_info_local_var->digitable_line = digitable_line;
    order_bank_slip_info_local_var->pdf_url = pdf_url;

    order_bank_slip_info_local_var->_library_owned = 1;
    return order_bank_slip_info_local_var;
}

__attribute__((deprecated)) order_bank_slip_info_t *order_bank_slip_info_create(
    char *bar_code,
    char *digitable_line,
    char *pdf_url
    ) {
    return order_bank_slip_info_create_internal (
        bar_code,
        digitable_line,
        pdf_url
        );
}

void order_bank_slip_info_free(order_bank_slip_info_t *order_bank_slip_info) {
    if(NULL == order_bank_slip_info){
        return ;
    }
    if(order_bank_slip_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_bank_slip_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_bank_slip_info->bar_code) {
        free(order_bank_slip_info->bar_code);
        order_bank_slip_info->bar_code = NULL;
    }
    if (order_bank_slip_info->digitable_line) {
        free(order_bank_slip_info->digitable_line);
        order_bank_slip_info->digitable_line = NULL;
    }
    if (order_bank_slip_info->pdf_url) {
        free(order_bank_slip_info->pdf_url);
        order_bank_slip_info->pdf_url = NULL;
    }
    free(order_bank_slip_info);
}

cJSON *order_bank_slip_info_convertToJSON(order_bank_slip_info_t *order_bank_slip_info) {
    cJSON *item = cJSON_CreateObject();

    // order_bank_slip_info->bar_code
    if (!order_bank_slip_info->bar_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "barCode", order_bank_slip_info->bar_code) == NULL) {
    goto fail; //String
    }


    // order_bank_slip_info->digitable_line
    if (!order_bank_slip_info->digitable_line) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "digitableLine", order_bank_slip_info->digitable_line) == NULL) {
    goto fail; //String
    }


    // order_bank_slip_info->pdf_url
    if(order_bank_slip_info->pdf_url) {
    if(cJSON_AddStringToObject(item, "pdfUrl", order_bank_slip_info->pdf_url) == NULL) {
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

order_bank_slip_info_t *order_bank_slip_info_parseFromJSON(cJSON *order_bank_slip_infoJSON){

    order_bank_slip_info_t *order_bank_slip_info_local_var = NULL;

    // order_bank_slip_info->bar_code
    cJSON *bar_code = cJSON_GetObjectItemCaseSensitive(order_bank_slip_infoJSON, "barCode");
    if (cJSON_IsNull(bar_code)) {
        bar_code = NULL;
    }
    if (!bar_code) {
        goto end;
    }

    
    if(!cJSON_IsString(bar_code))
    {
    goto end; //String
    }

    // order_bank_slip_info->digitable_line
    cJSON *digitable_line = cJSON_GetObjectItemCaseSensitive(order_bank_slip_infoJSON, "digitableLine");
    if (cJSON_IsNull(digitable_line)) {
        digitable_line = NULL;
    }
    if (!digitable_line) {
        goto end;
    }

    
    if(!cJSON_IsString(digitable_line))
    {
    goto end; //String
    }

    // order_bank_slip_info->pdf_url
    cJSON *pdf_url = cJSON_GetObjectItemCaseSensitive(order_bank_slip_infoJSON, "pdfUrl");
    if (cJSON_IsNull(pdf_url)) {
        pdf_url = NULL;
    }
    if (pdf_url) { 
    if(!cJSON_IsString(pdf_url) && !cJSON_IsNull(pdf_url))
    {
    goto end; //String
    }
    }


    order_bank_slip_info_local_var = order_bank_slip_info_create_internal (
        strdup(bar_code->valuestring),
        strdup(digitable_line->valuestring),
        pdf_url && !cJSON_IsNull(pdf_url) ? strdup(pdf_url->valuestring) : NULL
        );

    return order_bank_slip_info_local_var;
end:
    return NULL;

}
