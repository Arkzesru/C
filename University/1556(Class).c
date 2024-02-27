/*
 ==================================================================================
 Author      : Arkzesru;
 Date        : February 27, 2024;
 Name        : Vector shortener;
 Source      : Beecrowd - C1 - Eliane;
 Description : This C program calculate the average of the numbers of a array by
               groups of "g" elements.
 ==================================================================================
 */

#include <stdio.h>
#include <math.h>

void inputCases(double array[], int N)
{
    for (int i = 0; i < N; i++)
    {
        scanf("%lf", &array[i]);
    }
}

void showInfo(double value[], int N)
{

    int g = 0;
    scanf("%d", &g);

    double sum = 0;
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        sum += value[i];
        count++;

        if (count == g)
        {
            printf("%.2lf\n", (sum / g));
            count = 0;
            sum = 0;
        }
    }

    if (count != 0)
    {
        printf("%.2lf\n", (sum / count));
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    double values[N];
    inputCases(values, N);

    showInfo(values, N);
}