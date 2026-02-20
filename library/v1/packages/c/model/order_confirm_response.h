/*
 * order_confirm_response.h
 *
 * Response after confirming a draft order
 */

#ifndef _order_confirm_response_H_
#define _order_confirm_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_confirm_response_t order_confirm_response_t;

#include "order_bank_slip_info.h"
#include "order_nu_pay_info.h"
#include "order_pic_pay_info.h"
#include "order_pix_info.h"
#include "payment_method.h"
#include "status.h"



typedef struct order_confirm_response_t {
    char *id; // string
    char *external_id; // string
    double amount; //numeric
    double cost_fee; //numeric
    struct order_pix_info_t *pix; //model
    struct order_bank_slip_info_t *bank_slip; //model
    struct order_nu_pay_info_t *nu_pay; //model
    struct order_pic_pay_info_t *pic_pay; //model
    payconductor_api_status__e status; //referenced enum
    payconductor_api_payment_method__e payment_method; //referenced enum
    char *payed_at; // string
    char *error_code; // string
    char *error_message; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_confirm_response_t;

__attribute__((deprecated)) order_confirm_response_t *order_confirm_response_create(
    char *id,
    char *external_id,
    double amount,
    double cost_fee,
    order_pix_info_t *pix,
    order_bank_slip_info_t *bank_slip,
    order_nu_pay_info_t *nu_pay,
    order_pic_pay_info_t *pic_pay,
    payconductor_api_status__e status,
    payconductor_api_payment_method__e payment_method,
    char *payed_at,
    char *error_code,
    char *error_message
);

void order_confirm_response_free(order_confirm_response_t *order_confirm_response);

order_confirm_response_t *order_confirm_response_parseFromJSON(cJSON *order_confirm_responseJSON);

cJSON *order_confirm_response_convertToJSON(order_confirm_response_t *order_confirm_response);

#endif /* _order_confirm_response_H_ */

