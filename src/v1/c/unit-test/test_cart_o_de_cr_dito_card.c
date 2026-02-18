#ifndef cart_o_de_cr_dito_card_TEST
#define cart_o_de_cr_dito_card_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_o_de_cr_dito_card_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_o_de_cr_dito_card.h"
cart_o_de_cr_dito_card_t* instantiate_cart_o_de_cr_dito_card(int include_optional);

#include "test_dados_completos_do_cart_o_expiration.c"


cart_o_de_cr_dito_card_t* instantiate_cart_o_de_cr_dito_card(int include_optional) {
  cart_o_de_cr_dito_card_t* cart_o_de_cr_dito_card = NULL;
  if (include_optional) {
    cart_o_de_cr_dito_card = cart_o_de_cr_dito_card_create(
      "0",
      "0",
      "012",
       // false, not to have infinite recursion
      instantiate_dados_completos_do_cart_o_expiration(0),
      "0",
      "0"
    );
  } else {
    cart_o_de_cr_dito_card = cart_o_de_cr_dito_card_create(
      "0",
      "0",
      "012",
      NULL,
      "0",
      "0"
    );
  }

  return cart_o_de_cr_dito_card;
}


#ifdef cart_o_de_cr_dito_card_MAIN

void test_cart_o_de_cr_dito_card(int include_optional) {
    cart_o_de_cr_dito_card_t* cart_o_de_cr_dito_card_1 = instantiate_cart_o_de_cr_dito_card(include_optional);

	cJSON* jsoncart_o_de_cr_dito_card_1 = cart_o_de_cr_dito_card_convertToJSON(cart_o_de_cr_dito_card_1);
	printf("cart_o_de_cr_dito_card :\n%s\n", cJSON_Print(jsoncart_o_de_cr_dito_card_1));
	cart_o_de_cr_dito_card_t* cart_o_de_cr_dito_card_2 = cart_o_de_cr_dito_card_parseFromJSON(jsoncart_o_de_cr_dito_card_1);
	cJSON* jsoncart_o_de_cr_dito_card_2 = cart_o_de_cr_dito_card_convertToJSON(cart_o_de_cr_dito_card_2);
	printf("repeating cart_o_de_cr_dito_card:\n%s\n", cJSON_Print(jsoncart_o_de_cr_dito_card_2));
}

int main() {
  test_cart_o_de_cr_dito_card(1);
  test_cart_o_de_cr_dito_card(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_o_de_cr_dito_card_MAIN
#endif // cart_o_de_cr_dito_card_TEST
