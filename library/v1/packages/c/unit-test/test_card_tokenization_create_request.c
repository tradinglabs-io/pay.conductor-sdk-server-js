#ifndef card_tokenization_create_request_TEST
#define card_tokenization_create_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define card_tokenization_create_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/card_tokenization_create_request.h"
card_tokenization_create_request_t* instantiate_card_tokenization_create_request(int include_optional);

#include "test_card_create_request.c"
#include "test_card_tokenization_create_request_customer.c"


card_tokenization_create_request_t* instantiate_card_tokenization_create_request(int include_optional) {
  card_tokenization_create_request_t* card_tokenization_create_request = NULL;
  if (include_optional) {
    card_tokenization_create_request = card_tokenization_create_request_create(
       // false, not to have infinite recursion
      instantiate_card_create_request(0),
      1,
      null
    );
  } else {
    card_tokenization_create_request = card_tokenization_create_request_create(
      NULL,
      1,
      null
    );
  }

  return card_tokenization_create_request;
}


#ifdef card_tokenization_create_request_MAIN

void test_card_tokenization_create_request(int include_optional) {
    card_tokenization_create_request_t* card_tokenization_create_request_1 = instantiate_card_tokenization_create_request(include_optional);

	cJSON* jsoncard_tokenization_create_request_1 = card_tokenization_create_request_convertToJSON(card_tokenization_create_request_1);
	printf("card_tokenization_create_request :\n%s\n", cJSON_Print(jsoncard_tokenization_create_request_1));
	card_tokenization_create_request_t* card_tokenization_create_request_2 = card_tokenization_create_request_parseFromJSON(jsoncard_tokenization_create_request_1);
	cJSON* jsoncard_tokenization_create_request_2 = card_tokenization_create_request_convertToJSON(card_tokenization_create_request_2);
	printf("repeating card_tokenization_create_request:\n%s\n", cJSON_Print(jsoncard_tokenization_create_request_2));
}

int main() {
  test_card_tokenization_create_request(1);
  test_card_tokenization_create_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // card_tokenization_create_request_MAIN
#endif // card_tokenization_create_request_TEST
