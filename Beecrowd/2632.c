/*
 ============================================================================
 Author      : Arkzesru;
 Date        : 01/04/2024;
 Name        : Magic And Sword;
 Source      : Beecrowd;
 Description : Determining skill damage based on the enemy's location within
 			   the affected area in C.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main() {
	int T;
	scanf("%d", &T);

	for (int i = 1; i <= T; i++) {
		int w, h, x0, y0, level, cx, cy;
		scanf("%d %d %d %d", &w, &h, &x0, &y0);
		char spellIdentifier[6];
		scanf("%s %d %d %d", spellIdentifier, &level, &cx, &cy);

		int y2 = y0 + h;
		int x2 = x0 + w;

		int closestX = fmax(x0, fmin(cx, x2));
		int closestY = fmax(y0, fmin(cy, y2));

		double distance = sqrt(
				(cx - closestX) * (cx - closestX)
						+ (cy - closestY) * (cy - closestY));

		int damage, radius;

		switch (level) {
		case 1:
			radius = (strcmp(spellIdentifier, "fire") == 0) ? 20 :
						(strcmp(spellIdentifier, "water") == 0) ? 10 :
						(strcmp(spellIdentifier, "earth") == 0) ? 25 :
						(strcmp(spellIdentifier, "air") == 0) ? 18 : 0;
			break;
		case 2:
			radius = (strcmp(spellIdentifier, "fire") == 0) ? 30 :
						(strcmp(spellIdentifier, "water") == 0) ? 25 :
						(strcmp(spellIdentifier, "earth") == 0) ? 55 :
						(strcmp(spellIdentifier, "air") == 0) ? 38 : 0;
			break;
		case 3:
			radius = (strcmp(spellIdentifier, "fire") == 0) ? 50 :
						(strcmp(spellIdentifier, "water") == 0) ? 40 :
						(strcmp(spellIdentifier, "earth") == 0) ? 70 :
						(strcmp(spellIdentifier, "air") == 0) ? 60 : 0;
			break;
		default:
			radius = 0;
		}
		;

		if (distance <= radius) {
			if (strcmp(spellIdentifier, "fire") == 0) {
				damage = 200;
				printf("%d\n", damage);
			} else if (strcmp(spellIdentifier, "water") == 0) {
				damage = 300;
				printf("%d\n", damage);
			} else if (strcmp(spellIdentifier, "earth") == 0) {
				damage = 400;
				printf("%d\n", damage);
			} else if (strcmp(spellIdentifier, "air") == 0) {
				damage = 100;
				printf("%d\n", damage);
			}
		} else {
			damage = 0;
			printf("%d\n", damage);
		}
	}

	return 0;
}
