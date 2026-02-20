#ifndef card_tokenization_create_response_TEST
#define card_tokenization_create_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define card_tokenization_create_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/card_tokenization_create_response.h"
card_tokenization_create_response_t* instantiate_card_tokenization_create_response(int include_optional);



card_tokenization_create_response_t* instantiate_card_tokenization_create_response(int include_optional) {
  card_tokenization_create_response_t* card_tokenization_create_response = NULL;
  if (include_optional) {
    card_tokenization_create_response = card_tokenization_create_response_create(
      "0",
      "0"
    );
  } else {
    card_tokenization_create_response = card_tokenization_create_response_create(
      "0",
      "0"
    );
  }

  return card_tokenization_create_response;
}


#ifdef card_tokenization_create_response_MAIN

void test_card_tokenization_create_response(int include_optional) {
    card_tokenization_create_response_t* card_tokenization_create_response_1 = instantiate_card_tokenization_create_response(include_optional);

	cJSON* jsoncard_tokenization_create_response_1 = card_tokenization_create_response_convertToJSON(card_tokenization_create_response_1);
	printf("card_tokenization_create_response :\n%s\n", cJSON_Print(jsoncard_tokenization_create_response_1));
	card_tokenization_create_response_t* card_tokenization_create_response_2 = card_tokenization_create_response_parseFromJSON(jsoncard_tokenization_create_response_1);
	cJSON* jsoncard_tokenization_create_response_2 = card_tokenization_create_response_convertToJSON(card_tokenization_create_response_2);
	printf("repeating card_tokenization_create_response:\n%s\n", cJSON_Print(jsoncard_tokenization_create_response_2));
}

int main() {
  test_card_tokenization_create_response(1);
  test_card_tokenization_create_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // card_tokenization_create_response_MAIN
#endif // card_tokenization_create_response_TEST
