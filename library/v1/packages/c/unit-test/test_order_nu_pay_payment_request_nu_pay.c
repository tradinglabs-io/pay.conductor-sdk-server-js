#ifndef order_nu_pay_payment_request_nu_pay_TEST
#define order_nu_pay_payment_request_nu_pay_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_nu_pay_payment_request_nu_pay_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_nu_pay_payment_request_nu_pay.h"
order_nu_pay_payment_request_nu_pay_t* instantiate_order_nu_pay_payment_request_nu_pay(int include_optional);



order_nu_pay_payment_request_nu_pay_t* instantiate_order_nu_pay_payment_request_nu_pay(int include_optional) {
  order_nu_pay_payment_request_nu_pay_t* order_nu_pay_payment_request_nu_pay = NULL;
  if (include_optional) {
    order_nu_pay_payment_request_nu_pay = order_nu_pay_payment_request_nu_pay_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    order_nu_pay_payment_request_nu_pay = order_nu_pay_payment_request_nu_pay_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return order_nu_pay_payment_request_nu_pay;
}


#ifdef order_nu_pay_payment_request_nu_pay_MAIN

void test_order_nu_pay_payment_request_nu_pay(int include_optional) {
    order_nu_pay_payment_request_nu_pay_t* order_nu_pay_payment_request_nu_pay_1 = instantiate_order_nu_pay_payment_request_nu_pay(include_optional);

	cJSON* jsonorder_nu_pay_payment_request_nu_pay_1 = order_nu_pay_payment_request_nu_pay_convertToJSON(order_nu_pay_payment_request_nu_pay_1);
	printf("order_nu_pay_payment_request_nu_pay :\n%s\n", cJSON_Print(jsonorder_nu_pay_payment_request_nu_pay_1));
	order_nu_pay_payment_request_nu_pay_t* order_nu_pay_payment_request_nu_pay_2 = order_nu_pay_payment_request_nu_pay_parseFromJSON(jsonorder_nu_pay_payment_request_nu_pay_1);
	cJSON* jsonorder_nu_pay_payment_request_nu_pay_2 = order_nu_pay_payment_request_nu_pay_convertToJSON(order_nu_pay_payment_request_nu_pay_2);
	printf("repeating order_nu_pay_payment_request_nu_pay:\n%s\n", cJSON_Print(jsonorder_nu_pay_payment_request_nu_pay_2));
}

int main() {
  test_order_nu_pay_payment_request_nu_pay(1);
  test_order_nu_pay_payment_request_nu_pay(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_nu_pay_payment_request_nu_pay_MAIN
#endif // order_nu_pay_payment_request_nu_pay_TEST
