/*
 ==================================================================================
 Author      : Arkzesru;
 Date        : February 18, 2024;
 Name        : Array Fill III;
 Source      : Beecrowd;
 Description : This program reads a number X and generates an N[100]. It places X
               at the first position of N and then fills subsequent positions with
               half the value of the previous positio's number. Finally, it prints
               all the elements of array N with four decimal places.
 ==================================================================================
 */

#include <stdio.h>

void arrayFill(double array[], double num)
{
    array[0] = num;

    for (int i = 1; i < 100; i++)
    {
        array[i] = num / 2.0;
        num = num / 2.0;
    }
}

void showInfo(double num)
{
    double N[100];
    arrayFill(N, num);

    for (int i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4lf\n", i, N[i]);
    }
}

int main()
{
    double X;
    scanf("%lf", &X);

    showInfo(X);

    return 0;
}