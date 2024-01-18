/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Time Conversion;
 Professor   : Eliane Nascimento Pereira;
 Description : 1019 (URI Online Judge).
               (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste);
 ============================================================================
 */

#include <stdio.h>

int main()
{
    int secondsTotal;
    scanf("%u", &secondsTotal);

    int hours, minutes, seconds;

    hours = secondsTotal / 3600;
    secondsTotal %= 3600;

    minutes = secondsTotal / 60;
    secondsTotal %= 60;

    seconds = secondsTotal;

    printf("%u:%u:%u\n", hours, minutes, seconds);

    return 0;
}