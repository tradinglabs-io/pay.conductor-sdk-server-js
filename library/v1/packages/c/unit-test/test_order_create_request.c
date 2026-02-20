#ifndef order_create_request_TEST
#define order_create_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_create_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_create_request.h"
order_create_request_t* instantiate_order_create_request(int include_optional);

#include "test_customer_create_request.c"
#include "test_order_fraud_fingerprints.c"
#include "test_merchant_input.c"
#include "test_order_payment_request.c"
#include "test_order_create_request_session.c"


order_create_request_t* instantiate_order_create_request(int include_optional) {
  order_create_request_t* order_create_request = NULL;
  if (include_optional) {
    order_create_request = order_create_request_create(
      1.337,
      "0",
       // false, not to have infinite recursion
      instantiate_customer_create_request(0),
      1.337,
      "0",
       // false, not to have infinite recursion
      instantiate_order_fraud_fingerprints(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_merchant_input(0),
      null,
      0,
       // false, not to have infinite recursion
      instantiate_order_create_request_session(0),
      1.337,
      1.337,
      0
    );
  } else {
    order_create_request = order_create_request_create(
      1.337,
      "0",
      NULL,
      1.337,
      "0",
      NULL,
      list_createList(),
      NULL,
      null,
      0,
      NULL,
      1.337,
      1.337,
      0
    );
  }

  return order_create_request;
}


#ifdef order_create_request_MAIN

void test_order_create_request(int include_optional) {
    order_create_request_t* order_create_request_1 = instantiate_order_create_request(include_optional);

	cJSON* jsonorder_create_request_1 = order_create_request_convertToJSON(order_create_request_1);
	printf("order_create_request :\n%s\n", cJSON_Print(jsonorder_create_request_1));
	order_create_request_t* order_create_request_2 = order_create_request_parseFromJSON(jsonorder_create_request_1);
	cJSON* jsonorder_create_request_2 = order_create_request_convertToJSON(order_create_request_2);
	printf("repeating order_create_request:\n%s\n", cJSON_Print(jsonorder_create_request_2));
}

int main() {
  test_order_create_request(1);
  test_order_create_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_create_request_MAIN
#endif // order_create_request_TEST
