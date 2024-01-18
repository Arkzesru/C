/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Bills and Coins;
 Professor   : Eliane Nascimento Pereira;
 Description : 1021 (URI Online Judge).
               (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste);
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double bills;
    scanf("%lf", &bills);

    int banknotes = floor(bills);
    int coins = (bills - banknotes) * 100;

    int b100, b50, b20, b10, b5, b2;
    int b1, b05, b025, b010, b005;

    b100 = banknotes / 100;
    banknotes %= 100;
    b50 = banknotes / 50;
    banknotes %= 50;
    b20 = banknotes / 20;
    banknotes %= 20;
    b10 = banknotes / 10;
    banknotes %= 10;
    b5 = banknotes / 5;
    banknotes %= 5;
    b2 = banknotes / 2;
    banknotes %= 2;
    b1 = banknotes;

    b05 = coins / 50;
    coins %= 50;
    b025 = coins / 25;
    coins %= 25;
    b010 = coins / 10;
    coins %= 10;
    b005 = coins / 5;
    coins %= 5;

    printf("NOTAS:\n");
    printf("%u nota(s) de R$ 100,00\n", b100);
    printf("%u nota(s) de R$ 50,00\n", b50);
    printf("%u nota(s) de R$ 20,00\n", b20);
    printf("%u nota(s) de R$ 10,00\n", b10);
    printf("%u nota(s) de R$ 5,00\n", b5);
    printf("%u nota(s) de R$ 2,00\n", b2);

    printf("MOEDAS:\n");
    printf("%u moeda(s) de R$ 1,00\n", b1);
    printf("%u moeda(s) de R$ 0,50\n", b05);
    printf("%u moeda(s) de R$ 0,25\n", b025);
    printf("%u moeda(s) de R$ 0,10\n", b010);
    printf("%u moeda(s) de R$ 0,05\n", b005);
    printf("%u moeda(s) de R$ 0,01\n", coins);

    return 0;
}