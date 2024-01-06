/*
 ============================================================================
 Author      : Arkzesru;
 Date        : 01/01/2024;
 Name        : Coffee Machine;
 Source      : Beecrowd;
 Description : The best floor for placing a coffee machine in C.
 ============================================================================
 */

#include <stdio.h>

int main() {
	int a1, a2, a3;
	scanf("%d", &a1);
	scanf("%d", &a2);
	scanf("%d", &a3);

	int m1, m2, m3;

	m1 = (a2 * 2) + (a3 * 4);
	m2 = (a1 * 2) + (a3 * 2);
	m3 = (a1 * 4) + (a2 * 2);

	int mi, mii;

	mi = (m1 < m2) ? (m1 < m3 ? m1 : m3) : (m2 < m3 ? m2 : m3);
	mii = (mi < m2) ? mi : m2;

	printf("%d\n", mii);

	return 0;
}
