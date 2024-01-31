/*
 ============================================================================
 Author      : Arkzesru;
 Date        : December 30, 2023;
 Name        : Simple Calculate;
 Source      : Beecrowd;
 Description : Simple calculation in C.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int code, units, code2, units2;
	float price, price2;

	scanf("%d %d %f", &code, &units, &price);
	scanf("%d %d %f", &code2, &units2, &price2);

	float amount = (price * units) + (price2 * units2);

	printf("VALOR A PAGAR: R$ %.2f\n", amount);

	return 0;
}
