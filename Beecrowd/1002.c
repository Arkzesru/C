/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 07, 2024;
 Name        : Area of a Circle;
 Source      : Beecrowd;
 Description : Calculating the area of a circle in C.
 ============================================================================
 */

#include <stdio.h>

int main()
{
    double R;
    scanf("%lf", &R);

    double A = 3.14159 * (R * R);

    printf("A=%.4lf\n", A);

    return 0;
}