/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 01, 2024;
 Name        : Snack;
 Source      : Beecrowd;
 Description : Calculating the total amount of an item based on its code in C.
 ============================================================================
 */

#include <stdio.h>

float price(int numb1)
{
    return (numb1 == 1 ? 4.00 : numb1 == 2 ? 4.50
                              : numb1 == 3 ? 5.00
                              : numb1 == 4 ? 2.00
                                           : 1.50);
}

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);

    float totalAmount = price(X) * Y;

    printf("Total: R$ %.2f\n", totalAmount);

    return 0;
}