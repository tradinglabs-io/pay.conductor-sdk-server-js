#ifndef order_fraud_fingerprints_TEST
#define order_fraud_fingerprints_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define order_fraud_fingerprints_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/order_fraud_fingerprints.h"
order_fraud_fingerprints_t* instantiate_order_fraud_fingerprints(int include_optional);



order_fraud_fingerprints_t* instantiate_order_fraud_fingerprints(int include_optional) {
  order_fraud_fingerprints_t* order_fraud_fingerprints = NULL;
  if (include_optional) {
    order_fraud_fingerprints = order_fraud_fingerprints_create(
      "0"
    );
  } else {
    order_fraud_fingerprints = order_fraud_fingerprints_create(
      "0"
    );
  }

  return order_fraud_fingerprints;
}


#ifdef order_fraud_fingerprints_MAIN

void test_order_fraud_fingerprints(int include_optional) {
    order_fraud_fingerprints_t* order_fraud_fingerprints_1 = instantiate_order_fraud_fingerprints(include_optional);

	cJSON* jsonorder_fraud_fingerprints_1 = order_fraud_fingerprints_convertToJSON(order_fraud_fingerprints_1);
	printf("order_fraud_fingerprints :\n%s\n", cJSON_Print(jsonorder_fraud_fingerprints_1));
	order_fraud_fingerprints_t* order_fraud_fingerprints_2 = order_fraud_fingerprints_parseFromJSON(jsonorder_fraud_fingerprints_1);
	cJSON* jsonorder_fraud_fingerprints_2 = order_fraud_fingerprints_convertToJSON(order_fraud_fingerprints_2);
	printf("repeating order_fraud_fingerprints:\n%s\n", cJSON_Print(jsonorder_fraud_fingerprints_2));
}

int main() {
  test_order_fraud_fingerprints(1);
  test_order_fraud_fingerprints(0);

  printf("Hello world \n");
  return 0;
}

#endif // order_fraud_fingerprints_MAIN
#endif // order_fraud_fingerprints_TEST
