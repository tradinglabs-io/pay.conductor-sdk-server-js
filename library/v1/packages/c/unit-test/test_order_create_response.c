#ifndef order_create_response_TEST
#define order_create_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_create_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_create_response.h"
order_create_response_t* instantiate_order_create_response(int include_optional);

#include "test_order_pix_info.c"
#include "test_order_bank_slip_info.c"
#include "test_order_nu_pay_info.c"
#include "test_order_pic_pay_info.c"
#include "test_order_credit_card_info.c"
#include "test_order_create_response_session.c"


order_create_response_t* instantiate_order_create_response(int include_optional) {
  order_create_response_t* order_create_response = NULL;
  if (include_optional) {
    order_create_response = order_create_response_create(
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
       // false, not to have infinite recursion
      instantiate_order_pix_info(0),
       // false, not to have infinite recursion
      instantiate_order_bank_slip_info(0),
       // false, not to have infinite recursion
      instantiate_order_nu_pay_info(0),
       // false, not to have infinite recursion
      instantiate_order_pic_pay_info(0),
       // false, not to have infinite recursion
      instantiate_order_credit_card_info(0),
      payconductor_api_order_create_response__Generating,
      payconductor_api_order_create_response__Pix,
      "0",
      "0",
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_order_create_response_session(0)
    );
  } else {
    order_create_response = order_create_response_create(
      "0",
      "0",
      "0",
      "0",
      1.337,
      1.337,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      payconductor_api_order_create_response__Generating,
      payconductor_api_order_create_response__Pix,
      "0",
      "0",
      "0",
      list_createList(),
      NULL
    );
  }

  return order_create_response;
}


#ifdef order_create_response_MAIN

void test_order_create_response(int include_optional) {
    order_create_response_t* order_create_response_1 = instantiate_order_create_response(include_optional);

	cJSON* jsonorder_create_response_1 = order_create_response_convertToJSON(order_create_response_1);
	printf("order_create_response :\n%s\n", cJSON_Print(jsonorder_create_response_1));
	order_create_response_t* order_create_response_2 = order_create_response_parseFromJSON(jsonorder_create_response_1);
	cJSON* jsonorder_create_response_2 = order_create_response_convertToJSON(order_create_response_2);
	printf("repeating order_create_response:\n%s\n", cJSON_Print(jsonorder_create_response_2));
}

int main() {
  test_order_create_response(1);
  test_order_create_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_create_response_MAIN
#endif // order_create_response_TEST
