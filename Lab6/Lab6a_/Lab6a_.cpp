#define _CRT_SECURE_NO_WARNINGS
    
#include <iostream>
#include <stdlib.h>
#include "windows.h"
#include <conio.h>

    int main()
    {
        setlocale(LC_ALL, "ru");
        srand(time(0));

        int number = rand() % 100;
        int guess;
        int tries = 0;

        printf("Введите число от 0 до 100 >\n");

        while (true)
        {
            tries += 1;
            scanf("%d", &guess);

            if (guess < number)
            {
                printf("Введите число больше\n");
            }

            else if
                (guess >number)
            {
                printf("Введите число меньше \n");
            }

            else if (guess == number)
            {
                printf("Вы ввели правильное число! >\n");
                printf("Попыток=%d\n", tries);
            }

            else
            {
                printf("Вы ввели неверное число! >\n");


            }

        }
          return 0;
    }