#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	double a,b,c;
	double D;
	double x1, x2;

	printf("Введите значение a >");
	scanf("%d", &a);

	printf("Введите значение b >");
	scanf("%d", &b);

	printf("Введите значение c >");
	scanf("%d", &c);

	D = pow(b, 2) - 4 * a * c;

	if (D >= 0)
		x1 = (-b + sqrt(D)) / 2a;
		x2 = (-b - sqrt(D)) / 2a;

		printf("x1=%x1", x1);
		printf("x2=%x2", x2);

	else
		printf("Дискриминант меньше нуля");
}