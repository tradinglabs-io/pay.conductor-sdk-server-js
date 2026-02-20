#ifndef order_tokenized_card_data_TEST
#define order_tokenized_card_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_tokenized_card_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_tokenized_card_data.h"
order_tokenized_card_data_t* instantiate_order_tokenized_card_data(int include_optional);



order_tokenized_card_data_t* instantiate_order_tokenized_card_data(int include_optional) {
  order_tokenized_card_data_t* order_tokenized_card_data = NULL;
  if (include_optional) {
    order_tokenized_card_data = order_tokenized_card_data_create(
      "0",
      "0"
    );
  } else {
    order_tokenized_card_data = order_tokenized_card_data_create(
      "0",
      "0"
    );
  }

  return order_tokenized_card_data;
}


#ifdef order_tokenized_card_data_MAIN

void test_order_tokenized_card_data(int include_optional) {
    order_tokenized_card_data_t* order_tokenized_card_data_1 = instantiate_order_tokenized_card_data(include_optional);

	cJSON* jsonorder_tokenized_card_data_1 = order_tokenized_card_data_convertToJSON(order_tokenized_card_data_1);
	printf("order_tokenized_card_data :\n%s\n", cJSON_Print(jsonorder_tokenized_card_data_1));
	order_tokenized_card_data_t* order_tokenized_card_data_2 = order_tokenized_card_data_parseFromJSON(jsonorder_tokenized_card_data_1);
	cJSON* jsonorder_tokenized_card_data_2 = order_tokenized_card_data_convertToJSON(order_tokenized_card_data_2);
	printf("repeating order_tokenized_card_data:\n%s\n", cJSON_Print(jsonorder_tokenized_card_data_2));
}

int main() {
  test_order_tokenized_card_data(1);
  test_order_tokenized_card_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_tokenized_card_data_MAIN
#endif // order_tokenized_card_data_TEST
