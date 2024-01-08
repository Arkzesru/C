/*
 ============================================================================
 Author      : Arkzesru;
 Date        : December 30, 2023;
 Name        : Triangle;
 Source      : Beecrowd;
 Description : Find if three numbers make a triangle in C.
 ============================================================================
 */

#include <stdio.h>

int main() {
	float A, B, C;
	scanf("%f %f %f", &A, &B, &C);

	if ((A + B) > C && (B + C) > A && (A + C) > B) {
		float perimeter = A + B + C;
		printf("Perimeter = %.1f\n", perimeter);
	} else {
		float areaTrapezium = ((B + A) * C) / 2;
		printf("Area = %.1f\n", areaTrapezium);
	}

	return 0;
}
