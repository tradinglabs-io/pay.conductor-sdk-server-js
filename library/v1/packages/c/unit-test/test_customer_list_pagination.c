#ifndef customer_list_pagination_TEST
#define customer_list_pagination_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_list_pagination_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_list_pagination.h"
customer_list_pagination_t* instantiate_customer_list_pagination(int include_optional);



customer_list_pagination_t* instantiate_customer_list_pagination(int include_optional) {
  customer_list_pagination_t* customer_list_pagination = NULL;
  if (include_optional) {
    customer_list_pagination = customer_list_pagination_create(
      1.337,
      1.337,
      1.337,
      1.337
    );
  } else {
    customer_list_pagination = customer_list_pagination_create(
      1.337,
      1.337,
      1.337,
      1.337
    );
  }

  return customer_list_pagination;
}


#ifdef customer_list_pagination_MAIN

void test_customer_list_pagination(int include_optional) {
    customer_list_pagination_t* customer_list_pagination_1 = instantiate_customer_list_pagination(include_optional);

	cJSON* jsoncustomer_list_pagination_1 = customer_list_pagination_convertToJSON(customer_list_pagination_1);
	printf("customer_list_pagination :\n%s\n", cJSON_Print(jsoncustomer_list_pagination_1));
	customer_list_pagination_t* customer_list_pagination_2 = customer_list_pagination_parseFromJSON(jsoncustomer_list_pagination_1);
	cJSON* jsoncustomer_list_pagination_2 = customer_list_pagination_convertToJSON(customer_list_pagination_2);
	printf("repeating customer_list_pagination:\n%s\n", cJSON_Print(jsoncustomer_list_pagination_2));
}

int main() {
  test_customer_list_pagination(1);
  test_customer_list_pagination(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_list_pagination_MAIN
#endif // customer_list_pagination_TEST
