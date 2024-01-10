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
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    double z = 3 / (1/a + 1/b + 1/c);

    printf("z = %.2lf\n", z);

    return 0;
}