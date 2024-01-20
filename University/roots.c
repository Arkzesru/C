/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Discovering the roots of a quadratic equation.;
 Professor   : Eliane Nascimento Pereira;
 Description : (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste)]
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

void findroot(double a, double b, double c, double *root1, double *root2)
{
    double delta = ((b * b) - 4 * a * c);

    if (a == 0)
    {
        *root1 = *root2 = -1;
    }
    else
    {
        if (delta < 0)
        {
            *root1 = *root2 = 1;
        }
        else
        {
            *root1 = ((-b + sqrt(delta)) / (2 * a));
            *root2 = ((+b + sqrt(delta)) / (2 * a));
        }
    }
}

void showInfo(double a, double b, double c)
{
    double root1, root2;
    findroot(a, b, c, &root1, &root2);

    if (root1 == -1)
    {
        printf("NAO E EQUACAO DO SEGUNDO GRAU\n");
    }
    else if (root1 == 1)
    {
        printf("NAO POSSUI RAIZES REAIS\n");
    }
    else
    {
        printf("R1: %.2lf\n", root1);
        printf("R2: %.2lf\n", root2);
    }
}

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    showInfo(a, b, c);

    return 0;
}