/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 02, 2024;
 Name        : Triangle Types;
 Source      : Beecrowd;
 Description : C program for identifying the type of triangle formed by three
               numbers.
 ============================================================================
 */

#include <stdio.h>

struct Order
{
    double greatest;
    double middle;
    double lowest;
};

struct Order decreasingOrder(double A, double B, double C)
{
    struct Order resp;

    resp.greatest = (A >= B && A >= C) ? A : (B >= A && B >= C) ? B
                                                                : C;
    resp.middle = (A <= B && A >= C) ? A : (B >= A && B <= C) ? B
                                                              : C;
    resp.lowest = (A <= B && A <= C) ? A : (B <= A && B <= C) ? B
                                                              : C;

    return resp;
}

void showInfo(double A, double B, double C)
{
    struct Order resp;

    resp = decreasingOrder(A, B, C);

    A = resp.greatest;
    B = resp.middle;
    C = resp.lowest;

    if (A >= (B + C))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if ((A * A) == ((B * B) + (C * C)))
        {
            printf("TRIANGULO RETANGULO\n");
        }

        if ((A * A) > B * B + C * C)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }

        if ((A * A) < ((B * B) + (C * C)))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if ((A == B) && (B == C))
        {
            printf("TRIANGULO EQUILATERO\n");
        }

        if ((A == B && A != C) || (A == C && A != B) || (C == B && B != A))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
}

int main()
{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    showInfo(A, B, C);

    return 0;
}