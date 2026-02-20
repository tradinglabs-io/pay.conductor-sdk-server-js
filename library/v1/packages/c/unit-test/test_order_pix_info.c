#ifndef order_pix_info_TEST
#define order_pix_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_pix_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_pix_info.h"
order_pix_info_t* instantiate_order_pix_info(int include_optional);



order_pix_info_t* instantiate_order_pix_info(int include_optional) {
  order_pix_info_t* order_pix_info = NULL;
  if (include_optional) {
    order_pix_info = order_pix_info_create(
      "0",
      "0",
      "0"
    );
  } else {
    order_pix_info = order_pix_info_create(
      "0",
      "0",
      "0"
    );
  }

  return order_pix_info;
}


#ifdef order_pix_info_MAIN

void test_order_pix_info(int include_optional) {
    order_pix_info_t* order_pix_info_1 = instantiate_order_pix_info(include_optional);

	cJSON* jsonorder_pix_info_1 = order_pix_info_convertToJSON(order_pix_info_1);
	printf("order_pix_info :\n%s\n", cJSON_Print(jsonorder_pix_info_1));
	order_pix_info_t* order_pix_info_2 = order_pix_info_parseFromJSON(jsonorder_pix_info_1);
	cJSON* jsonorder_pix_info_2 = order_pix_info_convertToJSON(order_pix_info_2);
	printf("repeating order_pix_info:\n%s\n", cJSON_Print(jsonorder_pix_info_2));
}

int main() {
  test_order_pix_info(1);
  test_order_pix_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_pix_info_MAIN
#endif // order_pix_info_TEST
