#ifndef order_credit_card_payment_request_card_TEST
#define order_credit_card_payment_request_card_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_credit_card_payment_request_card_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_credit_card_payment_request_card.h"
order_credit_card_payment_request_card_t* instantiate_order_credit_card_payment_request_card(int include_optional);

#include "test_card_expiration_data.c"


order_credit_card_payment_request_card_t* instantiate_order_credit_card_payment_request_card(int include_optional) {
  order_credit_card_payment_request_card_t* order_credit_card_payment_request_card = NULL;
  if (include_optional) {
    order_credit_card_payment_request_card = order_credit_card_payment_request_card_create(
      "0",
      "0",
      "012",
       // false, not to have infinite recursion
      instantiate_card_expiration_data(0),
      "0",
      "0"
    );
  } else {
    order_credit_card_payment_request_card = order_credit_card_payment_request_card_create(
      "0",
      "0",
      "012",
      NULL,
      "0",
      "0"
    );
  }

  return order_credit_card_payment_request_card;
}


#ifdef order_credit_card_payment_request_card_MAIN

void test_order_credit_card_payment_request_card(int include_optional) {
    order_credit_card_payment_request_card_t* order_credit_card_payment_request_card_1 = instantiate_order_credit_card_payment_request_card(include_optional);

	cJSON* jsonorder_credit_card_payment_request_card_1 = order_credit_card_payment_request_card_convertToJSON(order_credit_card_payment_request_card_1);
	printf("order_credit_card_payment_request_card :\n%s\n", cJSON_Print(jsonorder_credit_card_payment_request_card_1));
	order_credit_card_payment_request_card_t* order_credit_card_payment_request_card_2 = order_credit_card_payment_request_card_parseFromJSON(jsonorder_credit_card_payment_request_card_1);
	cJSON* jsonorder_credit_card_payment_request_card_2 = order_credit_card_payment_request_card_convertToJSON(order_credit_card_payment_request_card_2);
	printf("repeating order_credit_card_payment_request_card:\n%s\n", cJSON_Print(jsonorder_credit_card_payment_request_card_2));
}

int main() {
  test_order_credit_card_payment_request_card(1);
  test_order_credit_card_payment_request_card(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_credit_card_payment_request_card_MAIN
#endif // order_credit_card_payment_request_card_TEST
