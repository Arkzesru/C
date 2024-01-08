/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 07, 2024;
 Name        : Age in Days;
 Source      : Beecrowd;
 Description : Calculating the Age in C.
 ============================================================================
 */

#include <stdio.h>

int main()
{
    int ageInDays;
    scanf("%d", &ageInDays);

    int years, months, days;

    years = ageInDays / 365;
    ageInDays %= 365;
    months = ageInDays / 30;
    ageInDays %= 30;
    days = ageInDays;

    printf("%d year(s)\n", years);
    printf("%d month(s)\n", months);
    printf("%d day(s)\n", days);

    return 0;
}