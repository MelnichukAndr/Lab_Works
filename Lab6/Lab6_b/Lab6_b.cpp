
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	setlocale(LC_ALL, "ru");
	int z;
	int answer;
	int n = 10;//count of tasks
	int ones = 0;
	int grade = 0;
	for (; ones < n; ones++) {
		system("cls");
		srand(time(0));
		int number = rand() % 10 + 1;
		int factor = rand() % 10 + 1;

		printf("%d) Решите пример > %d * %d = \n\n", ones+1, number, factor);

		printf("Ваш ответ >");

		scanf_s("%d", &answer);

		if (answer == number * factor) {

			printf("Твой ответ правильный, идем дальше\n\n");
			grade++;
			
		}
		
		else
			printf("Неправильно, идем дальше\n\n");
	}
	system("cls");

	/*printf("Хотите узнать оценку?\n");
	printf("\n\n1-Да, 2- Нет\n");
	scanf_s("%d", &z);

	system("cls");

	if (z == 1)*/
		printf("Оценка = %d\n\n", grade);
	/*else
		printf("Досвидания");*/
	return 0;
}


