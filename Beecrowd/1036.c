/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 31, 2024;
 Name        : Bhaskara's Formula;
 Source      : Beecrowd;
 Description : Bhaskara's Formula in C.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double delta, r1, r2;

    delta = pow(B, 2.0) - (4.0 * A * C);

    if (delta <= 0 || A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        r1 = (-B + sqrt(delta)) / (2 * A);
        r2 = (-B - sqrt(delta)) / (2 * A);
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }

    return 0;
}