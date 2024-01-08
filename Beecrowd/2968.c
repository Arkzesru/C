/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 02, 2024;
 Name        : Hour for a Run;
 Source      : Beecrowd;
 Description : Assisting a runner in C.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main() {
	int laps, signs;
	scanf("%d %d", &laps, &signs);

	int totalSigns = laps * signs;

	int ten, tweny, tirty, forty, fifty, sixty, seventy, eighty, ninety;

	ten = ceil(totalSigns * 0.10);
	tweny = ceil(totalSigns * 0.20);
	tirty = ceil(totalSigns * 0.30);
	forty = ceil(totalSigns * 0.40);
	fifty = ceil(totalSigns * 0.50);
	sixty = ceil(totalSigns * 0.60);
	seventy = ceil(totalSigns * 0.70);
	eighty = ceil(totalSigns * 0.80);
	ninety = ceil(totalSigns * 0.90);

	printf("%d %d %d %d %d %d %d %d %d\n", ten, tweny, tirty, forty, fifty,
			sixty, seventy, eighty, ninety);

	return 0;
}
