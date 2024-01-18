/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Simple calculator with integers;
 Professor   : Eliane Nascimento Pereira;
 Description : (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste)
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int calculate(int x, char ch, int y)
{
    if (ch == '-')
    {
        return (x - y);
    }
    else if (ch == '+')
    {
        return (x + y);
    }
    else if (ch == '/')
    {
        if (y != 0)
        {
            return (x / y);
        }
        else
        {
            return 999999;
        }
    }
    else if (ch == '*')
    {
        return (x * y);
    }
    else if (ch == '^')
    {
        return pow(x, y);
    }
    else if (ch == '%')
    {
        return (x % y);
    }

    return 0;
}

int main()
{
    int value1, value2;
    char operator;

    scanf("%d %c %d", &value1, &operator, & value2);

    printf("> %d %c %d = %d", value1, operator, value2, calculate(value1, operator, value2));

    return 0;
}