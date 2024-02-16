/*
 ==================================================================================
 Author      : Arkzesru;
 Date        : February 15, 2024;
 Name        : Array Selection I;
 Source      : Beecrowd;
 Description : This C program prompts the user to input 100 double-precision
               floating-point numbers. Then, it iterates through the array of these
               numbers and prints only those that are less than or equal to 10.0,
               along with their corresponding index position in the array. The
               program is designed to selectively display elements of the array
               that meet this specific criterion, providing a filtered view of
               the input numbers.
 ==================================================================================
 */

#include <stdio.h>

void selection(double *num)
{
    for (int i = 0; i < 100; i++)
    {
        scanf("%lf", &num[i]);
    }

    for (int i = 0; i < 100; i++)
    {
        if (num[i] <= 10.0)
        {
            printf("A[%d] = %.1lf\n", i, num[i]);
        }
    }
}

int main()
{
    double A[100];
    selection(A);

    return 0;
}