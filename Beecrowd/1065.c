/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 28, 2024;
 Name        : Even Between five Numbers;
 Source      : Beecrowd;
 Description : The program counts how many even numbers are beetwen five
               numbers.
 ============================================================================
 */

#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int evens = (a % 2 == 0) + (b % 2 == 0) + (c % 2 == 0) + (d % 2 == 0) + (e % 2 == 0);

    printf("%d valores pares\n", evens);

    return 0;
}