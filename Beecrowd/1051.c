/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 02, 2024;
 Name        : Taxes;
 Source      : Beecrowd;
 Description : Determining the taxes according to the salary.
 ============================================================================
 */

#include <stdio.h>

double defineTaxes(double num1)
{
    if (num1 >= 0.00 && num1 <= 2000.00)
    {
        return 1;
    }
    else if (num1 >= 2000.01 && num1 <= 3000.00)
    {
        return (num1 - 2000) * 0.08;
    }
    else if (num1 >= 3000.01 && num1 <= 4500.00)
    {
        return 1000.00 * 0.08 + (num1 - 3000.00) * 0.18;
    }
    else
    {
        return 1000.00 * 0.08 + 1500 * 0.18 + (num1 - 4500) * 0.28;
    }
}

void showInfo(double num1)
{
    if (defineTaxes(num1) == 1)
    {
        printf("Isento\n");
    }
    else if (defineTaxes(num1))
    {
        printf("R$ %.2lf\n", defineTaxes(num1));;
    }
}

int main()
{
    double salaryInhabitant;
    scanf("%lf", &salaryInhabitant);

    showInfo(salaryInhabitant);

    return 0;
}