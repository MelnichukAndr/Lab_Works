
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	int grib(0);

	printf("\t***Склонение слова гриб в зависимости от числа***\n");
	printf("Введите количество грибов >");
	scanf("%d", &grib);

		if ((grib % 100) >= 11 && (grib % 100) <= 19)
				cout << grib << " грибов";

			else if (grib % 10 >= 2 && grib % 10 <= 4)
				cout << grib << " гриба";

		    else if (grib % 10 == 1)
		        cout << grib << " гриб";

		    else if (grib % 10 >= 5 && grib % 10 <= 9 || grib % 10 == 0)
		        cout << grib << " грибов";

		    else
		        cout << "Ошибка, введите положительное число!";

		printf("\n\n\n\n\n");
	
	return 0;
		



}