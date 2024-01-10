/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Area of a Circle;
 Professor   : Eliane Nascimento Pereira;
 Description : Calculating the Area of a Circle in C. (Exercise from the
               Introduction to Programming material);

               (First semester of Computer Science at Unioeste);
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double area, r;
    scanf("%lf", &r);

    area = 3.14159265 * (pow(r, 2.0));

    printf("A = %.3lf", area);

    return 0;
}