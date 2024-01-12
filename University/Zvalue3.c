/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Calculating Z;
 Professor   : Eliane Nascimento Pereira;
 Description : Calculating the value of Z;
               (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste);
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);

    double z = sqrt(pow(x, 2.0) + pow(y, 3.0)) / fabs(x + y);

    printf("%lf", z);
    
    return 0;
}