/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 07, 2024;
 Name        : Experiments;
 Source      : Beecrowd;
 Description : This C program reads the number of animals, their quantities,
               and types (C for rabbits, R for rats, and S for frogs). Then,
               it calculates and displays the total number of animals, the
               quantity of each type of animal, and the percentage of each
               type of animal relative to the total number of animals.
 ============================================================================
 */

#include <stdio.h>

void LoopingCases(int N, int *amount, int *amountTotal, char *animalType)
{
    *amountTotal = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d %c", &amount[i], &animalType[i]);

        (*amountTotal) += amount[i];
    }
}


int AnimalTotalSum(int N, int *amount, int *amountTotal, char *animalType)
{
    LoopingCases(N, amount, amountTotal, animalType);

    return *amountTotal;
}

void AnimalTypeSum(int N, int *amount, int *c, int *r, int *s, char *animalType)
{
    *c = 0;
    *r = 0;
    *s = 0;

    for (int i = 0; i < N; i++)
    {
        if (animalType[i] == 'C')
        {
            (*c) += amount[i];
        }
        else if (animalType[i] == 'R')
        {
            (*r) += amount[i];
        }
        else if (animalType[i] == 'S')
        {
            (*s) += amount[i];
        }
    }
}

void percentualOfTypeAnimal(int N, int *amount, int * amountTotal, char * animalType, int *c, int *r, int *s, double *rabbits, double *rats, double *frogs)
{
    *amountTotal = AnimalTotalSum(N, amount, amountTotal, animalType);
    AnimalTypeSum(N, amount, c, r, s, animalType);

    int totalAnimals = *amountTotal;

    *rabbits = ((double)*c / totalAnimals) * 100;
    *rats = ((double)*r / totalAnimals) * 100;
    *frogs = ((double)*s / totalAnimals) * 100;
}

void ShowInfo(int N, int *amount, int c, int r, int s, char *animalType, int *amountTotal)
{
    double rabbits = 0, rats = 0, frogs = 0;
    percentualOfTypeAnimal(N, amount, amountTotal, animalType, &c, &r, &s, &rabbits, &rats, &frogs);

    printf("Total: %d cobaias\n", *amountTotal);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2lf %%\n", rabbits);
    printf("Percentual de ratos: %.2lf %%\n", rats);
    printf("Percentual de sapos: %.2lf %%\n", frogs);
}

int main()
{
    int N;
    scanf("%d", &N);

    int amount[N];
    char animalType[N];
    int amountTotal = 0;

    ShowInfo(N, amount, 0, 0, 0, animalType, &amountTotal);

    return 0;
}