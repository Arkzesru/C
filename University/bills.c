/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Bills and Coins;
 Professor   : Eliane Nascimento Pereira;
 Description : 1019 (URI Online Judge).
               (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste);
 ============================================================================
 */

#include <stdio.h>

int main()
{
    int bills;
    scanf("%u", &bills);

    int b100, b50, b20, b10, b5, b2, b1;

    b100 = bills / 100;
    bills %= 100;
    b50 = bills / 50;
    bills %= 50;
    b20 = bills / 20;
    bills %= 20;
    b10 = bills / 10;
    bills %= 10;
    b5 = bills / 5;
    bills %= 5;
    b2 = bills / 2;
    bills %= 2;
    b1 = bills;

    printf("%u nota(s) de R$ 100,00\n", b100);
    printf("%u nota(s) de R$ 50,00\n", b50);
    printf("%u nota(s) de R$ 20,00\n", b20);
    printf("%u nota(s) de R$ 10,00\n", b10);
    printf("%u nota(s) de R$ 5,00\n", b5);
    printf("%u nota(s) de R$ 2,00\n", b2);
    printf("%u nota(s) de R$ 1,00\n", b1);

    return 0;
}