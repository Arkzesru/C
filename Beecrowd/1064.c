/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 24, 2024;
 Name        : Positives and Average;
 Source      : Beecrowd;
 Description : The program counts the number of positive numbers and then
               calculates their average.
 ============================================================================
 */

#include <stdio.h>

int main()
{
    float a, b, c, d, e, f, average, sum;
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    int positives;
    positives = (a > 0) + (b > 0) + (c > 0) + (d > 0) + (e > 0) + (f > 0);

    sum = (a > 0 ? a : 0) + (b > 0 ? b : 0) + (c > 0 ? c : 0) + (d > 0 ? d : 0) + (e > 0 ? e : 0) + (f > 0 ? f : 0);
    average = sum / positives;

    printf("%d positives values\n", positives);
    printf("%.1f\n", average);

    return 0;
}