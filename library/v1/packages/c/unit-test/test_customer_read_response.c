#ifndef customer_read_response_TEST
#define customer_read_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_read_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_read_response.h"
customer_read_response_t* instantiate_customer_read_response(int include_optional);

#include "test_customer_address_response.c"


customer_read_response_t* instantiate_customer_read_response(int include_optional) {
  customer_read_response_t* customer_read_response = NULL;
  if (include_optional) {
    customer_read_response = customer_read_response_create(
      "0",
      "0",
      "0",
      payconductor_api_customer_read_response__Cpf,
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_customer_address_response(0),
      "0",
      "0"
    );
  } else {
    customer_read_response = customer_read_response_create(
      "0",
      "0",
      "0",
      payconductor_api_customer_read_response__Cpf,
      "0",
      "0",
      NULL,
      "0",
      "0"
    );
  }

  return customer_read_response;
}


#ifdef customer_read_response_MAIN

void test_customer_read_response(int include_optional) {
    customer_read_response_t* customer_read_response_1 = instantiate_customer_read_response(include_optional);

	cJSON* jsoncustomer_read_response_1 = customer_read_response_convertToJSON(customer_read_response_1);
	printf("customer_read_response :\n%s\n", cJSON_Print(jsoncustomer_read_response_1));
	customer_read_response_t* customer_read_response_2 = customer_read_response_parseFromJSON(jsoncustomer_read_response_1);
	cJSON* jsoncustomer_read_response_2 = customer_read_response_convertToJSON(customer_read_response_2);
	printf("repeating customer_read_response:\n%s\n", cJSON_Print(jsoncustomer_read_response_2));
}

int main() {
  test_customer_read_response(1);
  test_customer_read_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_read_response_MAIN
#endif // customer_read_response_TEST
