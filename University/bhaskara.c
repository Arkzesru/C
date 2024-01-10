/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : The Bhaskara formula;
 Professor   : Eliane Nascimento Pereira;
 Description : (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste);
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double x1 = (-b + sqrt(pow(b, 2.0) - (4 * a * c))) / (2 * a);
    double x2 = (-b - sqrt(pow(b, 2.0) - (4 * a * c))) / (2 * a);

    if ((b * b) - (4 * a * c) < 0)
    {
        printf("Nao tem raizes\n");
    }
    else
    {
        printf("x1 = %.2lf\nx2 = %.3lf", x1, x2);
    }

    return 0;
}