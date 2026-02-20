#ifndef order_nu_pay_payment_request_TEST
#define order_nu_pay_payment_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_nu_pay_payment_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_nu_pay_payment_request.h"
order_nu_pay_payment_request_t* instantiate_order_nu_pay_payment_request(int include_optional);

#include "test_order_nu_pay_payment_request_nu_pay.c"


order_nu_pay_payment_request_t* instantiate_order_nu_pay_payment_request(int include_optional) {
  order_nu_pay_payment_request_t* order_nu_pay_payment_request = NULL;
  if (include_optional) {
    order_nu_pay_payment_request = order_nu_pay_payment_request_create(
      payconductor_api_order_nu_pay_payment_request__Pix,
       // false, not to have infinite recursion
      instantiate_order_nu_pay_payment_request_nu_pay(0)
    );
  } else {
    order_nu_pay_payment_request = order_nu_pay_payment_request_create(
      payconductor_api_order_nu_pay_payment_request__Pix,
      NULL
    );
  }

  return order_nu_pay_payment_request;
}


#ifdef order_nu_pay_payment_request_MAIN

void test_order_nu_pay_payment_request(int include_optional) {
    order_nu_pay_payment_request_t* order_nu_pay_payment_request_1 = instantiate_order_nu_pay_payment_request(include_optional);

	cJSON* jsonorder_nu_pay_payment_request_1 = order_nu_pay_payment_request_convertToJSON(order_nu_pay_payment_request_1);
	printf("order_nu_pay_payment_request :\n%s\n", cJSON_Print(jsonorder_nu_pay_payment_request_1));
	order_nu_pay_payment_request_t* order_nu_pay_payment_request_2 = order_nu_pay_payment_request_parseFromJSON(jsonorder_nu_pay_payment_request_1);
	cJSON* jsonorder_nu_pay_payment_request_2 = order_nu_pay_payment_request_convertToJSON(order_nu_pay_payment_request_2);
	printf("repeating order_nu_pay_payment_request:\n%s\n", cJSON_Print(jsonorder_nu_pay_payment_request_2));
}

int main() {
  test_order_nu_pay_payment_request(1);
  test_order_nu_pay_payment_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_nu_pay_payment_request_MAIN
#endif // order_nu_pay_payment_request_TEST
