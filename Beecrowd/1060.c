/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 25, 2024;
 Name        : Positive Numbers;
 Source      : Beecrowd;
 Description : The program prints the total number of positive numbers.
 ============================================================================
 */

#include <stdio.h>

int main()
{
    float a, b, c, d, e, f;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    int isPositive = (a > 0) + (b > 0) + (c > 0) + (d > 0) + (e > 0) + (f > 0);

    printf("%d valores positivos\n", isPositive);

    return 0;
}