/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 31, 2024;
 Name        : Six Odd Numbers;
 Source      : Beecrowd;
 Description : The program prints the six consecutive odd numbers from a
               given number;
 ============================================================================
 */

#include <stdio.h>

int main()
{
    int x, i = 1;
    scanf("%d", &x);

    while (i <= 6)
    {
        if (x % 2 != 0)
        {
            printf("%d\n", x);
            i++;
        }
        x++;
    }

    return 0;
}