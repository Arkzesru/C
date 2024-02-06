/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 06, 2024;
 Name        : Weighted Averages;
 Source      : Beecrowd;
 Description : C program that prints the weighted average for a set of three
               given numbers.
 ============================================================================
 */

#include <stdio.h>

void WeightedAverages(int Num)
{
    for (int i = 1; i <= Num; i++)
    {
        double a, b, c, average;
        scanf("%lf %lf %lf", &a, &b, &c);

        average = ((a * 2 + b * 3 + c * 5) / 10.0);

        printf("%.1lf\n", average);
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    WeightedAverages(N);

    return 0;
}