/*
 ============================================================================
 Author      : Arkzesru;
 Date        : December 31, 2023;
 Name        : Banknotes and coins;
 Source      : Beecrowd;
 Description : A C program to distribute a given amount using the
			   smallest number of bills and coins possible.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
	double money;
	scanf("%lf", &money);

	int oneHundredDollars, fiftyDollars, twenyDollars, tenDollars, fiveDollars,
		twoDollars;
	int oneDollar, halfDollar, quarter, dime, nickel, penny;

	int bills = money * 100;

	oneHundredDollars = bills / 10000;
	bills %= 10000;

	fiftyDollars = bills / 5000;
	bills %= 5000;

	twenyDollars = bills / 2000;
	bills %= 2000;

	tenDollars = bills / 1000;
	bills %= 1000;

	fiveDollars = bills / 500;
	bills %= 500;

	twoDollars = bills / 200;
	bills %= 200;

	oneDollar = bills / 100;
	bills %= 100;

	halfDollar = bills / 50;
	bills %= 50;

	quarter = bills / 25;
	bills %= 25;

	dime = bills / 10;
	bills %= 10;

	nickel = bills / 5;
	bills %= 5;

	penny = bills;

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", oneHundredDollars);
	printf("%d nota(s) de R$ 50.00\n", fiftyDollars);
	printf("%d nota(s) de R$ 20.00\n", twenyDollars);
	printf("%d nota(s) de R$ 10.00\n", tenDollars);
	printf("%d nota(s) de R$ 5.00\n", fiveDollars);
	printf("%d nota(s) de R$ 2.00\n", twoDollars);

	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", oneDollar);
	printf("%d moeda(s) de R$ 0.50\n", halfDollar);
	printf("%d moeda(s) de R$ 0.25\n", quarter);
	printf("%d moeda(s) de R$ 0.10\n", dime);
	printf("%d moeda(s) de R$ 0.05\n", nickel);
	printf("%d moeda(s) de R$ 0.01\n", penny);

	return 0;
}
