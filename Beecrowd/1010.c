/*
 ============================================================================
 Author      : Arkzesru;
 Date        : December 29, 2023;
 Name        : Simple Calculate;
 Source      : Beecrowd;
 Description : Simple Calculate in C.
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

	printf("Amount to pay: $ %.2f\n", amount);

	return 0;
}
