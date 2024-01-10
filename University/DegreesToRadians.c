/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Converting Degree to Radian;
 Professor   : Eliane Nascimento Pereira;
 Description : The forma converts degrees to radians;
               (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste);
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int degree;
    scanf("%d", &degree);

    double rad = 3.14159265 * degree / 180;

    printf("rad = %.2lf\n", rad);

    return 0;
}