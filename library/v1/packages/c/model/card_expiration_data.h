/*
 * card_expiration_data.h
 *
 * Card expiration date
 */

#ifndef _card_expiration_data_H_
#define _card_expiration_data_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct card_expiration_data_t card_expiration_data_t;




typedef struct card_expiration_data_t {
    double month; //numeric
    double year; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} card_expiration_data_t;

__attribute__((deprecated)) card_expiration_data_t *card_expiration_data_create(
    double month,
    double year
);

void card_expiration_data_free(card_expiration_data_t *card_expiration_data);

card_expiration_data_t *card_expiration_data_parseFromJSON(cJSON *card_expiration_dataJSON);

cJSON *card_expiration_data_convertToJSON(card_expiration_data_t *card_expiration_data);

#endif /* _card_expiration_data_H_ */

