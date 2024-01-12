/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : The number of vowels with functions;
 Professor   : Eliane Nascimento Pereira;
 Description : (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste)]
 ============================================================================
 */

#include <stdio.h>

int isvowel(char ch)
{
    int vowel;
    vowel = (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U') ||
        (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u');

    return vowel;
}

int main()
{
    char c1, c2, c3;
    int n;
    scanf("%c %c %c", &c1, &c2, &c3);
    n = isvowel(c1) + isvowel(c2) + isvowel(c3);

    printf("%d\n", n);

    return 0;
}