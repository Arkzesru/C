/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 24, 2024;
 Name        : Odd Numbers;
 Source      : Beecrowd;
 Description : The program print the odd number between 1 and 100;
 ============================================================================
 */

#include <stdio.h>

int main()
{
    int x, i = 1;
    scanf("%d", &x);


    while (i <= x)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}