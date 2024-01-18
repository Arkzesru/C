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
    double x, y, z;
    scanf("%lf %lf", &x, &y);

    z = (x / y) - (x + pow((x / y), (1 / 2))) / (x - pow((x / y), (2 / 7)));

    printf("z = %lf\n", z);

    return 0;
}