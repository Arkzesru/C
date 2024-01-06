/*
 ============================================================================
 Author      : Arkzesru;
 Date        : 01/01/2024;
 Name        : Odd, Even or Cheating;
 Source      : Beecrowd;
 Description : A simple game in C.
 ============================================================================
 */

#include <stdio.h>

int main() {
	int p, p1, p2, r, a;
	scanf("%d %d %d %d %d", &p, &p1, &p2, &r, &a);

	if (r && a) {
		printf("Player 2 wins!\n");
	} else if (r && a == 0) {
		printf("Player 1 wins!\n");
	} else if (r == 0 && a) {
		printf("Player 1 wins!\n");
	} else {
		int sum = p1 + p2;

		if (sum % 2 == 0 && p) {
			printf("Player 1 wins!\n");
		} else if (sum % 2 != 0 && p == 0) {
			printf("Player 1 wins!\n");
		} else {
			printf("Player 2 wins!\n");
		}
	}

	return 0;
}
