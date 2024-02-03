/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 02, 2024;
 Name        : Month;
 Source      : Beecrowd;
 Description : Determining the month based on the given number.
 ============================================================================
 */

#include <stdio.h>

const char* month(int num)
{
    if (num == 1)
    {
        return "January";
    }
    else if (num == 2)
    {
        return "February";
    }
    else if (num == 3)
    {
        return "March";
    }
    else if (num == 4)
    {
        return "April";
    }
    else if (num == 5)
    {
        return "May";
    }
    else if (num == 6)
    {
        return "June";
    }
    else if (num == 7)
    {
        return "July";
    }
    else if (num == 8)
    {
        return "August";
    }
    else if (num == 9)
    {
        return "September";
    }
    else if (num == 10)
    {
        return "October";
    }
    else if (num == 11)
    {
        return "November";
    }
    else
    {
        return "December";
    }
}

void showInfo(int num)
{
    printf("%s\n", month(num));
}

int main()
{
    int month;
    scanf("%d", &month);

    showInfo(month);

    return 0;
}