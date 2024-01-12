/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Angle Clock;
 Professor   : Eliane Nascimento Pereira;
 Description : (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste);
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double h, m;

    while (scanf("%lf %lf", &h, &m) != EOF)
    {
        double hoursAngle, minutesAngle;

        minutesAngle = (360 / 60) * m;
        hoursAngle = (360 / 12) * h + 0.5 * m;

        double angleDifference = fabs(hoursAngle - minutesAngle);

        if (angleDifference > 180) {
            angleDifference = 360 - angleDifference;
        }

        printf("angulo = %.2lf\n", angleDifference);
    }

    return 0;
}