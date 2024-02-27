/*
 ==================================================================================
 Author      : Arkzesru;
 Date        : February 27, 2024;
 Name        : Excluding repeated elements;
 Source      : Beecrowd - C1 - Eliane;
 Description : This C Program excludes repeated elements from an array.
 ==================================================================================
 */

#include <stdio.h>

void inputCases(int array[], int N)
{
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
}

void Reduct(int array[], int *N)
{
    int newSize = 0;

    for (int i = 0; i < *N; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (array[j] == array[i])
            {
                break;
            }
        }

        if (j == i)
        {
            array[newSize++] = array[i];
        }
    }

    *N = newSize;
}

void ShowInfo(int array[], int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", array[i]);
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    int vector[N];
    inputCases(vector, N);

    Reduct(vector, &N);

    ShowInfo(vector, N);

    return 0;
}