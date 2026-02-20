#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_create_request.h"



static order_create_request_t *order_create_request_create_internal(
    double charge_amount,
    char *client_ip,
    customer_create_request_t *customer,
    double discount_amount,
    char *external_id,
    order_fraud_fingerprints_t *fingerprints,
    list_t *items,
    merchant_input_t *merchant,
    order_payment_request_t *payment,
    double split_amount_total,
    order_create_request_session_t *session,
    double shipping_fee,
    double tax_fee,
    object_t *metadata
    ) {
    order_create_request_t *order_create_request_local_var = malloc(sizeof(order_create_request_t));
    if (!order_create_request_local_var) {
        return NULL;
    }
    order_create_request_local_var->charge_amount = charge_amount;
    order_create_request_local_var->client_ip = client_ip;
    order_create_request_local_var->customer = customer;
    order_create_request_local_var->discount_amount = discount_amount;
    order_create_request_local_var->external_id = external_id;
    order_create_request_local_var->fingerprints = fingerprints;
    order_create_request_local_var->items = items;
    order_create_request_local_var->merchant = merchant;
    order_create_request_local_var->payment = payment;
    order_create_request_local_var->split_amount_total = split_amount_total;
    order_create_request_local_var->session = session;
    order_create_request_local_var->shipping_fee = shipping_fee;
    order_create_request_local_var->tax_fee = tax_fee;
    order_create_request_local_var->metadata = metadata;

    order_create_request_local_var->_library_owned = 1;
    return order_create_request_local_var;
}

__attribute__((deprecated)) order_create_request_t *order_create_request_create(
    double charge_amount,
    char *client_ip,
    customer_create_request_t *customer,
    double discount_amount,
    char *external_id,
    order_fraud_fingerprints_t *fingerprints,
    list_t *items,
    merchant_input_t *merchant,
    order_payment_request_t *payment,
    double split_amount_total,
    order_create_request_session_t *session,
    double shipping_fee,
    double tax_fee,
    object_t *metadata
    ) {
    return order_create_request_create_internal (
        charge_amount,
        client_ip,
        customer,
        discount_amount,
        external_id,
        fingerprints,
        items,
        merchant,
        payment,
        split_amount_total,
        session,
        shipping_fee,
        tax_fee,
        metadata
        );
}

void order_create_request_free(order_create_request_t *order_create_request) {
    if(NULL == order_create_request){
        return ;
    }
    if(order_create_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_create_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_create_request->client_ip) {
        free(order_create_request->client_ip);
        order_create_request->client_ip = NULL;
    }
    if (order_create_request->customer) {
        customer_create_request_free(order_create_request->customer);
        order_create_request->customer = NULL;
    }
    if (order_create_request->external_id) {
        free(order_create_request->external_id);
        order_create_request->external_id = NULL;
    }
    if (order_create_request->fingerprints) {
        order_fraud_fingerprints_free(order_create_request->fingerprints);
        order_create_request->fingerprints = NULL;
    }
    if (order_create_request->items) {
        list_ForEach(listEntry, order_create_request->items) {
            order_item_data_free(listEntry->data);
        }
        list_freeList(order_create_request->items);
        order_create_request->items = NULL;
    }
    if (order_create_request->merchant) {
        merchant_input_free(order_create_request->merchant);
        order_create_request->merchant = NULL;
    }
    if (order_create_request->payment) {
        order_payment_request_free(order_create_request->payment);
        order_create_request->payment = NULL;
    }
    if (order_create_request->session) {
        order_create_request_session_free(order_create_request->session);
        order_create_request->session = NULL;
    }
    if (order_create_request->metadata) {
        object_free(order_create_request->metadata);
        order_create_request->metadata = NULL;
    }
    free(order_create_request);
}

