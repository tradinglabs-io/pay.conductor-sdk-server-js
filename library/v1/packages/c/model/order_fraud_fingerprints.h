/*
 * order_fraud_fingerprints.h
 *
 * Fraud analysis fingerprint data
 */

#ifndef _order_fraud_fingerprints_H_
#define _order_fraud_fingerprints_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_fraud_fingerprints_t order_fraud_fingerprints_t;




typedef struct order_fraud_fingerprints_t {
    char *threat_metrix_fingerprint_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_fraud_fingerprints_t;

__attribute__((deprecated)) order_fraud_fingerprints_t *order_fraud_fingerprints_create(
    char *threat_metrix_fingerprint_id
);

void order_fraud_fingerprints_free(order_fraud_fingerprints_t *order_fraud_fingerprints);

order_fraud_fingerprints_t *order_fraud_fingerprints_parseFromJSON(cJSON *order_fraud_fingerprintsJSON);

cJSON *order_fraud_fingerprints_convertToJSON(order_fraud_fingerprints_t *order_fraud_fingerprints);

#endif /* _order_fraud_fingerprints_H_ */

