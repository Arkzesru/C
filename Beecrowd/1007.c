/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 07, 2024;
 Name        : Difference;
 Source      : Beecrowd;
 Description : Calculating the difference of two products in C.
 ============================================================================
 */

#include <stdio.h>

int main()
{
    int A, B, C, D;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    int difference = (A * B - C * D);

    printf("DIFFERENCE = %d\n", difference);

    return 0;
}