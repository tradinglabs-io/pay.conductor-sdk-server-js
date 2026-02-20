#ifndef order_confirm_response_TEST
#define order_confirm_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_confirm_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_confirm_response.h"
order_confirm_response_t* instantiate_order_confirm_response(int include_optional);

#include "test_order_pix_info.c"
#include "test_order_bank_slip_info.c"
#include "test_order_nu_pay_info.c"
#include "test_order_pic_pay_info.c"


order_confirm_response_t* instantiate_order_confirm_response(int include_optional) {
  order_confirm_response_t* order_confirm_response = NULL;
  if (include_optional) {
    order_confirm_response = order_confirm_response_create(
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
      payconductor_api_order_confirm_response__Generating,
      payconductor_api_order_confirm_response__Pix,
      "0",
      "0",
      "0"
    );
  } else {
    order_confirm_response = order_confirm_response_create(
      "0",
      "0",
      1.337,
      1.337,
      NULL,
      NULL,
      NULL,
      NULL,
      payconductor_api_order_confirm_response__Generating,
      payconductor_api_order_confirm_response__Pix,
      "0",
      "0",
      "0"
    );
  }

  return order_confirm_response;
}


#ifdef order_confirm_response_MAIN

void test_order_confirm_response(int include_optional) {
    order_confirm_response_t* order_confirm_response_1 = instantiate_order_confirm_response(include_optional);

	cJSON* jsonorder_confirm_response_1 = order_confirm_response_convertToJSON(order_confirm_response_1);
	printf("order_confirm_response :\n%s\n", cJSON_Print(jsonorder_confirm_response_1));
	order_confirm_response_t* order_confirm_response_2 = order_confirm_response_parseFromJSON(jsonorder_confirm_response_1);
	cJSON* jsonorder_confirm_response_2 = order_confirm_response_convertToJSON(order_confirm_response_2);
	printf("repeating order_confirm_response:\n%s\n", cJSON_Print(jsonorder_confirm_response_2));
}

int main() {
  test_order_confirm_response(1);
  test_order_confirm_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_confirm_response_MAIN
#endif // order_confirm_response_TEST
