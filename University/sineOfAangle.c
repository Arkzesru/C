/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : The sine of a angle with functions;
 Professor   : Eliane Nascimento Pereira;
 Description : (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste)]
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

#define pi 3.14159265358979323846

double reduct (double rad) {
    return fmod (rad, 2 * pi);
};

double torad(double graus)
{
    return graus * (pi / 180);
};

double sine(double rad)
{
    rad = reduct(rad);
    return rad - pow(rad, 3) / (3 * 2)
               + pow(rad, 5) / (5 * 4 * 3 * 2)
               - pow(rad, 7) / (7 * 6 * 5 * 4 * 3 * 2)
               + pow(rad, 9) / (9 * 8 * 7 * 6 * 5 * 4 * 3 * 2);
};

int main()
{
    double g, r, y1, y2;

    printf("Entre com um angulo em graus\n");
    scanf("%lf", &g);

    r = torad(g);

    y1 = sin(r);
    y2 = sine(r);

    printf("sin (%lf) = %.14lf\n", g, y1);
    printf("sine (%lf) = %.14lf\n", g, y2);

    return 0;
}