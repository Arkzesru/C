/*
 ==================================================================================
 Author      : Arkzesru;
 Date        : February 21, 2024;
 Name        : Fixed Password;
 Source      : Beecrowd;
 Description : This program prompts the user for a password and checks if it
               matches a predefined fixed password (2002). If the password is
               incorrect, it displays Invalid Password and prompts for the password
               again. If the password is correct, it displays Acess Granted and
               terminates the program.
 ==================================================================================
 */

#include <stdio.h>

void showInfo()
{
    int test;
    scanf("%d", &test);

    while (test != 2002)
    {
        printf("Senha Invalida\n");

        scanf("%d", &test);
    }
    printf("Acesso Permitido\n");
}

int main()
{
    showInfo();

    return 0;
}
