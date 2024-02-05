/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 05, 2024;
 Name        : Remaining 2;
 Source      : Beecrowd;
 Description : Printing all numbers between 1 and 10000, when divided by
               'n' yield a remainder of 2
 ============================================================================
 */

#include <stdio.h>

void printNumbers(int N)
{
    for (int i = 1; i <= 10000; i++)
    {
        if (i % N == 2)
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    printNumbers(N);

    return 0;
}