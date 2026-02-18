/*
 * post_orders_request_payment.h
 *
 * Dados de pagamento para o pedido (Pix, Cartão de Crédito, Boleto, NuPay, etc...)
 */

#ifndef _post_orders_request_payment_H_
#define _post_orders_request_payment_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct post_orders_request_payment_t post_orders_request_payment_t;

#include "boleto.h"
#include "boleto_expiration_in_days.h"
#include "cart_o_de_cr_dito.h"
#include "cart_o_de_cr_dito_card.h"
#include "cart_o_de_cr_dito_installments.h"
#include "nu_pay.h"
#include "nu_pay_nu_pay.h"
#include "pic_pay.h"
#include "pix.h"
#include "pix_expiration_in_seconds.h"



typedef struct post_orders_request_payment_t {
    char *payment_method; // string
    struct pix_expiration_in_seconds_t *expiration_in_seconds; //model
    struct cart_o_de_cr_dito_card_t *card; //model
    struct cart_o_de_cr_dito_installments_t *installments; //model
    char *soft_descriptor; // string
    struct boleto_expiration_in_days_t *expiration_in_days; //model
    struct nu_pay_nu_pay_t *nu_pay; //model

    int _library_owned; // Is the library responsible for freeing this object?
} post_orders_request_payment_t;

__attribute__((deprecated)) post_orders_request_payment_t *post_orders_request_payment_create(
    char *payment_method,
    pix_expiration_in_seconds_t *expiration_in_seconds,
    cart_o_de_cr_dito_card_t *card,
    cart_o_de_cr_dito_installments_t *installments,
    char *soft_descriptor,
    boleto_expiration_in_days_t *expiration_in_days,
    nu_pay_nu_pay_t *nu_pay
);

void post_orders_request_payment_free(post_orders_request_payment_t *post_orders_request_payment);

post_orders_request_payment_t *post_orders_request_payment_parseFromJSON(cJSON *post_orders_request_paymentJSON);

cJSON *post_orders_request_payment_convertToJSON(post_orders_request_payment_t *post_orders_request_payment);

#endif /* _post_orders_request_payment_H_ */

