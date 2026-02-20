#ifndef card_tokenization_customer_by_id_data_TEST
#define card_tokenization_customer_by_id_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define card_tokenization_customer_by_id_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/card_tokenization_customer_by_id_data.h"
card_tokenization_customer_by_id_data_t* instantiate_card_tokenization_customer_by_id_data(int include_optional);



card_tokenization_customer_by_id_data_t* instantiate_card_tokenization_customer_by_id_data(int include_optional) {
  card_tokenization_customer_by_id_data_t* card_tokenization_customer_by_id_data = NULL;
  if (include_optional) {
    card_tokenization_customer_by_id_data = card_tokenization_customer_by_id_data_create(
      "0"
    );
  } else {
    card_tokenization_customer_by_id_data = card_tokenization_customer_by_id_data_create(
      "0"
    );
  }

  return card_tokenization_customer_by_id_data;
}


#ifdef card_tokenization_customer_by_id_data_MAIN

void test_card_tokenization_customer_by_id_data(int include_optional) {
    card_tokenization_customer_by_id_data_t* card_tokenization_customer_by_id_data_1 = instantiate_card_tokenization_customer_by_id_data(include_optional);

	cJSON* jsoncard_tokenization_customer_by_id_data_1 = card_tokenization_customer_by_id_data_convertToJSON(card_tokenization_customer_by_id_data_1);
	printf("card_tokenization_customer_by_id_data :\n%s\n", cJSON_Print(jsoncard_tokenization_customer_by_id_data_1));
	card_tokenization_customer_by_id_data_t* card_tokenization_customer_by_id_data_2 = card_tokenization_customer_by_id_data_parseFromJSON(jsoncard_tokenization_customer_by_id_data_1);
	cJSON* jsoncard_tokenization_customer_by_id_data_2 = card_tokenization_customer_by_id_data_convertToJSON(card_tokenization_customer_by_id_data_2);
	printf("repeating card_tokenization_customer_by_id_data:\n%s\n", cJSON_Print(jsoncard_tokenization_customer_by_id_data_2));
}

int main() {
  test_card_tokenization_customer_by_id_data(1);
  test_card_tokenization_customer_by_id_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // card_tokenization_customer_by_id_data_MAIN
#endif // card_tokenization_customer_by_id_data_TEST
