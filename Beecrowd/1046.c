/*
 ============================================================================
 Author      : Arkzesru;
 Date        : February 02, 2024;
 Name        : Game Time;
 Source      : Beecrowd;
 Description : Calculating the duration of a game in hours using C.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int CalculatingTime(int num1, int num2)
{
    int duration = abs(num2 - num1);

    return ((num2 >= num1) ? duration : 24 - duration) == 0 ? 24 : (num2 >= num1) ? duration : 24 - duration;
}

void showInfo(int num1, int num2)
{
    int time = CalculatingTime(num1, num2);
    printf("O JOGO DUROU %d HORA(S)\n", time);
}

int main()
{
    int startTimeOfTheGame, EndTimeOfTheGame;
    scanf("%d %d", &startTimeOfTheGame, &EndTimeOfTheGame);

    showInfo(startTimeOfTheGame, EndTimeOfTheGame);

    return 0;
}