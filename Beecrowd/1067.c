/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 30, 2024;
 Name        : Odd Numbers;
 Source      : Beecrowd;
 Description : The program prints the odd numbers between 1 and 100;
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