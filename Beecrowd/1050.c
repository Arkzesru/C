/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 02, 2024;
 Name        : DDD;
 Source      : Beecrowd;
 Description : Determining the area code (DDD) using C.
 ============================================================================
 */

#include <stdio.h>

void showInfo(int num1)
{
    if (num1 == 61)
    {
        printf("Brasilia\n");
    }
    else if (num1 == 71)
    {
        printf("Salvador\n");
    }
    else if (num1 == 11)
    {
        printf("Sao Paulo\n");
    }
    else if (num1 == 21)
    {
        printf("Rio de Janeiro\n");
    }
    else if (num1 == 32)
    {
        printf("Juiz de Fora\n");
    }
    else if (num1 == 19)
    {
        printf("Campinas\n");
    }
    else if (num1 == 27)
    {
        printf("Vitoria\n");
    }
    else if (num1 == 31)
    {
        printf("Belo Horizonte\n");
    }
    else
    {
        printf("DDD nao cadastrado\n");
    }
}

int main()
{
    int ddd;
    scanf("%d", &ddd);

    showInfo(ddd);

    return 0;
}