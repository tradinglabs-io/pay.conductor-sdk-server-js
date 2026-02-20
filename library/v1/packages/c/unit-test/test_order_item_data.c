#ifndef order_item_data_TEST
#define order_item_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_item_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_item_data.h"
order_item_data_t* instantiate_order_item_data(int include_optional);



order_item_data_t* instantiate_order_item_data(int include_optional) {
  order_item_data_t* order_item_data = NULL;
  if (include_optional) {
    order_item_data = order_item_data_create(
      "0",
      1,
      "0",
      1.337,
      1.337
    );
  } else {
    order_item_data = order_item_data_create(
      "0",
      1,
      "0",
      1.337,
      1.337
    );
  }

  return order_item_data;
}


#ifdef order_item_data_MAIN

void test_order_item_data(int include_optional) {
    order_item_data_t* order_item_data_1 = instantiate_order_item_data(include_optional);

	cJSON* jsonorder_item_data_1 = order_item_data_convertToJSON(order_item_data_1);
	printf("order_item_data :\n%s\n", cJSON_Print(jsonorder_item_data_1));
	order_item_data_t* order_item_data_2 = order_item_data_parseFromJSON(jsonorder_item_data_1);
	cJSON* jsonorder_item_data_2 = order_item_data_convertToJSON(order_item_data_2);
	printf("repeating order_item_data:\n%s\n", cJSON_Print(jsonorder_item_data_2));
}

int main() {
  test_order_item_data(1);
  test_order_item_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_item_data_MAIN
#endif // order_item_data_TEST
