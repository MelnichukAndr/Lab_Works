#include <stdio.h>
#include <string.h>
#include <iostream>
#include <windows.h>

using namespace std;
#define M 3	

struct mon {
	char name[15];
	char sc;
	float cnt;
	int sq;
}; /* îïðåäåëåíèå ìàññèâà ìîíàñòèðåé */
/* Îïèñàíèå ñòðóêòóðû, êîòîðàÿ ïðåäñòàâëÿåò ìîíàñòûðü */
void sort(mon mm[]) {

	for (int i = 0; i < M; i++)
	{
		if (mm[i].sq != i + 1) {
			if (mm[i].sq == 1) {
				mm[10] = mm[0];
				mm[0] = mm[i];
				mm[i] = mm[10];
			}
		}
		if (mm[i].sq == 2) {
			mm[10] = mm[1];
			mm[1] = mm[i];
			mm[i] = mm[10];
		}
		if (mm[i].sq == 3) {
			mm[10] = mm[2];
			mm[2] = mm[i];
			mm[i] = mm[10];
		}

	}
}
void print(mon mm[]) {
	/* Âûâîä òàáëèöû */
	struct mon x; /* ðàáî÷àÿ ïåðåìåííàÿ */
	int n = M;    /* êîëè÷åñòâî ýëåìåíòîâ â ìàññèâå */
	int i, j; /* òåêóùèå èíäåêñû â ìàññèâå */
	int m;    /* èíäåêñ ìèíèìàëüíîãî ýëåìåíòà */
	printf("-------------------------------------------------\n");
	printf("|        Âåäîìîñòü ñïîðòèâíèõ ñîñòÿçàíèé |\n");
	printf("|-----------------------------------------------|\n");
	printf("|   Ôàìèëèÿ  |  Êîä  |Êîëè÷åñòâî  |Ìåñòî â Èòîãå|\n");
	printf("|  ó÷àñòíèêà |Êîìàíäû|áàëîâ       |             |\n");
	printf("|------------|-------|------------|-------------|\n");
	/* âûâîä ñòðîê ôàêòè÷åñêèõ äàííûõ */
	for (i = 0; i < n; i++)
		printf("| %10s |   %c   |  %-9.1f | %11d |\n",
			mm[i].name, mm[i].sc, mm[i].cnt, mm[i].sq);
	printf("------------------------------------------------\n");
	printf("| Ïðèìå÷àíèå: Ä - Äèíàìî, Ñ - Ñïàðòàê,          | \n");
	printf("|   Ø -  Øàõòåð                                 | \n");
	printf("------------------------------------------------\n");
}
void random(mon mm[]) {

	for (int n = 0; n < M; n++) {
		printf("%d. Ââåäèòå: ôàìèëèþ >",
			n + 1);
		scanf_s("%s", mm[n].name, sizeof(mm[n].name));



	}
	
	char letters[3] = { 'Ø', 'Ñ' ,'Ä' };
	for (int i = 0; i < 3; i++)
	{
		mm[i].cnt = rand() % 40 + (40 * (2 - i));
		mm[i].sc = letters[i % 3];
		mm[i].sq = i + 1;
	}

	mm[10] = mm[2];
	mm[2] = mm[0];
	mm[0] = mm[10];
}

void put(mon mm[]) {
	for (int n = 0; n < M; n++) {
		printf("%d. Ââåäèòå: Ôàìèëèþ,  Êîä, Êîëè÷åñòâî, Ìåñòî â Èòîãå >",
			n + 1);
		scanf_s("%s", mm[n].name, sizeof(mm[n].name));
		if (!strcmp(mm[n].name, "***")) break;
		scanf_s("%s", &mm[n].sc, sizeof(mm[n].name));
		scanf_s("%f", &mm[n].cnt);
		/* Âíèìàíèå! Ìû îáõîäèì îøèáêó â ñèñòåìå ïðîãðàììèðîâàíèÿ */
		scanf_s("%d", &mm[n].sq); //mm[n].sq = sqx;
	}

}



int main(void) {
	srand(time(0));
	//setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float sqx;
	int action = 0;
	int n = 3;
	mon mm[M];



	while (true) {
		for (int i = 0; i < 1; i++)
		{
			cout << "1 – ñëó÷àéíûì, 2 - ââîä ñ ýêðàí, 3 – ñîðòèðîâêà, 4 – ïå÷àòü";
			cin >> action;


			if (action == 1) {
				random(mm);
			}
			else if (action == 2) {
				put(mm);
			}
			else if (action == 3) {
				sort(mm);
			}
			else if (action == 4) {
				print(mm);
			}
		}

	}
	return 0;
}