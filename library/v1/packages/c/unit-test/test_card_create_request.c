#ifndef card_create_request_TEST
#define card_create_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define card_create_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/card_create_request.h"
card_create_request_t* instantiate_card_create_request(int include_optional);

#include "test_card_expiration_data.c"


card_create_request_t* instantiate_card_create_request(int include_optional) {
  card_create_request_t* card_create_request = NULL;
  if (include_optional) {
    card_create_request = card_create_request_create(
      "012",
       // false, not to have infinite recursion
      instantiate_card_expiration_data(0),
      "0",
      "0"
    );
  } else {
    card_create_request = card_create_request_create(
      "012",
      NULL,
      "0",
      "0"
    );
  }

  return card_create_request;
}


#ifdef card_create_request_MAIN

void test_card_create_request(int include_optional) {
    card_create_request_t* card_create_request_1 = instantiate_card_create_request(include_optional);

	cJSON* jsoncard_create_request_1 = card_create_request_convertToJSON(card_create_request_1);
	printf("card_create_request :\n%s\n", cJSON_Print(jsoncard_create_request_1));
	card_create_request_t* card_create_request_2 = card_create_request_parseFromJSON(jsoncard_create_request_1);
	cJSON* jsoncard_create_request_2 = card_create_request_convertToJSON(card_create_request_2);
	printf("repeating card_create_request:\n%s\n", cJSON_Print(jsoncard_create_request_2));
}

int main() {
  test_card_create_request(1);
  test_card_create_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // card_create_request_MAIN
#endif // card_create_request_TEST
