/*
 ================================================================================
 Author      : Arkzesru;
 Date        : January 01, 2024;
 Name        : Crowstorm;
 Source      : Beecrowd;
 Description : The ultimate skill to catch the invader in C. The program
 			   calculates whether the character, upon using the teleportation
			   ability towards the invader, would successfully catch the invader
			   if they run in the opposite direction 
 ================================================================================
 */

#include <stdio.h>
#include <math.h>

int main() {
	int x1, y1, x2, y2, vi, r1, r2;

	while (scanf("%d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &vi, &r1, &r2)
			!= EOF) {
		double xy = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
		double distance = sqrt(xy);

		double distanceInvader = distance + (vi * 1.50);
		double range = (r1 + r2);

		if (range >= distanceInvader) {
			printf("Y\n");
		} else {
			printf("N\n");
		}
	}

	return 0;
}
