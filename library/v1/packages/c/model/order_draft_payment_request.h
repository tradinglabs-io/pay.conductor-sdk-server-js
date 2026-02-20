/*
 * order_draft_payment_request.h
 *
 * Used to create an order without generating a real payment. Use to create orders that will be paid later
 */

#ifndef _order_draft_payment_request_H_
#define _order_draft_payment_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_draft_payment_request_t order_draft_payment_request_t;

#include "available_payment_methods.h"

// Enum  for order_draft_payment_request

typedef enum  { payconductor_api_order_draft_payment_request__NULL = 0, payconductor_api_order_draft_payment_request__Pix, payconductor_api_order_draft_payment_request__CreditCard, payconductor_api_order_draft_payment_request__DebitCard, payconductor_api_order_draft_payment_request__BankSlip, payconductor_api_order_draft_payment_request__Crypto, payconductor_api_order_draft_payment_request__ApplePay, payconductor_api_order_draft_payment_request__NuPay, payconductor_api_order_draft_payment_request__PicPay, payconductor_api_order_draft_payment_request__AmazonPay, payconductor_api_order_draft_payment_request__SepaDebit, payconductor_api_order_draft_payment_request__GooglePay, payconductor_api_order_draft_payment_request__Draft } payconductor_api_order_draft_payment_request__e;

char* order_draft_payment_request_available_payment_methods_ToString(payconductor_api_order_draft_payment_request__e available_payment_methods);

payconductor_api_order_draft_payment_request__e order_draft_payment_request_available_payment_methods_FromString(char* available_payment_methods);



typedef struct order_draft_payment_request_t {
    char *payment_method; // string
    double expiration_in_seconds; //numeric
    list_t *available_payment_methods; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} order_draft_payment_request_t;

__attribute__((deprecated)) order_draft_payment_request_t *order_draft_payment_request_create(
    char *payment_method,
    double expiration_in_seconds,
    list_t *available_payment_methods
);

void order_draft_payment_request_free(order_draft_payment_request_t *order_draft_payment_request);

order_draft_payment_request_t *order_draft_payment_request_parseFromJSON(cJSON *order_draft_payment_requestJSON);

cJSON *order_draft_payment_request_convertToJSON(order_draft_payment_request_t *order_draft_payment_request);

#endif /* _order_draft_payment_request_H_ */

