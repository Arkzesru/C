/*
 ==================================================================================
 Author      : Arkzesru;
 Date        : February 17, 2024;
 Name        : Array Fill II;
 Source      : Beecrowd;
 Description : This program fills a fixed-size array with consecutive values up to
               a specified limit provided by the user and prints the content of the
               array.
 ==================================================================================
 */

#include <stdio.h>

void FillVector(int array[1000], int num)
{
    for (int i = 0; i < 1000;)
    {
        for (int aux = 0; aux < num && i < 1000; aux++, i++)
        {
            array[i] = aux;
        }
    }
}

void showInfo(int a)
{
    int N[1000];
    FillVector(N, a);

    for (int i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }
}

int main()
{
    int T;
    scanf("%d", &T);

    showInfo(T);

    return 0;
}