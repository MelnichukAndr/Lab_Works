#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	double a, b, c;
	double D;
	double x1, x2;
	while (1) {
		printf("Введите значение a >");
		scanf_s("%lf", &a);

		printf("Введите значение b >");
		scanf_s("%lf", &b);

		printf("Введите значение c >");
		scanf_s("%lf", &c);

		D = pow(b, 2) - 4 * a * c;
		if (a < 0) 
			printf("a<0");
		
		if (D >= 0) {
			x1 = (-b + sqrt(D)) / 2 * a;
			x2 = (-b - sqrt(D)) / 2 * a;

			printf("x1 = %x1\n", x1);
			printf("x2 = %x2\n", x2);
		}
		else
			printf("Дискриминант меньше нуля\n");
	}
}
