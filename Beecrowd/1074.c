/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 05, 2024;
 Name        : Even or Odd;
 Source      : Beecrowd;
 Description : Determining wheter a given number is even, odd, positve or
               negative.
 ============================================================================
 */

#include <stdio.h>

void printSquareEvenNumbers(int N)
{
    for (int i = 1; i <= N; i++)
    {
        int X;
        scanf("%d", &X);

        if (X == 0)
        {
            printf("NULL\n");
        }
        else if (X < 0 && X % 2 == 0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if (X < 0 && X % 2 != 0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if (X > 0 && X % 2 != 0)
        {
            printf("ODD POSITIVE\n");
        }
        else if (X > 0 && X % 2 == 0)
        {
            printf("EVEN POSITIVE\n");
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    printSquareEvenNumbers(N);

    return 0;
}