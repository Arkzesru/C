/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 31, 2024;
 Name        : Distance Between Two Points;
 Source      : Beecrowd;
 Description : Calculating the distance between two points in C.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4lf\n", distance);

    return 0;
}