/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 14, 2024;
 Name        : Sequence of Numbers and Sum;
 Source      : Beecrowd;
 Description : A program that prints the sequence of given numbers
               (from smallest to largest) and provides their sum.
 ============================================================================
 */

#include <stdio.h>

void printing()
{
    int A, B;
    scanf("%d %d", &A, &B);

    while (A > 0 && B > 0)
    {
        int sum = 0;

        if (B > A)
        {
            int temp = A;
            A = B;
            B = temp;
        }

        for (int i = B; i <= A; i++)
        {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);

        scanf("%d %d", &A, &B);
    }
}

int main()
{
    printing();

    return 0;
}