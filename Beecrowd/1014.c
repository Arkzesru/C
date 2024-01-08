/*
 ============================================================================
 Author      : Arkzesru;
 Date        : December 29, 2023;
 Name        : Consumption;
 Source      : Beecrowd;
 Description : Fuel Consumption in C.
 ============================================================================
 */

#include <stdio.h>

int main() {
	int totalDistance;
	float fuelConsumption;

	scanf("%d %f", &totalDistance, &fuelConsumption);

	float averageConsumption = totalDistance / fuelConsumption;
	printf("%.3f km/l\n", averageConsumption);

	return 0;
}
