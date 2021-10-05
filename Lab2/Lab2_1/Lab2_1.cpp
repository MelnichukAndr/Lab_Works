#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdio.h>
#pragma execution_character_set("utf-8")


int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char name1[9], name2[11], name3[6];
	char sc1, sc2, sc3;
	unsigned short cnt1, cnt2, cnt3;
	double sq1, sq2, sq3;
	/* Введение фактических данных*/
	printf("1. Введите: вещество, тип, влажность, коеффициент >");
	scanf("%s %c %hu %lf", name1, &sc1, &cnt1, &sq1);
	printf("2. Введите: вещество, тип, влажность, коеффициент >");
	scanf("%s %c %hu %lf", name2, &sc2, &cnt2, &sq2);
	printf("3. Введите: вещество, тип, влажность, коеффициент >");
	scanf("%s %c %hu %lf", name3, &sc3, &cnt3, &sq3);
	/* Вывод таблицы */
	/* вывод заголовков */
	printf("---------------------------------------------------\n");
	printf("|   Коэффициенты теплопроводимости материаллов    |\n");
	printf("|-------------------------------------------------|\n");
	printf("| Вещество    | Тип | Влажность (%%)  | Коэффициент|\n");
	printf("|             |     |                |            |\n");
	printf("|-------------|-----|----------------|------------|\n");
	/* вывод строк фактических данных */
	printf("| %11s | %c   | %3d            | %-5.1lf      |\n", name1, sc1, cnt1, sq1);
	printf("| %11s | %c   | %3d            | %-5.3lf      |\n", name2, sc2, cnt2, sq2);
	printf("| %11s | %c   | %3d            | %-5.2lf      |\n", name3, sc3, cnt3, sq3);
	/* вывод примечаний */
	printf("|-------------------------------------------------|\n");
	printf("|  Примечание: М - металлы,                       |\n");
	printf("|              Т - термоизоляционные материалы,   |\n");
	printf("|              Д - другие материалы               |\n");
	printf("---------------------------------------------------\n");
	return 0;
}