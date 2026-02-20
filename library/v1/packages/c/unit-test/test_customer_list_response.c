#ifndef customer_list_response_TEST
#define customer_list_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_list_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_list_response.h"
customer_list_response_t* instantiate_customer_list_response(int include_optional);

#include "test_customer_list_pagination.c"


customer_list_response_t* instantiate_customer_list_response(int include_optional) {
  customer_list_response_t* customer_list_response = NULL;
  if (include_optional) {
    customer_list_response = customer_list_response_create(
      list_createList(),
       // false, not to have infinite recursion
      instantiate_customer_list_pagination(0)
    );
  } else {
    customer_list_response = customer_list_response_create(
      list_createList(),
      NULL
    );
  }

  return customer_list_response;
}


#ifdef customer_list_response_MAIN

void test_customer_list_response(int include_optional) {
    customer_list_response_t* customer_list_response_1 = instantiate_customer_list_response(include_optional);

	cJSON* jsoncustomer_list_response_1 = customer_list_response_convertToJSON(customer_list_response_1);
	printf("customer_list_response :\n%s\n", cJSON_Print(jsoncustomer_list_response_1));
	customer_list_response_t* customer_list_response_2 = customer_list_response_parseFromJSON(jsoncustomer_list_response_1);
	cJSON* jsoncustomer_list_response_2 = customer_list_response_convertToJSON(customer_list_response_2);
	printf("repeating customer_list_response:\n%s\n", cJSON_Print(jsoncustomer_list_response_2));
}

int main() {
  test_customer_list_response(1);
  test_customer_list_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_list_response_MAIN
#endif // customer_list_response_TEST
