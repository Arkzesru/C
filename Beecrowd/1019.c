/*
 ============================================================================
 Author      : Arkzesru;
 Date        : December 30, 2023;
 Name        : Time Conversion;
 Source      : Beecrowd;
 Description : Time Conversion (from seconds to hours, minutes, and second) in C.
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int durationInSeconds;

	scanf("%d", &durationInSeconds);

	int hours, minutes, seconds;

	hours = durationInSeconds / 3600;
	minutes = (durationInSeconds % 3600) / 60;
	seconds = (durationInSeconds % 60) % 60;

	printf("%d:%d:%d\n", hours, minutes, seconds);

	return 0;
}
