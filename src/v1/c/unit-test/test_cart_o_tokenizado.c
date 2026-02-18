#ifndef cart_o_tokenizado_TEST
#define cart_o_tokenizado_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_o_tokenizado_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_o_tokenizado.h"
cart_o_tokenizado_t* instantiate_cart_o_tokenizado(int include_optional);



cart_o_tokenizado_t* instantiate_cart_o_tokenizado(int include_optional) {
  cart_o_tokenizado_t* cart_o_tokenizado = NULL;
  if (include_optional) {
    cart_o_tokenizado = cart_o_tokenizado_create(
      "0",
      "0"
    );
  } else {
    cart_o_tokenizado = cart_o_tokenizado_create(
      "0",
      "0"
    );
  }

  return cart_o_tokenizado;
}


#ifdef cart_o_tokenizado_MAIN

void test_cart_o_tokenizado(int include_optional) {
    cart_o_tokenizado_t* cart_o_tokenizado_1 = instantiate_cart_o_tokenizado(include_optional);

	cJSON* jsoncart_o_tokenizado_1 = cart_o_tokenizado_convertToJSON(cart_o_tokenizado_1);
	printf("cart_o_tokenizado :\n%s\n", cJSON_Print(jsoncart_o_tokenizado_1));
	cart_o_tokenizado_t* cart_o_tokenizado_2 = cart_o_tokenizado_parseFromJSON(jsoncart_o_tokenizado_1);
	cJSON* jsoncart_o_tokenizado_2 = cart_o_tokenizado_convertToJSON(cart_o_tokenizado_2);
	printf("repeating cart_o_tokenizado:\n%s\n", cJSON_Print(jsoncart_o_tokenizado_2));
}

int main() {
  test_cart_o_tokenizado(1);
  test_cart_o_tokenizado(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_o_tokenizado_MAIN
#endif // cart_o_tokenizado_TEST
