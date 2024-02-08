/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 08, 2024;
 Name        : Sequence IJ 3;
 Source      : Beecrowd;
 Description : A C program that prints a predetermined sequence of values
               for variables I and J.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int isInteger(double a)
{

    int partInt = (int)a;

    if (fabs(a - partInt) < 0.001)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void printingSequence()
{
    double J = 1;

    for (double I = 0.0; I <= 2; I += 0.2)
    {
        int prints = 1;

        while (prints <= 3)
        {
            if (isInteger(I) || isInteger(J))
            {
                I = ceil(I);
                J = ceil(J);

                int integer = (int)I;
                int integer2 = (int)J;

                printf("I=%d J=%d\n", integer, integer2);
                prints++;
                J++;
            }
            else
            {
                printf("I=%.1lf J=%.1lf\n", I, J);
                prints++;
                J++;
            }
        }
        J = J - 3 + 0.2;

        if (isInteger(J)){
            J--;
        }
    }
}

int main()
{
    printingSequence();
    return 0;
}