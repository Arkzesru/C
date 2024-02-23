/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 23, 2024;
 Name        : Dividing X by Y;
 Source      : Beecrowd;
 Description : Dividing the number X by Y.
 ============================================================================
 */

#include <stdio.h>

double Dividing(double num1, double num2)
{
    return num1 / num2;
}

void ShowInfo(int num1)
{
    for (int i = 0; i < num1; i++)
    {
        double X, Y;
        scanf("%lf %lf", &X, &Y);

        if (Y == 0.0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1lf\n", Dividing(X, Y));
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    ShowInfo(N);

    return 0;
}