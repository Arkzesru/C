/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Passing Parameters by Address;
 Professor   : Eliane Nascimento Pereira;
 Description : (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste)]
 ============================================================================
 */

#include <stdio.h>

int leap(int ano)
{
    return ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0);
};

int days(int m, int a)
{
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        return 31;
    }
    if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        return 30;
    }
    if (m == 2)
    {
        return 28 + leap(a);
    }
    return 0;
};

void incdate(int *pd, int *pm, int *pa)
{
    *pd = *pd + 1;
    if (*pd > days(*pm, *pa))
    {
        *pd = 1;
        *pm = *pm + 1;
        if (*pm > 12)
        {
            *pm = 1;
            *pa = *pa + 1;
        };
    };
};

int main()
{
    int day, month, year;

    printf("Date: mm dd yyyy\n");
    scanf("%d %d %d", &month, &day, &year);

    incdate(&day, &month, &year);
    printf("Next: %02d/%02d/%d\n", month, day, year);

    return 0;
}