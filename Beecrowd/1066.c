/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 29, 2024;
 Name        : Even, Odd, Positive and Negative;
 Source      : Beecrowd;
 Description : The program counts how many values are even, odd, positive or
               negative.
 ============================================================================
 */

#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int even, odd, positive, negative;

    even = (a % 2 == 0) + (b % 2 == 0) + (c % 2 == 0) + (d % 2 == 0) + (e % 2 == 0);
    odd = (a % 2 != 0) + (b % 2 != 0) + (c % 2 != 0) + (d % 2 != 0) + (e % 2 != 0);
    positive = (a > 0) + (b > 0) + (c > 0) + (d > 0) + (e > 0);
    negative = (a < 0) + (b < 0) + (c < 0) + (d < 0) + (e < 0);

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);

    return 0;
}
