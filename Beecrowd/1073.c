/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 04, 2024;
 Name        : Even Square;
 Source      : Beecrowd;
 Description : Printing the square of all even numbers between 1 and the
               given number.
 ============================================================================
 */

#include <stdio.h>

void printSquareEvenNumbers(int N)
{
    for (int i = 1; i <= N; i++)
    {

        if (i % 2 == 0)
        {
            int square = i * i;

            printf("%d^2 = %d\n", i, square);
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