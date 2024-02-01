/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 01, 2024;
 Name        : Simple sort;
 Source      : Beecrowd;
 Description : C program to sort three numbers in ascending order.
 ============================================================================
 */

#include <stdio.h>

int lowestNumber(int num1, int num2, int num3)
{
    return ((num1 <= num2) && (num1 <= num3) ? num1 : (num3 <= num2) ? num3
                                                                     : num2);
}

int middleNumber(int num1, int num2, int num3)
{
    return (num1 >= num2 && num1 <= num3) || (num1 <= num2 && num1 >= num3) ? num1 : ((num2 >= num1 && num2 <= num3) || (num2 <= num1 && num2 >= num3) ? num2 : num3);
}

int greatestNumber(int num1, int num2, int num3)
{
    return (((num1 > num2) && (num1 > num3)) ? num1 : (num3 > num2) ? num3
                                                                    : num2);
}

void ascendingOrder(int num1, int num2, int num3)
{
    printf("%d\n", lowestNumber(num1, num2, num3));
    printf("%d\n", middleNumber(num1, num2, num3));
    printf("%d\n\n", greatestNumber(num1, num2, num3));

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
}

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    ascendingOrder(x, y, z);

    return 0;
}