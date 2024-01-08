/*
 ============================================================================
 Author      : Arkzesru;
 Date        : December 30, 2023;
 Name        : Area;
 Source      : Beecrowd;
 Description : Calculating Area in C.
 ============================================================================
 */

#include <stdio.h>

int main() {
	float a, b, c;

	scanf("%f %f %f", &a, &b, &c);

	float rectangledTriangle = (a * c) / 2;
	float circle = 3.14159 * (c * c);
	float trapezium = ((a + b) * c) / 2;
	float square = b * b;
	float rectangle = a * b;

	printf(
			"TRIANGLE: %.3f\nCIRCLE: %.3f\nTRAPEZIUM: %.3f\nSQUARE: %.3f\nRECTANGLE: %.3f\n",
			rectangledTriangle, circle, trapezium, square, rectangle);

	return 0;
}
