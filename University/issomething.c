/*
 ============================================================================
 Author      : Arkzesru;
 Date        : Octuber 12, 2023;
 Name        : Newton's Law of Universal Gravitation (Formula);
 Professor   : Eliane Nascimento Pereira;
 Description : (Exercise from the Introduction to Programming material);

               (First semester of Computer Science at Unioeste)]
 ============================================================================
 */

#include <stdio.h>

int isletter(char ch)
{
    if ((ch >= 'a' && ch <= 'z'))
    {
        return 1;
    }
    else if ((ch >= 'A' && ch <= 'Z'))
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

int isvowel(char ch)
{
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return 2;
    }
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isdecimal(char ch)
{
    return (ch >= '0' && ch <= '9');
}

void showInfo(char ch)
{

    if (isvowel(ch) == 2)
    {
        printf("(%c) e letra maiuscula - vogal\n", ch);
    }
    else if (isvowel(ch) == 1)
    {
        printf("(%c) e letra minuscula - vogal\n", ch);
    }
    else if ((isletter(ch) == 1 && isvowel(ch) == 0))
    {
        printf("(%c) e minuscula - consoante\n", ch);
    }
    else if ((isletter(ch) == 2 && isvowel(ch) == 0))
    {
        printf("(%c) e maiuscula - consoante\n", ch);
    }
    else if (isdecimal(ch) == 1)
    {
        printf("(%c) e digito decimal\n", ch);
    }
    else
    {
        printf("(%c) e outro caractere\n", ch);
    }
}

int main()
{
    char xx;
    scanf("%c", &xx);

    showInfo(xx);

    return 0;
}