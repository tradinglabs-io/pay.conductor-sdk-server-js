/*
 * order_pix_info.h
 *
 * PIX payment data and QR code information
 */

#ifndef _order_pix_info_H_
#define _order_pix_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_pix_info_t order_pix_info_t;




typedef struct order_pix_info_t {
    char *copy_and_paste_code; // string
    char *qr_code_url; // string
    char *end_to_end_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} order_pix_info_t;

__attribute__((deprecated)) order_pix_info_t *order_pix_info_create(
    char *copy_and_paste_code,
    char *qr_code_url,
    char *end_to_end_id
);

void order_pix_info_free(order_pix_info_t *order_pix_info);

order_pix_info_t *order_pix_info_parseFromJSON(cJSON *order_pix_infoJSON);

cJSON *order_pix_info_convertToJSON(order_pix_info_t *order_pix_info);

#endif /* _order_pix_info_H_ */

