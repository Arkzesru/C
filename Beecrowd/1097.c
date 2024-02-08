/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 08, 2024;
 Name        : Sequence IJ 3;
 Source      : Beecrowd;
 Description : A C program that prints a predetermined sequence.
 ============================================================================
 */

#include <stdio.h>

void printingSequence()
{
    int J = 7;

    for (int I = 1; I <= 9; I += 2, J += 5)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("I=%d J=%d\n", I, J);
            J--;
        }
    }
}

int main()
{
    printingSequence();
    return 0;
}