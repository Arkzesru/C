/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Antique Clock;
 Professor   : Eliane Nascimento Pereira;
 Description : 3084 (URI Online Judge).
               (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste);
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int h, m;

    while (scanf("%u %u", &h, &m) != EOF)
    {
        int hours, minutes;

        hours = h / 30;
        minutes = m / 6;

        printf("%02d:%02d\n", hours, minutes);
    }

    return 0;
}