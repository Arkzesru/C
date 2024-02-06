/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 06, 2024;
 Name        : Multiplication Table;
 Source      : Beecrowd;
 Description : C program that reads a number and shows the multiplication
               table of the given number.
 ============================================================================
 */

#include <stdio.h>

void Multiplication(int Num)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, Num, i * Num);
    }
}

void showInfo(int num)
{
    Multiplication(num);
}

int main()
{
    int N;
    scanf("%d", &N);

    showInfo(N);

    return 0;
}