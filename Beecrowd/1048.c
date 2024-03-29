/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 09, 2024;
 Name        : Salary Increase;
 Source      : Beecrowd;
 Description : Calculating salary increases for employees in C.
 ============================================================================
 */

#include <stdio.h>

int main()
{
    double salary;
    scanf("%lf", &salary);

    double percentIncrease;

    if (salary <= 400.00)
    {
        percentIncrease = 0.15;
    }
    else if (salary <= 800.00)
    {
        percentIncrease = 0.12;
    }
    else if (salary <= 1200.00)
    {
        percentIncrease = 0.10;
    }
    else if (salary <= 2000.00)
    {
        percentIncrease = 0.07;
    }
    else
    {
        percentIncrease = 0.04;
    }

    double increase = salary * percentIncrease;
    double newSalary = salary + increase;

    printf("Novo salario: %.2lf\n", newSalary);
    printf("Reajuste ganho: %.2lf\n", increase);
    printf("Em percentual: %.lf %%\n", percentIncrease * 100);

    return 0;
}