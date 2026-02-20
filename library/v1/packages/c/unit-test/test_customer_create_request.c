#ifndef customer_create_request_TEST
#define customer_create_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_create_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_create_request.h"
customer_create_request_t* instantiate_customer_create_request(int include_optional);

#include "test_address_create_request.c"


customer_create_request_t* instantiate_customer_create_request(int include_optional) {
  customer_create_request_t* customer_create_request = NULL;
  if (include_optional) {
    customer_create_request = customer_create_request_create(
       // false, not to have infinite recursion
      instantiate_address_create_request(0),
      "a",
      payconductor_api_customer_create_request__Cpf,
      "0",
      "0",
      "a"
    );
  } else {
    customer_create_request = customer_create_request_create(
      NULL,
      "a",
      payconductor_api_customer_create_request__Cpf,
      "0",
      "0",
      "a"
    );
  }

  return customer_create_request;
}


#ifdef customer_create_request_MAIN

void test_customer_create_request(int include_optional) {
    customer_create_request_t* customer_create_request_1 = instantiate_customer_create_request(include_optional);

	cJSON* jsoncustomer_create_request_1 = customer_create_request_convertToJSON(customer_create_request_1);
	printf("customer_create_request :\n%s\n", cJSON_Print(jsoncustomer_create_request_1));
	customer_create_request_t* customer_create_request_2 = customer_create_request_parseFromJSON(jsoncustomer_create_request_1);
	cJSON* jsoncustomer_create_request_2 = customer_create_request_convertToJSON(customer_create_request_2);
	printf("repeating customer_create_request:\n%s\n", cJSON_Print(jsoncustomer_create_request_2));
}

int main() {
  test_customer_create_request(1);
  test_customer_create_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_create_request_MAIN
#endif // customer_create_request_TEST
