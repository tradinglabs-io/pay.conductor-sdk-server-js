/*
 * order_payment_request.h
 *
 * Payment data for the order (Pix, Credit Card, Bank Slip, NuPay, etc...)
 */

#ifndef _order_payment_request_H_
#define _order_payment_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_payment_request_t order_payment_request_t;

#include "available_payment_methods.h"
#include "order_bank_slip_payment_request.h"
#include "order_credit_card_payment_request.h"
#include "order_credit_card_payment_request_card.h"
#include "order_draft_payment_request.h"
#include "order_nu_pay_payment_request.h"
#include "order_nu_pay_payment_request_nu_pay.h"
#include "order_pic_pay_payment_request.h"
#include "order_pix_payment_request.h"
#include "payment_method.h"

// Enum  for order_payment_request

typedef enum  { payconductor_api_order_payment_request__NULL = 0, payconductor_api_order_payment_request__Pix, payconductor_api_order_payment_request__CreditCard, payconductor_api_order_payment_request__DebitCard, payconductor_api_order_payment_request__BankSlip, payconductor_api_order_payment_request__Crypto, payconductor_api_order_payment_request__ApplePay, payconductor_api_order_payment_request__NuPay, payconductor_api_order_payment_request__PicPay, payconductor_api_order_payment_request__AmazonPay, payconductor_api_order_payment_request__SepaDebit, payconductor_api_order_payment_request__GooglePay, payconductor_api_order_payment_request__Draft } payconductor_api_order_payment_request__e;

char* order_payment_request_available_payment_methods_ToString(payconductor_api_order_payment_request__e available_payment_methods);

payconductor_api_order_payment_request__e order_payment_request_available_payment_methods_FromString(char* available_payment_methods);



typedef struct order_payment_request_t {
    payconductor_api_payment_method__e payment_method; //referenced enum
    double expiration_in_seconds; //numeric
    struct order_credit_card_payment_request_card_t *card; //model
    double installments; //numeric
    char *soft_descriptor; // string
    double expiration_in_days; //numeric
    struct order_nu_pay_payment_request_nu_pay_t *nu_pay; //model
    list_t *available_payment_methods; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} order_payment_request_t;

__attribute__((deprecated)) order_payment_request_t *order_payment_request_create(
    payconductor_api_payment_method__e payment_method,
    double expiration_in_seconds,
    order_credit_card_payment_request_card_t *card,
    double installments,
    char *soft_descriptor,
    double expiration_in_days,
    order_nu_pay_payment_request_nu_pay_t *nu_pay,
    list_t *available_payment_methods
);

void order_payment_request_free(order_payment_request_t *order_payment_request);

order_payment_request_t *order_payment_request_parseFromJSON(cJSON *order_payment_requestJSON);

cJSON *order_payment_request_convertToJSON(order_payment_request_t *order_payment_request);

#endif /* _order_payment_request_H_ */

