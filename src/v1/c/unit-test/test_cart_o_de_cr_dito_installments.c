#ifndef cart_o_de_cr_dito_installments_TEST
#define cart_o_de_cr_dito_installments_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_o_de_cr_dito_installments_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_o_de_cr_dito_installments.h"
cart_o_de_cr_dito_installments_t* instantiate_cart_o_de_cr_dito_installments(int include_optional);



cart_o_de_cr_dito_installments_t* instantiate_cart_o_de_cr_dito_installments(int include_optional) {
  cart_o_de_cr_dito_installments_t* cart_o_de_cr_dito_installments = NULL;
  if (include_optional) {
    cart_o_de_cr_dito_installments = cart_o_de_cr_dito_installments_create(
    );
  } else {
    cart_o_de_cr_dito_installments = cart_o_de_cr_dito_installments_create(
    );
  }

  return cart_o_de_cr_dito_installments;
}


#ifdef cart_o_de_cr_dito_installments_MAIN

void test_cart_o_de_cr_dito_installments(int include_optional) {
    cart_o_de_cr_dito_installments_t* cart_o_de_cr_dito_installments_1 = instantiate_cart_o_de_cr_dito_installments(include_optional);

	cJSON* jsoncart_o_de_cr_dito_installments_1 = cart_o_de_cr_dito_installments_convertToJSON(cart_o_de_cr_dito_installments_1);
	printf("cart_o_de_cr_dito_installments :\n%s\n", cJSON_Print(jsoncart_o_de_cr_dito_installments_1));
	cart_o_de_cr_dito_installments_t* cart_o_de_cr_dito_installments_2 = cart_o_de_cr_dito_installments_parseFromJSON(jsoncart_o_de_cr_dito_installments_1);
	cJSON* jsoncart_o_de_cr_dito_installments_2 = cart_o_de_cr_dito_installments_convertToJSON(cart_o_de_cr_dito_installments_2);
	printf("repeating cart_o_de_cr_dito_installments:\n%s\n", cJSON_Print(jsoncart_o_de_cr_dito_installments_2));
}

int main() {
  test_cart_o_de_cr_dito_installments(1);
  test_cart_o_de_cr_dito_installments(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_o_de_cr_dito_installments_MAIN
#endif // cart_o_de_cr_dito_installments_TEST
