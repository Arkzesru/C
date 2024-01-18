/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Repetition Exercise;
 Professor   : Eliane Nascimento Pereira;
 Description : (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste)]
 ============================================================================
 */

#include <stdio.h>

int main()
{
    int n = 0;
    double x, average, sum = 0.0, greater;

    scanf("%lf", &x);
    greater = x;

    while (x != -1)
    {
        n++;

        sum += x;
        average = sum / n;

        if (greater < x)
        {
            greater = x;
        };

        scanf("%lf", &x);
    }

    printf("Average = %.2lf\n", average);
    printf("Greater = %.2lf\n", greater);

    return 0;
}