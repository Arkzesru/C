/*
 ==================================================================================
 Author      : Arkzesru;
 Date        : February 21, 2024;
 Name        : Ascending and Descending;
 Source      : Beecrowd;
 Description : This program takes pairs of numbers and determines wheter they are
               in ascending or descending order. It continues prompting for pairs
               of numbers until the provided numbers are equal.
 ==================================================================================
 */

#include <stdio.h>

int Ordening(int num1, int num2)
{
    if (num1 > num2)
    {
        return 1;
    }
    else if (num1 < num2)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

void showInfo()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    while (num1 != num2)
    {
        if (Ordening(num1, num2) == 1)
        {
            printf("Decrescente\n");
        }
        else if (Ordening(num1, num2) == 2)
        {
            printf("Crescente\n");
        }

        scanf("%d %d", &num1, &num2);
    }
}

int main()
{
    showInfo();

    return 0;
}
