/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 07, 2024;
 Name        : Salary;
 Source      : Beecrowd;
 Description : Calculating an employee's salary in C.
 ============================================================================
 */

#include <stdio.h>

int main()
{
    int employeesNumber, workedHours;
    float salaryPerHour;

    scanf("%d", &employeesNumber);
    scanf("%d", &workedHours);
    scanf("%f", &salaryPerHour);

    float salary = workedHours * salaryPerHour;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", employeesNumber, salary);

    return 0;
}