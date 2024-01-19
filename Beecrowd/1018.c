/*
 ============================================================================
 Author      : Arkzesru;
 Date        : December 30, 2023;
 Name        : Banknotes;
 Source      : Beecrowd;
 Description : Write a program in C to distribute a given amount using the
			   smallest number of bills possible.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int value;

	scanf("%d", &value);

	int oneDollar, twoDollars, fiveDollars, tenDollars, twenyDollars,
		fiftyDollars, oneHundredDollars;

	oneHundredDollars = value / 100;
	fiftyDollars = (value % 100) / 50;
	twenyDollars = ((value % 100) % 50) / 20;
	tenDollars = (((value % 100) % 50) % 20) / 10;
	fiveDollars = ((((value % 100) % 50) % 20) % 10) / 5;
	twoDollars = (((((value % 100) % 50) % 20) % 10) % 5) / 2;
	oneDollar = ((((((value % 100) % 50) % 20) % 10) % 5) % 2) / 1;

	printf(
		"%d\n%d bills of $ 100.00\n%d bills of $ 50.00\n%d bills of $ 20.00\n%d bills of $ 10.00\n%d bills of $ 5.00\n%d bills of $ 2.00\n%d bills of $ 1.00\n",
		value, oneHundredDollars, fiftyDollars, twenyDollars, tenDollars,
		fiveDollars, twoDollars, oneDollar);

	return 0;
}
