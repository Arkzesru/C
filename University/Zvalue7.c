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

#define e 2.718281828459
#define PI 3.14159265

int main()
{
    double x, z;
    scanf("%lf", &x);

    z = sqrt(PI + sqrt(pow(e, 3.0) + sqrt(4 + sqrt(x))));

    printf("z = %lf\n", z);

    return 0;
}