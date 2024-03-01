/*
 ==================================================================================
 Author      : Arkzesru;
 Date        : March 01, 2024;
 Name        : Odd/Even Increments;
 Source      : Beecrowd - C1 - Eliane;
 Description : This program prompts the user for an integer 'N', followed by 'N'
               sets of numbers. For each set, it calculates the sum of the numbers
               and determines wheter this sum is even or odd. Then, it prints "YES"
               if the sum is even, and "NO", otherwise.
 ==================================================================================
 */

#include <stdio.h>

int sum(int array[], int j)
{
    int aux = 0;

    for (int i = 0; i < j; i++)
    {
        aux += array[i];
    }

    return aux;
}

void ShowInfo(int N)
{

    for (int i = 0; i < N; i++)
    {
        int j;
        scanf("%d", &j);
        int array[j];
        
        for (int k = 0; k < j; k++)
        {
            scanf("%d", &array[k]);
        }

        if (sum(array, j) % 2 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    ShowInfo(N);
}