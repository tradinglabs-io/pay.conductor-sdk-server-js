#ifndef address_create_request_TEST
#define address_create_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define address_create_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/address_create_request.h"
address_create_request_t* instantiate_address_create_request(int include_optional);



address_create_request_t* instantiate_address_create_request(int include_optional) {
  address_create_request_t* address_create_request = NULL;
  if (include_optional) {
    address_create_request = address_create_request_create(
      "0",
      "BR",
      "0",
      "0",
      "01",
      "0",
      "0"
    );
  } else {
    address_create_request = address_create_request_create(
      "0",
      "BR",
      "0",
      "0",
      "01",
      "0",
      "0"
    );
  }

  return address_create_request;
}


#ifdef address_create_request_MAIN

void test_address_create_request(int include_optional) {
    address_create_request_t* address_create_request_1 = instantiate_address_create_request(include_optional);

	cJSON* jsonaddress_create_request_1 = address_create_request_convertToJSON(address_create_request_1);
	printf("address_create_request :\n%s\n", cJSON_Print(jsonaddress_create_request_1));
	address_create_request_t* address_create_request_2 = address_create_request_parseFromJSON(jsonaddress_create_request_1);
	cJSON* jsonaddress_create_request_2 = address_create_request_convertToJSON(address_create_request_2);
	printf("repeating address_create_request:\n%s\n", cJSON_Print(jsonaddress_create_request_2));
}

int main() {
  test_address_create_request(1);
  test_address_create_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // address_create_request_MAIN
#endif // address_create_request_TEST
