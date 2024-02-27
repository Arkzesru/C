/*
 ==================================================================================
 Author      : Arkzesru;
 Date        : February 27, 2024;
 Name        : Assessing heights;
 Source      : Beecrowd - C1 - Eliane;
 Description : This C program reads the height of N people, and then prints on the
               screen the shortest and tallest heights within the group.
 ==================================================================================
 */

#include <stdio.h>

void inputCases(double heights[], int N)
{
    for (int i = 0; i < N; i++)
    {
        scanf("%lf", &heights[i]);
    }
}

void showInfo(int N)
{
    double Heights[N];
    inputCases(Heights, N);

    double lowest = Heights[0];
    double greatest = Heights[0];

    for (int i = 0; i < N; i++)
    {
        if (Heights[i] < lowest)
        {
            lowest = Heights[i];
        }
        if (Heights[i] > greatest)
        {
            greatest = Heights[i];
        }
    }

    printf("%.1lf\n%.1lf\n", lowest, greatest);
}

int main()
{
    int N;
    scanf("%d", &N);

    showInfo(N);
}