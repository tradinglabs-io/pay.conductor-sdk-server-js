#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_fraud_fingerprints.h"



static order_fraud_fingerprints_t *order_fraud_fingerprints_create_internal(
    char *threat_metrix_fingerprint_id
    ) {
    order_fraud_fingerprints_t *order_fraud_fingerprints_local_var = malloc(sizeof(order_fraud_fingerprints_t));
    if (!order_fraud_fingerprints_local_var) {
        return NULL;
    }
    order_fraud_fingerprints_local_var->threat_metrix_fingerprint_id = threat_metrix_fingerprint_id;

    order_fraud_fingerprints_local_var->_library_owned = 1;
    return order_fraud_fingerprints_local_var;
}

__attribute__((deprecated)) order_fraud_fingerprints_t *order_fraud_fingerprints_create(
    char *threat_metrix_fingerprint_id
    ) {
    return order_fraud_fingerprints_create_internal (
        threat_metrix_fingerprint_id
        );
}

void order_fraud_fingerprints_free(order_fraud_fingerprints_t *order_fraud_fingerprints) {
    if(NULL == order_fraud_fingerprints){
        return ;
    }
    if(order_fraud_fingerprints->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "order_fraud_fingerprints_free");
        return ;
    }
    listEntry_t *listEntry;
    if (order_fraud_fingerprints->threat_metrix_fingerprint_id) {
        free(order_fraud_fingerprints->threat_metrix_fingerprint_id);
        order_fraud_fingerprints->threat_metrix_fingerprint_id = NULL;
    }
    free(order_fraud_fingerprints);
}

cJSON *order_fraud_fingerprints_convertToJSON(order_fraud_fingerprints_t *order_fraud_fingerprints) {
    cJSON *item = cJSON_CreateObject();

    // order_fraud_fingerprints->threat_metrix_fingerprint_id
    if(order_fraud_fingerprints->threat_metrix_fingerprint_id) {
    if(cJSON_AddStringToObject(item, "threatMetrixFingerprintId", order_fraud_fingerprints->threat_metrix_fingerprint_id) == NULL) {
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

order_fraud_fingerprints_t *order_fraud_fingerprints_parseFromJSON(cJSON *order_fraud_fingerprintsJSON){

    order_fraud_fingerprints_t *order_fraud_fingerprints_local_var = NULL;

    // order_fraud_fingerprints->threat_metrix_fingerprint_id
    cJSON *threat_metrix_fingerprint_id = cJSON_GetObjectItemCaseSensitive(order_fraud_fingerprintsJSON, "threatMetrixFingerprintId");
    if (cJSON_IsNull(threat_metrix_fingerprint_id)) {
        threat_metrix_fingerprint_id = NULL;
    }
    if (threat_metrix_fingerprint_id) { 
    if(!cJSON_IsString(threat_metrix_fingerprint_id) && !cJSON_IsNull(threat_metrix_fingerprint_id))
    {
    goto end; //String
    }
    }


    order_fraud_fingerprints_local_var = order_fraud_fingerprints_create_internal (
        threat_metrix_fingerprint_id && !cJSON_IsNull(threat_metrix_fingerprint_id) ? strdup(threat_metrix_fingerprint_id->valuestring) : NULL
        );

    return order_fraud_fingerprints_local_var;
end:
    return NULL;

}
