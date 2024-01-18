/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Calculating C;
 Professor   : Eliane Nascimento Pereira;
 Description : Calculating the value of C;
               (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste);
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);

    double c = sqrt((pow(a, 2.0) + pow(b, 2.0)) / (a - b));

    printf("z = %.2lf\n", c);

    return 0;
}