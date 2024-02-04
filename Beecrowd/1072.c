/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 04, 2024;
 Name        : Interval 2;
 Source      : Beecrowd;
 Description : Determining how many numbers are within and how many are
               outside the range [10,20] in C.
 ============================================================================
 */

#include <stdio.h>

void interval(int N, int *in, int *out)
{
    *in = 0;
    *out = 0;

    for (int i = 1; i <= N; i++)
    {
        int X;
        scanf("%d", &X);

        if (X >= 10 && X <= 20)
        {
            (*in)++;
        }
        else
        {
            (*out)++;
        }
    }
}

void showInfo(int N)
{
    int in, out;
    interval(N, &in, &out);

    printf("%d in\n", in);
    printf("%d out\n", out);
}

int main()
{
    int N;
    scanf("%d", &N);

    showInfo(N);
}