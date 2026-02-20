#ifndef order_payment_request_TEST
#define order_payment_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_payment_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_payment_request.h"
order_payment_request_t* instantiate_order_payment_request(int include_optional);

#include "test_order_credit_card_payment_request_card.c"
#include "test_order_nu_pay_payment_request_nu_pay.c"


order_payment_request_t* instantiate_order_payment_request(int include_optional) {
  order_payment_request_t* order_payment_request = NULL;
  if (include_optional) {
    order_payment_request = order_payment_request_create(
      payconductor_api_order_payment_request__Pix,
      1.337,
      null,
      1,
      "0",
      1,
       // false, not to have infinite recursion
      instantiate_order_nu_pay_payment_request_nu_pay(0),
      list_createList()
    );
  } else {
    order_payment_request = order_payment_request_create(
      payconductor_api_order_payment_request__Pix,
      1.337,
      null,
      1,
      "0",
      1,
      NULL,
      list_createList()
    );
  }

  return order_payment_request;
}


#ifdef order_payment_request_MAIN

void test_order_payment_request(int include_optional) {
    order_payment_request_t* order_payment_request_1 = instantiate_order_payment_request(include_optional);

	cJSON* jsonorder_payment_request_1 = order_payment_request_convertToJSON(order_payment_request_1);
	printf("order_payment_request :\n%s\n", cJSON_Print(jsonorder_payment_request_1));
	order_payment_request_t* order_payment_request_2 = order_payment_request_parseFromJSON(jsonorder_payment_request_1);
	cJSON* jsonorder_payment_request_2 = order_payment_request_convertToJSON(order_payment_request_2);
	printf("repeating order_payment_request:\n%s\n", cJSON_Print(jsonorder_payment_request_2));
}

int main() {
  test_order_payment_request(1);
  test_order_payment_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_payment_request_MAIN
#endif // order_payment_request_TEST
