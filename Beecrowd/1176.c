/*
 ==================================================================================
 Author      : Arkzesru;
 Date        : February 16, 2024;
 Name        : Fibonacci Array;
 Source      : Beecrowd;
 Description : Program that displays the terms of the Fibonacci sequence
               (up to term 60) in C
 ==================================================================================
 */

#include <stdio.h>
#include <math.h>

void fibonacciArray(unsigned long long int array[])
{
    array[0] = 0;
    array[1] = 1;

    for (int i = 2; i <= 60; i++)
    {
        array[i] = array[i - 1] + array[i - 2];
    }
}

void showInfo(int T)
{
    unsigned long long int fibonacci[60];
    fibonacciArray(fibonacci);

    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%u", &N);

        printf("Fib(%u) = %llu\n", N, fibonacci[N]);
    }
}

int main()
{
    int T;
    scanf("%d", &T);

    showInfo(T);

    return 0;
}