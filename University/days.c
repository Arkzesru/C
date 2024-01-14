/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Number of days in the month and in the year;
 Professor   : Eliane Nascimento Pereira;
 Description : (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste)]
 ============================================================================
 */

#include <stdio.h>

int isbiss(int year)
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
int amountOfDays(int month)
{
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 1;
    }
    else if (month == 2)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

void showInfo(int x, int y)
{
    if (amountOfDays(x) == 1)
    {
        printf("Mes (%d), tem 30 dias\n", x);
    }
    else if (amountOfDays(x) == 0)
    {
        printf("Mes (%d), tem 31 dias\n", x);
    }
    else if ((amountOfDays(x) == 2) && isbiss(y))
    {
        printf("Mes (%d), tem 29 dias\n", x);
    }
    else if ((amountOfDays(x) == 2) && !isbiss(y))
    {
        printf("Mes (%d), tem 28 dias\n", x);
    }

    if (isbiss(y))
    {
        printf("O ano (%d), tem 366 dias\n", y);
    }
    else
    {
        printf("O ano (%d), tem 365 dias\n", y);
    }
}
int main()
{
    int month, year;
    scanf("%u %u", &month, &year);

    showInfo(month, year);

    return 0;
}