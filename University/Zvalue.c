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
    float x;
    scanf("%f", &x);

    double z = (1 + pow(x, 2) - pow((x - 2), 3)) / (x - (1.0/8.0));

    printf("z = %.2lf\n", z);

    return 0;
}