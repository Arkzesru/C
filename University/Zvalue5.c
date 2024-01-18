/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Calculating Z;
 Professor   : Eliane Nascimento Pereira;
 Description : Calculating the value of Z;
               (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste);
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double x, z;
    scanf("%lf", &x);

    z = 1 + (1 / x) + 1 / (x * x) + 1 / pow(x, 2) + 1 / pow(x, 3) + 1 / pow(x, 4);

    printf("z = %lf\n", z);

    return 0;
}