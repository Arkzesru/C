/*
 ============================================================================
 Author      : Arkzesru;
 Date        : December 30, 2023;
 Name        : Time Zone;
 Source      : Beecrowd;
 Description : Find the arrival time of a trip in C.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int departureTime, travelTime, destinationTimeZone;

	scanf("%d %d %d", &departureTime, &travelTime, &destinationTimeZone);

	int arrivalTime = (departureTime + travelTime + destinationTimeZone + 24) % 24;

	printf("%d\n", arrivalTime);

	return 0;
}
