/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 24, 2024;
 Name        : Even Numbers;
 Source      : Beecrowd;
 Description : The program prints all even number between 1 and 100;
 ============================================================================
 */

#include <stdio.h>

int main()
{
    int i = 1;

    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}