/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 07, 2024;
 Name        : Salary with Bonus;
 Source      : Beecrowd;
 Description : Calculating the salary and the bonus of a employee in C.
 ============================================================================
 */

#include <stdio.h>

int main()
{
    char sellersName;
    double fixedSalary, totalValueSold;

    scanf("%s", &sellersName);
    scanf("%lf", &fixedSalary);
    scanf("%lf", &totalValueSold);

    double amount = fixedSalary + (totalValueSold * 0.15);

    printf("TOTAL = R$ %.2lf\n", amount);

    return 0;
}