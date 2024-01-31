/*
 ============================================================================
 Author      : Arkzesru;
 Date        : January 07, 2024;
 Name        : Selection Test 1;
 Source      : Beecrowd;
 Description : Validation of values in C.
 ============================================================================
 */

#include <stdio.h>

int main()
{
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    int select = (B > C) && (D > A) && ((C + D) > (A + B)) && (C > 0 && D > 0) && (A % 2 == 0);

    if (select)
    {
        printf("Valores nao aceitos\n");
    }
    else
    {
        printf("Valores aceitos\n");
    }

    return 0;
}