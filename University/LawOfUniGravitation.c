/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Newton's Law of Universal Gravitation (Formula);
 Professor   : Eliane Nascimento Pereira;
 Description : (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste)]
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double G, m1, m2, F, r;
    scanf("%lf %lf %lf", &m1, &m2, &r);

    G = 6.67 * pow(10, -11);

    F = G * ((m1 * m2) / (r * r));

    printf("F = %.2lf N\n", F);

    return 0;
}