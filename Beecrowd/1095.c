/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 08, 2024;
 Name        : Sequence IJ 1;
 Source      : Beecrowd;
 Description : A C program that prints a predetermined sequence.
 ============================================================================
 */

#include <stdio.h>

void printingSequence()
{
    int I = 1;

    for (int J = 60; J >= 0; J -= 5, I += 3)
    {
        printf("I=%d J=%d\n", I, J);
    }
}

int main()
{
    printingSequence();
    return 0;
}