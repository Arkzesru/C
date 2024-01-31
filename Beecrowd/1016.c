/*
 ============================================================================
 Author      : Arkzesru;
 Date        : December 30, 2023;
 Name        : Distance;
 Source      : Beecrowd;
 Description : Calculating the distance traveled by a car in C.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int distance;
	scanf("%d", &distance);

	int timeInMinutes = distance * 2;

	printf("%d minutos\n", timeInMinutes);

	return 0;
}