cJSON *order_create_request_convertToJSON(order_create_request_t *order_create_request) {
    cJSON *item = cJSON_CreateObject();

    // order_create_request->charge_amount
    if (!order_create_request->charge_amount) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "chargeAmount", order_create_request->charge_amount) == NULL) {
    goto fail; //Numeric
    }


    // order_create_request->client_ip
    if (!order_create_request->client_ip) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "clientIp", order_create_request->client_ip) == NULL) {
    goto fail; //String
    }


    // order_create_request->customer
    if (!order_create_request->customer) {
        goto fail;
    }
    cJSON *customer_local_JSON = customer_create_request_convertToJSON(order_create_request->customer);
    if(customer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "customer", customer_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // order_create_request->discount_amount
    if (!order_create_request->discount_amount) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "discountAmount", order_create_request->discount_amount) == NULL) {
    goto fail; //Numeric
    }


    // order_create_request->external_id
    if (!order_create_request->external_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "externalId", order_create_request->external_id) == NULL) {
    goto fail; //String
    }


    // order_create_request->fingerprints
    if(order_create_request->fingerprints) {
    cJSON *fingerprints_local_JSON = order_fraud_fingerprints_convertToJSON(order_create_request->fingerprints);
    if(fingerprints_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "fingerprints", fingerprints_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_create_request->items
    if(order_create_request->items) {
    cJSON *items = cJSON_AddArrayToObject(item, "items");
    if(items == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *itemsListEntry;
    if (order_create_request->items) {
    list_ForEach(itemsListEntry, order_create_request->items) {
    cJSON *itemLocal = order_item_data_convertToJSON(itemsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(items, itemLocal);
    }
    }
    }


    // order_create_request->merchant
    if(order_create_request->merchant) {
    cJSON *merchant_local_JSON = merchant_input_convertToJSON(order_create_request->merchant);
    if(merchant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "merchant", merchant_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_create_request->payment
    if (!order_create_request->payment) {
        goto fail;
    }
    cJSON *payment_local_JSON = order_payment_request_convertToJSON(order_create_request->payment);
    if(payment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "payment", payment_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // order_create_request->split_amount_total
    if(order_create_request->split_amount_total) {
    if(cJSON_AddNumberToObject(item, "splitAmountTotal", order_create_request->split_amount_total) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_create_request->session
    if(order_create_request->session) {
    cJSON *session_local_JSON = order_create_request_session_convertToJSON(order_create_request->session);
    if(session_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "session", session_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_create_request->shipping_fee
    if (!order_create_request->shipping_fee) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "shippingFee", order_create_request->shipping_fee) == NULL) {
    goto fail; //Numeric
    }


    // order_create_request->tax_fee
    if (!order_create_request->tax_fee) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "taxFee", order_create_request->tax_fee) == NULL) {
    goto fail; //Numeric
    }


    // order_create_request->metadata
    if(order_create_request->metadata) {
    cJSON *metadata_object = object_convertToJSON(order_create_request->metadata);
    if(metadata_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_object);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

order_create_request_t *order_create_request_parseFromJSON(cJSON *order_create_requestJSON){

    order_create_request_t *order_create_request_local_var = NULL;

    // define the local variable for order_create_request->customer
    customer_create_request_t *customer_local_nonprim = NULL;

    // define the local variable for order_create_request->fingerprints
    order_fraud_fingerprints_t *fingerprints_local_nonprim = NULL;

    // define the local list for order_create_request->items
    list_t *itemsList = NULL;

    // define the local variable for order_create_request->merchant
    merchant_input_t *merchant_local_nonprim = NULL;

    // define the local variable for order_create_request->payment
    order_payment_request_t *payment_local_nonprim = NULL;

    // define the local variable for order_create_request->session
    order_create_request_session_t *session_local_nonprim = NULL;

    // order_create_request->charge_amount
    cJSON *charge_amount = cJSON_GetObjectItemCaseSensitive(order_create_requestJSON, "chargeAmount");
    if (cJSON_IsNull(charge_amount)) {
        charge_amount = NULL;
    }
    if (!charge_amount) {
        goto end;
    }

    
    if(!cJSON_IsNumber(charge_amount))
    {
    goto end; //Numeric
    }

    // order_create_request->client_ip
    cJSON *client_ip = cJSON_GetObjectItemCaseSensitive(order_create_requestJSON, "clientIp");
    if (cJSON_IsNull(client_ip)) {
        client_ip = NULL;
    }
    if (!client_ip) {
        goto end;
    }

    
    if(!cJSON_IsString(client_ip))
    {
    goto end; //String
    }

    // order_create_request->customer
    cJSON *customer = cJSON_GetObjectItemCaseSensitive(order_create_requestJSON, "customer");
    if (cJSON_IsNull(customer)) {
        customer = NULL;
    }
    if (!customer) {
        goto end;
    }

    
    customer_local_nonprim = customer_create_request_parseFromJSON(customer); //nonprimitive

    // order_create_request->discount_amount
    cJSON *discount_amount = cJSON_GetObjectItemCaseSensitive(order_create_requestJSON, "discountAmount");
    if (cJSON_IsNull(discount_amount)) {
        discount_amount = NULL;
    }
    if (!discount_amount) {
        goto end;
    }

    
    if(!cJSON_IsNumber(discount_amount))
    {
    goto end; //Numeric
    }

    // order_create_request->external_id
    cJSON *external_id = cJSON_GetObjectItemCaseSensitive(order_create_requestJSON, "externalId");
    if (cJSON_IsNull(external_id)) {
        external_id = NULL;
    }
    if (!external_id) {
        goto end;
    }

    
    if(!cJSON_IsString(external_id))
    {
    goto end; //String
    }

    // order_create_request->fingerprints
    cJSON *fingerprints = cJSON_GetObjectItemCaseSensitive(order_create_requestJSON, "fingerprints");
    if (cJSON_IsNull(fingerprints)) {
        fingerprints = NULL;
    }
    if (fingerprints) { 
    fingerprints_local_nonprim = order_fraud_fingerprints_parseFromJSON(fingerprints); //nonprimitive
    }

    // order_create_request->items
    cJSON *items = cJSON_GetObjectItemCaseSensitive(order_create_requestJSON, "items");
    if (cJSON_IsNull(items)) {
        items = NULL;
    }
    if (items) { 
    cJSON *items_local_nonprimitive = NULL;
    if(!cJSON_IsArray(items)){
        goto end; //nonprimitive container
    }

    itemsList = list_createList();

    cJSON_ArrayForEach(items_local_nonprimitive,items )
    {
        if(!cJSON_IsObject(items_local_nonprimitive)){
            goto end;
        }
        order_item_data_t *itemsItem = order_item_data_parseFromJSON(items_local_nonprimitive);

        list_addElement(itemsList, itemsItem);
    }
    }

    // order_create_request->merchant
    cJSON *merchant = cJSON_GetObjectItemCaseSensitive(order_create_requestJSON, "merchant");
    if (cJSON_IsNull(merchant)) {
        merchant = NULL;
    }
    if (merchant) { 
    merchant_local_nonprim = merchant_input_parseFromJSON(merchant); //nonprimitive
    }

    // order_create_request->payment
    cJSON *payment = cJSON_GetObjectItemCaseSensitive(order_create_requestJSON, "payment");
    if (cJSON_IsNull(payment)) {
        payment = NULL;
    }
    if (!payment) {
        goto end;
    }

    
    payment_local_nonprim = order_payment_request_parseFromJSON(payment); //nonprimitive

    // order_create_request->split_amount_total
    cJSON *split_amount_total = cJSON_GetObjectItemCaseSensitive(order_create_requestJSON, "splitAmountTotal");
    if (cJSON_IsNull(split_amount_total)) {
        split_amount_total = NULL;
    }
    if (split_amount_total) { 
    if(!cJSON_IsNumber(split_amount_total))
    {
    goto end; //Numeric
    }
    }

    // order_create_request->session
    cJSON *session = cJSON_GetObjectItemCaseSensitive(order_create_requestJSON, "session");
    if (cJSON_IsNull(session)) {
        session = NULL;
    }
    if (session) { 
    session_local_nonprim = order_create_request_session_parseFromJSON(session); //nonprimitive
    }

    // order_create_request->shipping_fee
    cJSON *shipping_fee = cJSON_GetObjectItemCaseSensitive(order_create_requestJSON, "shippingFee");
    if (cJSON_IsNull(shipping_fee)) {
        shipping_fee = NULL;
    }
    if (!shipping_fee) {
        goto end;
    }

    
    if(!cJSON_IsNumber(shipping_fee))
    {
    goto end; //Numeric
    }

    // order_create_request->tax_fee
    cJSON *tax_fee = cJSON_GetObjectItemCaseSensitive(order_create_requestJSON, "taxFee");
    if (cJSON_IsNull(tax_fee)) {
        tax_fee = NULL;
    }
    if (!tax_fee) {
        goto end;
    }

    
    if(!cJSON_IsNumber(tax_fee))
    {
    goto end; //Numeric
    }

    // order_create_request->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(order_create_requestJSON, "metadata");
    if (cJSON_IsNull(metadata)) {
        metadata = NULL;
    }
    object_t *metadata_local_object = NULL;
    if (metadata) { 
    metadata_local_object = object_parseFromJSON(metadata); //object
    }


    order_create_request_local_var = order_create_request_create_internal (
        charge_amount->valuedouble,
        strdup(client_ip->valuestring),
        customer_local_nonprim,
        discount_amount->valuedouble,
        strdup(external_id->valuestring),
        fingerprints ? fingerprints_local_nonprim : NULL,
        items ? itemsList : NULL,
        merchant ? merchant_local_nonprim : NULL,
        payment_local_nonprim,
        split_amount_total ? split_amount_total->valuedouble : 0,
        session ? session_local_nonprim : NULL,
        shipping_fee->valuedouble,
        tax_fee->valuedouble,
        metadata ? metadata_local_object : NULL
        );

    return order_create_request_local_var;
end:
    if (customer_local_nonprim) {
        customer_create_request_free(customer_local_nonprim);
        customer_local_nonprim = NULL;
    }
    if (fingerprints_local_nonprim) {
        order_fraud_fingerprints_free(fingerprints_local_nonprim);
        fingerprints_local_nonprim = NULL;
    }
    if (itemsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, itemsList) {
            order_item_data_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(itemsList);
        itemsList = NULL;
    }
    if (merchant_local_nonprim) {
        merchant_input_free(merchant_local_nonprim);
        merchant_local_nonprim = NULL;
    }
    if (payment_local_nonprim) {
        order_payment_request_free(payment_local_nonprim);
        payment_local_nonprim = NULL;
    }
    if (session_local_nonprim) {
        order_create_request_session_free(session_local_nonprim);
        session_local_nonprim = NULL;
    }
    return NULL;

}
