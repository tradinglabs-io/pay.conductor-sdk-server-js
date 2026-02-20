#ifndef order_pix_payment_request_TEST
#define order_pix_payment_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_pix_payment_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_pix_payment_request.h"
order_pix_payment_request_t* instantiate_order_pix_payment_request(int include_optional);



order_pix_payment_request_t* instantiate_order_pix_payment_request(int include_optional) {
  order_pix_payment_request_t* order_pix_payment_request = NULL;
  if (include_optional) {
    order_pix_payment_request = order_pix_payment_request_create(
      "0",
      3600
    );
  } else {
    order_pix_payment_request = order_pix_payment_request_create(
      "0",
      3600
    );
  }

  return order_pix_payment_request;
}


#ifdef order_pix_payment_request_MAIN

void test_order_pix_payment_request(int include_optional) {
    order_pix_payment_request_t* order_pix_payment_request_1 = instantiate_order_pix_payment_request(include_optional);

	cJSON* jsonorder_pix_payment_request_1 = order_pix_payment_request_convertToJSON(order_pix_payment_request_1);
	printf("order_pix_payment_request :\n%s\n", cJSON_Print(jsonorder_pix_payment_request_1));
	order_pix_payment_request_t* order_pix_payment_request_2 = order_pix_payment_request_parseFromJSON(jsonorder_pix_payment_request_1);
	cJSON* jsonorder_pix_payment_request_2 = order_pix_payment_request_convertToJSON(order_pix_payment_request_2);
	printf("repeating order_pix_payment_request:\n%s\n", cJSON_Print(jsonorder_pix_payment_request_2));
}

int main() {
  test_order_pix_payment_request(1);
  test_order_pix_payment_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_pix_payment_request_MAIN
#endif // order_pix_payment_request_TEST
