/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 07, 2024;
 Name        : Game Time with Minutes;
 Source      : Beecrowd;
 Description : Calculating the duration of a game in hours using C.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int initialHour, initialMinute, finalHour, finalMinute;

    scanf("%d %d %d %d", &initialHour, &initialMinute, &finalHour, &finalMinute);

    int hours, minutes;

    if ((24 - initialHour + finalHour + ((60 - initialMinute + finalMinute) % 60)) % 24 == 0 || (initialHour == finalHour && ((60 - initialMinute + finalMinute) % 60) == 0))
    {
        hours = 24;
    }
    else
    {
        hours = (24 - initialHour + finalHour - ((initialMinute > finalMinute) ? 1 : 0)) % 24;
    }

    minutes = (60 - initialMinute + finalMinute) % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);

    return 0;
}