#ifndef order_bank_slip_info_TEST
#define order_bank_slip_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_bank_slip_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_bank_slip_info.h"
order_bank_slip_info_t* instantiate_order_bank_slip_info(int include_optional);



order_bank_slip_info_t* instantiate_order_bank_slip_info(int include_optional) {
  order_bank_slip_info_t* order_bank_slip_info = NULL;
  if (include_optional) {
    order_bank_slip_info = order_bank_slip_info_create(
      "0",
      "0",
      "0"
    );
  } else {
    order_bank_slip_info = order_bank_slip_info_create(
      "0",
      "0",
      "0"
    );
  }

  return order_bank_slip_info;
}


#ifdef order_bank_slip_info_MAIN

void test_order_bank_slip_info(int include_optional) {
    order_bank_slip_info_t* order_bank_slip_info_1 = instantiate_order_bank_slip_info(include_optional);

	cJSON* jsonorder_bank_slip_info_1 = order_bank_slip_info_convertToJSON(order_bank_slip_info_1);
	printf("order_bank_slip_info :\n%s\n", cJSON_Print(jsonorder_bank_slip_info_1));
	order_bank_slip_info_t* order_bank_slip_info_2 = order_bank_slip_info_parseFromJSON(jsonorder_bank_slip_info_1);
	cJSON* jsonorder_bank_slip_info_2 = order_bank_slip_info_convertToJSON(order_bank_slip_info_2);
	printf("repeating order_bank_slip_info:\n%s\n", cJSON_Print(jsonorder_bank_slip_info_2));
}

int main() {
  test_order_bank_slip_info(1);
  test_order_bank_slip_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_bank_slip_info_MAIN
#endif // order_bank_slip_info_TEST
