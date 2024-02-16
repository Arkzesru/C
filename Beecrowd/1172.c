/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 15, 2024;
 Name        : Array Replacement I;
 Source      : Beecrowd;
 Description : A C program that, for each position in the array, prints the
               index and the number stored at that position.
 ============================================================================
 */

#include <stdio.h>

void Replacement(int *num)
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);

        if (num[i] <= 0)
        {
            num[i] = 1;
        }

        printf("X[%d] = %d\n", i, num[i]);
    }
}

int main()
{
    int X[10];

    Replacement(X);

    return 0;
}