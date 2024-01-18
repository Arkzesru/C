/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Sin, Cos and Tan;
 Professor   : Eliane Nascimento Pereira;
 Description : (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste)]
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main()
{
    double a = M_PI / 4;

    printf("sin (%g) = %g\n", a, sin(a));
    printf("cos (%g) = %g\n", a, cos(a));
    printf("tan (%g) = %g\n", a, tan(a));

    a = -M_PI / 4;

    printf("sin (%g) = %g\n", a, sin(a));
    printf("cos (%g) = %g\n", a, cos(a));
    printf("tan (%g) = %g\n", a, tan(a));
    printf("tan (PI/2) = %g\n", tan(M_PI / 2));

    return 0;
}