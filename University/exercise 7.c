/*
 ==================================================================================
 Author      : Arkzesru;
 Date        : February 21, 2024;
 Name        : Eliane's Class Presentation on Vectors;
 Source      : Powerpoint vectors;
 Description : This C program reads n pairs of integer numbers, representing
               respectively the month and the year. Then, it informs the number of
               days in that month of the given year.
 ==================================================================================
 */

#include <stdio.h>

int LeapYearVerification(int year)
{

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int NumberOfDaysMonth(int month, int year)
{
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (LeapYearVerification(year))
    {
        months[1] = 29;
    }

    return months[month - 1];
}

void showInfo(int num1)
{

    for (int i = 0; i < num1; i++)
    {
        int month, year;
        scanf("%d %d", &month, &year);

        printf("%d\n", NumberOfDaysMonth(month, year));
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    showInfo(N);

    return 0;
}