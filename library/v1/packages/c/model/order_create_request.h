/*
 * order_create_request.h
 *
 * Order data for payment processing
 */

#ifndef _order_create_request_H_
#define _order_create_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_create_request_t order_create_request_t;

#include "customer_create_request.h"
#include "merchant_input.h"
#include "object.h"
#include "order_create_request_session.h"
#include "order_fraud_fingerprints.h"
#include "order_item_data.h"
#include "order_payment_request.h"



typedef struct order_create_request_t {
    double charge_amount; //numeric
    char *client_ip; // string
    struct customer_create_request_t *customer; //model
    double discount_amount; //numeric
    char *external_id; // string
    struct order_fraud_fingerprints_t *fingerprints; //model
    list_t *items; //nonprimitive container
    struct merchant_input_t *merchant; //model
    struct order_payment_request_t *payment; //model
    double split_amount_total; //numeric
    struct order_create_request_session_t *session; //model
    double shipping_fee; //numeric
    double tax_fee; //numeric
    object_t *metadata; //object

    int _library_owned; // Is the library responsible for freeing this object?
} order_create_request_t;

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
);

void order_create_request_free(order_create_request_t *order_create_request);

order_create_request_t *order_create_request_parseFromJSON(cJSON *order_create_requestJSON);

cJSON *order_create_request_convertToJSON(order_create_request_t *order_create_request);

#endif /* _order_create_request_H_ */

