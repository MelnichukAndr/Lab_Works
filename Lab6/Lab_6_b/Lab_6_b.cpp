#include <iostream>
#include <stdio.h>
#include <conio.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	setlocale(LC_ALL, "ru");
	
	int answer;
	int grade = 0;
	int ones = 1;


	int n = 10;//COUNT OF TASKS

	do {


		srand(time(0));
		int number = rand() % 10 + 1;
		int factor = rand() % 10 + 1;

		printf("%d) Решите пример > %d * %d = \n\n",ones, number, factor);

		printf("Ваш ответ >");

		scanf_s("%d", &answer);

		
		if (answer == number * factor) {
			printf("Твой ответ правильный, идем дальше\n\n");
			
			grade++;
		}

		else if (ones == n) {
			printf("Ваша оценка = %d", grade);
		}

		else
			printf("Неправильно, идем дальше\n\n");
			_getch();
			system("cls");
		
		ones++;

	} while (ones <= n);

}








