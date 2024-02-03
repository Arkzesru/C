/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 09, 2024;
 Name        : Animal;
 Source      : Beecrowd;
 Description : Selecting an animal in C.
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char AnimalType[11], AnimalType2[9], AnimalType3[11];
    scanf("%s %s %s", AnimalType, AnimalType2, AnimalType3);

    if (strcmp(AnimalType, "vertebrado") == 0)
    {
        if (strcmp(AnimalType2, "ave") == 0)
        {
            if (strcmp(AnimalType3, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else
        {
            if (strcmp(AnimalType3, "onivoro") == 0)
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }
    }
    else
    {
        if (strcmp(AnimalType2, "inseto") == 0)
        {
            if (strcmp(AnimalType3, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
            if (strcmp(AnimalType3, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}