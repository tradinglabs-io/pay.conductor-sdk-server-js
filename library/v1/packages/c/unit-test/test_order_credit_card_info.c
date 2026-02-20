#ifndef order_credit_card_info_TEST
#define order_credit_card_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_credit_card_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_credit_card_info.h"
order_credit_card_info_t* instantiate_order_credit_card_info(int include_optional);



order_credit_card_info_t* instantiate_order_credit_card_info(int include_optional) {
  order_credit_card_info_t* order_credit_card_info = NULL;
  if (include_optional) {
    order_credit_card_info = order_credit_card_info_create(
      "0"
    );
  } else {
    order_credit_card_info = order_credit_card_info_create(
      "0"
    );
  }

  return order_credit_card_info;
}


#ifdef order_credit_card_info_MAIN

void test_order_credit_card_info(int include_optional) {
    order_credit_card_info_t* order_credit_card_info_1 = instantiate_order_credit_card_info(include_optional);

	cJSON* jsonorder_credit_card_info_1 = order_credit_card_info_convertToJSON(order_credit_card_info_1);
	printf("order_credit_card_info :\n%s\n", cJSON_Print(jsonorder_credit_card_info_1));
	order_credit_card_info_t* order_credit_card_info_2 = order_credit_card_info_parseFromJSON(jsonorder_credit_card_info_1);
	cJSON* jsonorder_credit_card_info_2 = order_credit_card_info_convertToJSON(order_credit_card_info_2);
	printf("repeating order_credit_card_info:\n%s\n", cJSON_Print(jsonorder_credit_card_info_2));
}

int main() {
  test_order_credit_card_info(1);
  test_order_credit_card_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_credit_card_info_MAIN
#endif // order_credit_card_info_TEST
