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

int isletter(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int iscons (char ch) {
    return isletter(ch) && !isvowel(ch);
}

int main()
{
    char c1, c2, c3;
    int n;
    scanf("%c %c %c", &c1, &c2, &c3);
    n = iscons(c1) + iscons(c2) + iscons(c3);

    printf("%d\n", n);

    return 0;
}