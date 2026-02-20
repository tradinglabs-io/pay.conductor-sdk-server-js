#ifndef card_tokenization_create_request_customer_TEST
#define card_tokenization_create_request_customer_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define card_tokenization_create_request_customer_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/card_tokenization_create_request_customer.h"
card_tokenization_create_request_customer_t* instantiate_card_tokenization_create_request_customer(int include_optional);

#include "test_address_create_request.c"


card_tokenization_create_request_customer_t* instantiate_card_tokenization_create_request_customer(int include_optional) {
  card_tokenization_create_request_customer_t* card_tokenization_create_request_customer = NULL;
  if (include_optional) {
    card_tokenization_create_request_customer = card_tokenization_create_request_customer_create(
       // false, not to have infinite recursion
      instantiate_address_create_request(0),
      "a",
      payconductor_api_card_tokenization_create_request_customer__Cpf,
      "0",
      "0",
      "a",
      "0"
    );
  } else {
    card_tokenization_create_request_customer = card_tokenization_create_request_customer_create(
      NULL,
      "a",
      payconductor_api_card_tokenization_create_request_customer__Cpf,
      "0",
      "0",
      "a",
      "0"
    );
  }

  return card_tokenization_create_request_customer;
}


#ifdef card_tokenization_create_request_customer_MAIN

void test_card_tokenization_create_request_customer(int include_optional) {
    card_tokenization_create_request_customer_t* card_tokenization_create_request_customer_1 = instantiate_card_tokenization_create_request_customer(include_optional);

	cJSON* jsoncard_tokenization_create_request_customer_1 = card_tokenization_create_request_customer_convertToJSON(card_tokenization_create_request_customer_1);
	printf("card_tokenization_create_request_customer :\n%s\n", cJSON_Print(jsoncard_tokenization_create_request_customer_1));
	card_tokenization_create_request_customer_t* card_tokenization_create_request_customer_2 = card_tokenization_create_request_customer_parseFromJSON(jsoncard_tokenization_create_request_customer_1);
	cJSON* jsoncard_tokenization_create_request_customer_2 = card_tokenization_create_request_customer_convertToJSON(card_tokenization_create_request_customer_2);
	printf("repeating card_tokenization_create_request_customer:\n%s\n", cJSON_Print(jsoncard_tokenization_create_request_customer_2));
}

int main() {
  test_card_tokenization_create_request_customer(1);
  test_card_tokenization_create_request_customer(0);

  printf("Hello world \n");
  return 0;
}

#endif // card_tokenization_create_request_customer_MAIN
#endif // card_tokenization_create_request_customer_TEST
