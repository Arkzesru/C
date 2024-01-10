/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Volume of a Sphere;
 Professor   : Eliane Nascimento Pereira;
 Description : Calculating the volume of a sphere;
               (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste);
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double r, V;
    scanf("%lf", &r);

    V = 4 / 3 * 3.14159265 * pow(r, 3);

    printf("V = %.2lf\n", V);

    return 0;
}