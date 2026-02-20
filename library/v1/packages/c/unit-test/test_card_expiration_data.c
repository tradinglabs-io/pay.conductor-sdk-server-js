#ifndef card_expiration_data_TEST
#define card_expiration_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define card_expiration_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/card_expiration_data.h"
card_expiration_data_t* instantiate_card_expiration_data(int include_optional);



card_expiration_data_t* instantiate_card_expiration_data(int include_optional) {
  card_expiration_data_t* card_expiration_data = NULL;
  if (include_optional) {
    card_expiration_data = card_expiration_data_create(
      1,
      2025
    );
  } else {
    card_expiration_data = card_expiration_data_create(
      1,
      2025
    );
  }

  return card_expiration_data;
}


#ifdef card_expiration_data_MAIN

void test_card_expiration_data(int include_optional) {
    card_expiration_data_t* card_expiration_data_1 = instantiate_card_expiration_data(include_optional);

	cJSON* jsoncard_expiration_data_1 = card_expiration_data_convertToJSON(card_expiration_data_1);
	printf("card_expiration_data :\n%s\n", cJSON_Print(jsoncard_expiration_data_1));
	card_expiration_data_t* card_expiration_data_2 = card_expiration_data_parseFromJSON(jsoncard_expiration_data_1);
	cJSON* jsoncard_expiration_data_2 = card_expiration_data_convertToJSON(card_expiration_data_2);
	printf("repeating card_expiration_data:\n%s\n", cJSON_Print(jsoncard_expiration_data_2));
}

int main() {
  test_card_expiration_data(1);
  test_card_expiration_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // card_expiration_data_MAIN
#endif // card_expiration_data_TEST
