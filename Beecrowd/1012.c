/*
 ============================================================================
 Author      : Arkzesru;
 Date        : December 30, 2023;
 Name        : Area;
 Source      : Beecrowd;
 Description : Calculating area in C.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float a, b, c;

	scanf("%f %f %f", &a, &b, &c);

	float rectangledTriangle = (a * c) / 2;
	float circle = 3.14159 * (c * c);
	float trapezium = ((a + b) * c) / 2;
	float square = b * b;
	float rectangle = a * b;

	printf(
		"TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",
		rectangledTriangle, circle, trapezium, square, rectangle);

	return 0;
}
