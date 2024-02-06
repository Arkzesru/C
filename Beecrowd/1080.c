/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 06, 2024;
 Name        : Highest and Position;
 Source      : Beecrowd;
 Description : A C program that displays the highest input and its position.
 ============================================================================
 */

#include <stdio.h>

void readingOneHundredNumbers(int *highest, int *position)
{
    for (int i = 1; i <= 100; i++)
    {
        int x;
        scanf("%d", &x);

        if (x >= *highest)
        {
            *highest = x;
            *position = i;
        }
    }
}

void showInfo(int *highest, int *position)
{
    printf("%d\n%d\n", *highest, *position);
}

int main()
{
    int highest = 0; 
    int position = 0;

    readingOneHundredNumbers(&highest, &position);
    showInfo(&highest, &position);

    return 0;
}