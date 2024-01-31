/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 31, 2024;
 Name        : Fuel Spent;
 Source      : Beecrowd;
 Description : Calculating the fuel spent by a car in C.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int spentTimeInHours, averageSpeedInKm;
	scanf("%d %d", &spentTimeInHours, &averageSpeedInKm);

	float fuelLitersNeeded = (spentTimeInHours * averageSpeedInKm) / 12.0;

	printf("%.3f\n", fuelLitersNeeded);

	return 0;
}
