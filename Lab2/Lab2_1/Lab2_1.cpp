#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdio.h>


int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char name1[9], name2[11], name3[6];
	char sc1, sc2, sc3;
	unsigned short cnt1, cnt2, cnt3;
	double sq1, sq2, sq3;
	/* �������� ����������� ������*/
	printf("1. �������: ��������, ���, ���������, ����������� >");
	scanf("%s %c %hu %lf", name1, &sc1, &cnt1, &sq1);
	printf("2. �������: ��������, ���, ���������, ����������� >");
	scanf("%s %c %hu %lf", name2, &sc2, &cnt2, &sq2);
	printf("3. �������: ��������, ���, ���������, ����������� >");
	scanf("%s %c %hu %lf", name3, &sc3, &cnt3, &sq3);
	/* ����� ������� */
	/* ����� ���������� */
	
	printf("---------------------------------------------------\n");
	printf("|   ������������ ����������������� �����������    |\n");
	printf("|-------------------------------------------------|\n");
	printf("| ��������    | ��� | ��������� (%%)  | �����������|\n");
	printf("|             |     |                |            |\n");
	printf("|-------------|-----|----------------|------------|\n");
	/* ����� ����� ����������� ������ */
	printf("| %-11s | %-3c | %-14d | %-10.1lf |\n", name1, sc1, cnt1, sq1);
	printf("| %-11s | %-3c | %-14d | %-10.3lf |\n", name2, sc2, cnt2, sq2);
	printf("| %-11s | %-3c | %-14d | %-10.2lf |\n", name3, sc3, cnt3, sq3);
	/* ����� ���������� */
	printf("|-------------------------------------------------|\n");
	printf("|  ����������: � - �������,                       |\n");
	printf("|              � - ����������������� ���������,   |\n");
	printf("|              � - ������ ���������               |\n");
	printf("---------------------------------------------------\n");
	return 0;
}