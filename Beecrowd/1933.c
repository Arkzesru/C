/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 01, 2024;
 Name        : Tri-du;
 Source      : Beecrowd;
 Description : Tri-du is a card game, the program determine the value that
               maximizes the probability of that player winning the game (in C).
 ============================================================================
 */

#include <stdio.h>

int main() {
	int A, B;
	scanf("%d %d", &A, &B);

	if (A == B) {
		printf("%d\n", A);
	} else if (A != B && A > B) {
		printf("%d\n", A);
	} else if (A != B && B > A) {
		printf("%d\n", B);
	}

	return 0;
}
