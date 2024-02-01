/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 01, 2024;
 Name        : Triangle;
 Source      : Beecrowd;
 Description : C program to determine if three numbers can form a triangle.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float A, B, C;
	scanf("%f %f %f", &A, &B, &C);

	if ((A + B) > C && (B + C) > A && (A + C) > B)
	{
		float perimeter = A + B + C;
		printf("Perimetro = %.1f\n", perimeter);
	}
	else
	{
		float areaTrapezium = ((B + A) * C) / 2;
		printf("Area = %.1f\n", areaTrapezium);
	}

	return 0;
}
