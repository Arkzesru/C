/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 26, 2024;
 Name        : Event Time;
 Source      : Beecrowd;
 Description : The program calculates the duration of the event at their
               University;
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int startDay, endDay;
    int hoursStartDate, minutesStartDate, secondsStartDate, hoursEndDate, minutesEndDate, secondsEndDate;

    printf("Dia ");
    scanf("%d", &startDay);
    scanf("%d : %d : %d", &hoursStartDate, &minutesStartDate, &secondsStartDate);

    printf("Dia ");
    scanf("%u", &endDay);
    scanf("%d : %d : %d", &hoursEndDate, &minutesEndDate, &secondsEndDate);

    int days, hours, minutes;

    long int initialTotalSeconds = secondsStartDate + (minutesStartDate * 60) + (hoursStartDate * 3600) + (startDay * 86400);
    long int endingTotalSeconds = secondsEndDate + (minutesEndDate * 60) + (hoursEndDate * 3600) + (endDay * 86400);

    int restOfSeconds = endingTotalSeconds - initialTotalSeconds;

    days = restOfSeconds / 86400;
    restOfSeconds %= 86400;
    hours = restOfSeconds / 3600;
    restOfSeconds %= 3600;
    minutes = restOfSeconds / 60;
    restOfSeconds %= 60;

    if (hours == 24)
    {
        hours = 0;
    }

    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", restOfSeconds);
    return 0;
}