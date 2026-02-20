#ifndef customer_update_request_TEST
#define customer_update_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_update_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_update_request.h"
customer_update_request_t* instantiate_customer_update_request(int include_optional);

#include "test_address_create_request.c"


customer_update_request_t* instantiate_customer_update_request(int include_optional) {
  customer_update_request_t* customer_update_request = NULL;
  if (include_optional) {
    customer_update_request = customer_update_request_create(
       // false, not to have infinite recursion
      instantiate_address_create_request(0),
      "a",
      payconductor_api_customer_update_request__Cpf,
      "0",
      "0",
      "a"
    );
  } else {
    customer_update_request = customer_update_request_create(
      NULL,
      "a",
      payconductor_api_customer_update_request__Cpf,
      "0",
      "0",
      "a"
    );
  }

  return customer_update_request;
}


#ifdef customer_update_request_MAIN

void test_customer_update_request(int include_optional) {
    customer_update_request_t* customer_update_request_1 = instantiate_customer_update_request(include_optional);

	cJSON* jsoncustomer_update_request_1 = customer_update_request_convertToJSON(customer_update_request_1);
	printf("customer_update_request :\n%s\n", cJSON_Print(jsoncustomer_update_request_1));
	customer_update_request_t* customer_update_request_2 = customer_update_request_parseFromJSON(jsoncustomer_update_request_1);
	cJSON* jsoncustomer_update_request_2 = customer_update_request_convertToJSON(customer_update_request_2);
	printf("repeating customer_update_request:\n%s\n", cJSON_Print(jsoncustomer_update_request_2));
}

int main() {
  test_customer_update_request(1);
  test_customer_update_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_update_request_MAIN
#endif // customer_update_request_TEST
