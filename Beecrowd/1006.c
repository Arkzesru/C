/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 07, 2024;
 Name        : Average 2;
 Source      : Beecrowd;
 Description : Calculating the average of three numbers in C.
 ============================================================================
 */

#include <stdio.h>

int main()
{
    double A, B, C;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    double average = (A * 2 + B * 3 + C * 5) / 10;

    printf("MEDIA = %.1lf\n", average);

    return 0;
}