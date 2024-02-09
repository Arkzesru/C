/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 09, 2024;
 Name        : Sum of Consecutive Odd Numbers II;
 Source      : Beecrowd;
 Description : A C program that calculates the sum of odd numbers beetwen two
               given numbers.
 ============================================================================
 */

#include <stdio.h>

int testCases(int N, int *j, int *k)
{
    for (int i = 0; i < N; i++)
    {
        int X, Y;
        scanf("%d %d", &X, &Y);
        *j = X;
        *k = Y;
    }

    return 0;
}

int OddSum(int j, int k)
{
    if (j > k)
    {
        int temp = j;
        j = k;
        k = temp;
    }

    int sum = 0;

    for (int i = j + 1; i < k; i++)
    {

        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    return sum;
}

void showInfo(int N)
{
    int a, b;

    for (int i = 0; i < N; i++)
    {
        testCases(1, &a, &b);
        printf("%d\n", OddSum(a, b));
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    showInfo(N);

    return 0;
}