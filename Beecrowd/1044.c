/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 02, 2024;
 Name        : Multiples;
 Source      : Beecrowd;
 Description : C program for checking if two numbers are multiples.
 ============================================================================
 */

#include <stdio.h>

int areTheyMultiple(int num1, int num2)
{
    return ((num2 % num1 == 0) || (num1 % num2 == 0));
}

void showInfo(int num1, int num2)
{
    if (areTheyMultiple(num1, num2))
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
}

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    showInfo(A, B);

    return 0;
}