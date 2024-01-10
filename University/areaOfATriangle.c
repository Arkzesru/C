/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : The area of a triangle;
 Professor   : Eliane Nascimento Pereira;
 Description : Calculating the area of a triangle;
               (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste);
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float b, h;
    scanf("%f %f", &b, &h);

    double A = 1.0 / 2.0 * b * h;

    printf("A = %.2f\n", A);

    return 0;
}