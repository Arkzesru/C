/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 24, 2024;
 Name        : Event Time;
 Source      : Beecrowd;
 Description : The program calculates the duration of the event at his University;
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int startDay, endDay;
    int hoursStartDate, minutesStartDate, secondsStartDate, hoursEndDate, minutesEndDate, secondsEndDate;

    scanf("Day %d", &startDay);
    scanf("%d : %d : %d\n", &hoursStartDate, &minutesStartDate, &secondsStartDate);

    scanf("Day %u", &endDay);
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

    printf("%d day(s)\n", days);
    printf("%d hour(s)\n", hours);
    printf("%d minute(s)\n", minutes);
    printf("%d second(s)\n", restOfSeconds);
    return 0;
}