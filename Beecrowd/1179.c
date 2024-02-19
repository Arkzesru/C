/*
 ==================================================================================
 Author      : Arkzesru;
 Date        : February 19, 2024;
 Name        : Array Fill IV;
 Source      : Beecrowd;
 Description : This C program reads 15 numbers, separates them into even and odd
               numbers, and prints them in groups of at most 5 elements.
 ==================================================================================
 */

#include <stdio.h>

void inputCases(int cases[])
{
    for (int i = 0; i < 15; i++)
    {
        int x;
        scanf("%d", &x);
        cases[i] = x;
    }
}

void arrayOddEven(int array1[], int array2[])
{
    int cases[15];
    inputCases(cases);
    int j = 0, k = 0;

    for (int i = 0; i < 15; i++)
    {
        if (cases[i] % 2 == 0)
        {
            array1[j] = cases[i];
            j++;

            if (j == 5)
            {
                for (int j1 = 0; j1 < j; j1++)
                {
                    printf("par[%d] = %d\n", j1, array1[j1]);
                }
                j = 0;
            }
        }
        else
        {
            array2[k] = cases[i];
            k++;

            if (k == 5)
            {
                for (int k1 = 0; k1 < k; k1++)
                {
                    printf("impar[%d] = %d\n", k1, array2[k1]);
                }
                k = 0;
            }
        }
    }

    if (k != 0)
    {
        for (int k1 = 0; k1 < k; k1++)
        {
            printf("impar[%d] = %d\n", k1, array2[k1]);
        }
    }
    if (j != 0)
    {
        for (int j1 = 0; j1 < j; j1++)
        {
            printf("par[%d] = %d\n", j1, array1[j1]);
        }
    }
}

void ShowInfo()
{
    int A[5] = {0};
    int B[5] = {0};

    arrayOddEven(A, B);
}

int main()
{
    ShowInfo();
    return 0;
}
