/*
 ==================================================================================
 Author      : Arkzesru;
 Date        : February 20, 2024;
 Name        : Lowest Number and Position;
 Source      : Beecrowd;
 Description : This C program reads a sequence of integers and finds the lowest
               value and its position int the sequence. It then displays the lowest
               value and its position.
 ==================================================================================
 */

#include <stdio.h>

void inputCases(int array[], int num)
{
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
}

void lowestNumberAndPosition(int N, int *lowest, int *position)
{
    int x[N];
    inputCases(x, N);

    *lowest = x[0];
    *position = 0;

    for (int i = 0; i < N; i++)
    {
        if (x[i] < *lowest)
        {
            *lowest = x[i];
            *position = i;
        }
    }
}

void showInfo(int num)
{
    int position = 0, lowest = 0;
    lowestNumberAndPosition(num, &lowest, &position);

    printf("Menor valor: %d\n", lowest);
    printf("Posicao: %d\n", position);
}

int main()
{
    int N;
    scanf("%d", &N);

    showInfo(N);

    return 0;
}
