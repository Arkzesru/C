/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Calculating the Body Mass Index (IMC) ;
 Professor   : Eliane Nascimento Pereira;
 Description : Calculating the IMC;
               (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste);
 ============================================================================
 */

#include <stdio.h>

int main()
{
    double weight, height, IMC;
    char gender;

    printf("Enter the gender (M or F): ");
    scanf("%c", &gender);
    printf("Enter the weight: ");
    scanf("%lf", &weight);
    printf("Enter the height: ");
    scanf("%lf", &height);

    IMC = weight / (height * height);

    printf("Your Body Mass Index = %6.2lf", IMC);

    return 0;
}
