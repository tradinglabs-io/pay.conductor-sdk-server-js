#ifndef customer_address_response_TEST
#define customer_address_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_address_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_address_response.h"
customer_address_response_t* instantiate_customer_address_response(int include_optional);



customer_address_response_t* instantiate_customer_address_response(int include_optional) {
  customer_address_response_t* customer_address_response = NULL;
  if (include_optional) {
    customer_address_response = customer_address_response_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    customer_address_response = customer_address_response_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return customer_address_response;
}


#ifdef customer_address_response_MAIN

void test_customer_address_response(int include_optional) {
    customer_address_response_t* customer_address_response_1 = instantiate_customer_address_response(include_optional);

	cJSON* jsoncustomer_address_response_1 = customer_address_response_convertToJSON(customer_address_response_1);
	printf("customer_address_response :\n%s\n", cJSON_Print(jsoncustomer_address_response_1));
	customer_address_response_t* customer_address_response_2 = customer_address_response_parseFromJSON(jsoncustomer_address_response_1);
	cJSON* jsoncustomer_address_response_2 = customer_address_response_convertToJSON(customer_address_response_2);
	printf("repeating customer_address_response:\n%s\n", cJSON_Print(jsoncustomer_address_response_2));
}

int main() {
  test_customer_address_response(1);
  test_customer_address_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_address_response_MAIN
#endif // customer_address_response_TEST
