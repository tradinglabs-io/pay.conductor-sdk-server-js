#ifndef order_draft_payment_request_TEST
#define order_draft_payment_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_draft_payment_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_draft_payment_request.h"
order_draft_payment_request_t* instantiate_order_draft_payment_request(int include_optional);



order_draft_payment_request_t* instantiate_order_draft_payment_request(int include_optional) {
  order_draft_payment_request_t* order_draft_payment_request = NULL;
  if (include_optional) {
    order_draft_payment_request = order_draft_payment_request_create(
      "0",
      1.337,
      list_createList()
    );
  } else {
    order_draft_payment_request = order_draft_payment_request_create(
      "0",
      1.337,
      list_createList()
    );
  }

  return order_draft_payment_request;
}


#ifdef order_draft_payment_request_MAIN

void test_order_draft_payment_request(int include_optional) {
    order_draft_payment_request_t* order_draft_payment_request_1 = instantiate_order_draft_payment_request(include_optional);

	cJSON* jsonorder_draft_payment_request_1 = order_draft_payment_request_convertToJSON(order_draft_payment_request_1);
	printf("order_draft_payment_request :\n%s\n", cJSON_Print(jsonorder_draft_payment_request_1));
	order_draft_payment_request_t* order_draft_payment_request_2 = order_draft_payment_request_parseFromJSON(jsonorder_draft_payment_request_1);
	cJSON* jsonorder_draft_payment_request_2 = order_draft_payment_request_convertToJSON(order_draft_payment_request_2);
	printf("repeating order_draft_payment_request:\n%s\n", cJSON_Print(jsonorder_draft_payment_request_2));
}

int main() {
  test_order_draft_payment_request(1);
  test_order_draft_payment_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_draft_payment_request_MAIN
#endif // order_draft_payment_request_TEST
