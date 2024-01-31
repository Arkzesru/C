/*
 ============================================================================
 Author      : Arkzesru;
 Date        : December 30, 2023;
 Name        : Consumption;
 Source      : Beecrowd;
 Description : Calculating fuel Consumption in C.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int totalDistance;
	float fuelConsumption;

	scanf("%d %f", &totalDistance, &fuelConsumption);

	float averageConsumption = totalDistance / fuelConsumption;
	printf("%.3f km/l\n", averageConsumption);

	return 0;
}
