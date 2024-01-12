/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Is it a consonant?;
 Professor   : Eliane Nascimento Pereira;
 Description : (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste);
 ============================================================================
 */

#include <stdio.h>

int main()
{
    char ch;
    int isvogal, isletra, iscons;

    scanf("%c", &ch);

    isletra = ((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z'));

    isvogal = (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U') ||
              (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u');

    iscons = isletra && !isvogal;

    printf("%d\n", iscons);

    return 0;
}