/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 03, 2024;
 Name        : Sum of Consecutive Odd Numbers I;
 Source      : Beecrowd;
 Description : C program that prints the sum of all consecutive odd numbers
               between two given numbers.
 ============================================================================
 */

#include <stdio.h>

int sumOddNumbers(int num1, int num2)
{
    int lowest = (num1 <= num2) ? num1 : num2;
    int greatest = (num1 >= num2) ? num1 : num2;

    int sum = 0;

    for (int i = lowest + 1; i < greatest; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    return sum;
}

void showInfo(int num1, int num2)
{
    printf("%d\n", sumOddNumbers(num1, num2));
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    showInfo(x, y);

    return 0;
}