/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Discovering the status of the roots;
 Professor   : Eliane Nascimento Pereira;
 Description : (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste)]
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int statusroot(double a, double b, double c)
{
    double delta = (b * b) - 4 * a * c;

    if (a == 0)
    {
        return 1;
    }
    else if (delta < 0)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

void showInfo(double a, double b, double c)
{
    printf("code = {%d}\n", statusroot(a, b, c));
}

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    showInfo(a, b, c);

    return 0;
}