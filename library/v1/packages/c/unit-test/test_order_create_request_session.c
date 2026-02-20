#ifndef order_create_request_session_TEST
#define order_create_request_session_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_create_request_session_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_create_request_session.h"
order_create_request_session_t* instantiate_order_create_request_session(int include_optional);



order_create_request_session_t* instantiate_order_create_request_session(int include_optional) {
  order_create_request_session_t* order_create_request_session = NULL;
  if (include_optional) {
    order_create_request_session = order_create_request_session_create(
      15,
      "0",
      "0",
      "0123456789101112131415"
    );
  } else {
    order_create_request_session = order_create_request_session_create(
      15,
      "0",
      "0",
      "0123456789101112131415"
    );
  }

  return order_create_request_session;
}


#ifdef order_create_request_session_MAIN

void test_order_create_request_session(int include_optional) {
    order_create_request_session_t* order_create_request_session_1 = instantiate_order_create_request_session(include_optional);

	cJSON* jsonorder_create_request_session_1 = order_create_request_session_convertToJSON(order_create_request_session_1);
	printf("order_create_request_session :\n%s\n", cJSON_Print(jsonorder_create_request_session_1));
	order_create_request_session_t* order_create_request_session_2 = order_create_request_session_parseFromJSON(jsonorder_create_request_session_1);
	cJSON* jsonorder_create_request_session_2 = order_create_request_session_convertToJSON(order_create_request_session_2);
	printf("repeating order_create_request_session:\n%s\n", cJSON_Print(jsonorder_create_request_session_2));
}

int main() {
  test_order_create_request_session(1);
  test_order_create_request_session(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_create_request_session_MAIN
#endif // order_create_request_session_TEST
