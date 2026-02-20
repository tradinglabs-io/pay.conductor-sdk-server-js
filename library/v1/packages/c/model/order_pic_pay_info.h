/*
 * order_pic_pay_info.h
 *
 * PicPay payment data
 */

#ifndef _order_pic_pay_info_H_
#define _order_pic_pay_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_pic_pay_info_t order_pic_pay_info_t;




typedef struct order_pic_pay_info_t {
    char *copy_and_paste_code; // string
    char *qr_code_url; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_pic_pay_info_t;

__attribute__((deprecated)) order_pic_pay_info_t *order_pic_pay_info_create(
    char *copy_and_paste_code,
    char *qr_code_url
);

void order_pic_pay_info_free(order_pic_pay_info_t *order_pic_pay_info);

order_pic_pay_info_t *order_pic_pay_info_parseFromJSON(cJSON *order_pic_pay_infoJSON);

cJSON *order_pic_pay_info_convertToJSON(order_pic_pay_info_t *order_pic_pay_info);

#endif /* _order_pic_pay_info_H_ */

