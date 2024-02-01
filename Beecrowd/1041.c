/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 01, 2024;
 Name        : Coordinates of a Point;
 Source      : Beecrowd;
 Description : C program to determine the quadrant of a point.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float x, y;
	scanf("%f %f", &x, &y);

	if (x == 0 && y == 0)
	{
		printf("Origem\n");
	}
	else if (x != 0 && y == 0)
	{
		printf("Eixo X");
	}
	else if (x == 0 && y != 0)
	{
		printf("Eixo Y\n");
	}
	else if (x > 0 && y > 0)
	{
		printf("Q1\n");
	}
	else if (x < 0 && y > 0)
	{
		printf("Q2\n");
	}
	else if (x < 0 && y < 0)
	{
		printf("Q3\n");
	}
	else
	{
		printf("Q4\n");
	}

	return 0;
}
