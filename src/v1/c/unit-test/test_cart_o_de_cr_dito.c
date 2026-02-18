#ifndef cart_o_de_cr_dito_TEST
#define cart_o_de_cr_dito_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_o_de_cr_dito_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_o_de_cr_dito.h"
cart_o_de_cr_dito_t* instantiate_cart_o_de_cr_dito(int include_optional);

#include "test_cart_o_de_cr_dito_card.c"
#include "test_cart_o_de_cr_dito_installments.c"


cart_o_de_cr_dito_t* instantiate_cart_o_de_cr_dito(int include_optional) {
  cart_o_de_cr_dito_t* cart_o_de_cr_dito = NULL;
  if (include_optional) {
    cart_o_de_cr_dito = cart_o_de_cr_dito_create(
      "0",
      null,
      null,
      "0"
    );
  } else {
    cart_o_de_cr_dito = cart_o_de_cr_dito_create(
      "0",
      null,
      null,
      "0"
    );
  }

  return cart_o_de_cr_dito;
}


#ifdef cart_o_de_cr_dito_MAIN

void test_cart_o_de_cr_dito(int include_optional) {
    cart_o_de_cr_dito_t* cart_o_de_cr_dito_1 = instantiate_cart_o_de_cr_dito(include_optional);

	cJSON* jsoncart_o_de_cr_dito_1 = cart_o_de_cr_dito_convertToJSON(cart_o_de_cr_dito_1);
	printf("cart_o_de_cr_dito :\n%s\n", cJSON_Print(jsoncart_o_de_cr_dito_1));
	cart_o_de_cr_dito_t* cart_o_de_cr_dito_2 = cart_o_de_cr_dito_parseFromJSON(jsoncart_o_de_cr_dito_1);
	cJSON* jsoncart_o_de_cr_dito_2 = cart_o_de_cr_dito_convertToJSON(cart_o_de_cr_dito_2);
	printf("repeating cart_o_de_cr_dito:\n%s\n", cJSON_Print(jsoncart_o_de_cr_dito_2));
}

int main() {
  test_cart_o_de_cr_dito(1);
  test_cart_o_de_cr_dito(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_o_de_cr_dito_MAIN
#endif // cart_o_de_cr_dito_TEST
