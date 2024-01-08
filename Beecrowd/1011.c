/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 07, 2024;
 Name        : Sphere;
 Source      : Beecrowd;
 Description : Calculating the volume of a sphere in C.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double R;
    scanf("%lf", &R);

    double volume = (4/3.0) * 3.14159 * pow(R, 3);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}