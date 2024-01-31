/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 07, 2024;
 Name        : Average 1;
 Source      : Beecrowd;
 Description : Calculating the average of two numbers in C.
 ============================================================================
 */

#include <stdio.h>

int main()
{
    double A, B;
    scanf("%lf", &A);
    scanf("%lf", &B);

    double average = (A * 3.5 + B * 7.5) / 11;

    printf("MEDIA = %.5lf\n", average);

    return 0;
}