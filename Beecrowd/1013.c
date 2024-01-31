/*
 ============================================================================
 Author      : Arkzesru;
 Date        : December 30, 2023;
 Name        : Area;
 Source      : The Greatest;
 Description : A C program to determine the largest among three numbers.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	int greaterAB = (a + b + abs(a - b)) / 2;
	int greatest = (greaterAB + c + abs(greaterAB - c)) / 2;

	printf("%d eh o maior\n", greatest);

	return 0;
}
