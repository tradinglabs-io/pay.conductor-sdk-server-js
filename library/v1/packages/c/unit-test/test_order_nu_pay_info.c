#ifndef order_nu_pay_info_TEST
#define order_nu_pay_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_nu_pay_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_nu_pay_info.h"
order_nu_pay_info_t* instantiate_order_nu_pay_info(int include_optional);



order_nu_pay_info_t* instantiate_order_nu_pay_info(int include_optional) {
  order_nu_pay_info_t* order_nu_pay_info = NULL;
  if (include_optional) {
    order_nu_pay_info = order_nu_pay_info_create(
      "0"
    );
  } else {
    order_nu_pay_info = order_nu_pay_info_create(
      "0"
    );
  }

  return order_nu_pay_info;
}


#ifdef order_nu_pay_info_MAIN

void test_order_nu_pay_info(int include_optional) {
    order_nu_pay_info_t* order_nu_pay_info_1 = instantiate_order_nu_pay_info(include_optional);

	cJSON* jsonorder_nu_pay_info_1 = order_nu_pay_info_convertToJSON(order_nu_pay_info_1);
	printf("order_nu_pay_info :\n%s\n", cJSON_Print(jsonorder_nu_pay_info_1));
	order_nu_pay_info_t* order_nu_pay_info_2 = order_nu_pay_info_parseFromJSON(jsonorder_nu_pay_info_1);
	cJSON* jsonorder_nu_pay_info_2 = order_nu_pay_info_convertToJSON(order_nu_pay_info_2);
	printf("repeating order_nu_pay_info:\n%s\n", cJSON_Print(jsonorder_nu_pay_info_2));
}

int main() {
  test_order_nu_pay_info(1);
  test_order_nu_pay_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_nu_pay_info_MAIN
#endif // order_nu_pay_info_TEST
