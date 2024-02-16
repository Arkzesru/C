/*
 ==================================================================================
 Author      : Arkzesru;
 Date        : February 15, 2024;
 Name        : Array fill I;
 Source      : Beecrowd;
 Description : A C program that, for each position in the array, prints the index
               and the number stored at that position. The first position of the
               array is filled with the input value, and from the second position
               onwards, each element of the array is doubled.
 ==================================================================================
 */

#include <stdio.h>

void fill(int *num, int v)
{
    num[0] = v;
    printf("N[0] = %d\n", num[0]);

    for (int i = 1; i < 10; i++)
    {
        num[i] = num[i - 1] * 2;
        printf("N[%d] = %d\n", i, num[i]);
    }
}

int main()
{
    int N[10];
    int v;

    scanf("%d", &v);

    fill(N, v);

    return 0;
}