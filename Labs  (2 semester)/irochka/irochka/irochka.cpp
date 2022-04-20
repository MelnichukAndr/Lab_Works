#include "foo.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	char S[N];
	char S1[N];
	int L;

	
	

	while (true) {
		
			system("cls");
			system("color 7");
			cout << "Введите строку: ";
			gets_s(S, N);

		if (strlen(S) < 1)
		{
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, FOREGROUND_RED);
			cout << "Строка должна содержать минимум один символ..." << endl;
			system("pause");
			continue;
			
		}
		if (strlen(S) + 1 > N)
		{
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, FOREGROUND_RED);
			cout << "Ваша строка превышает лимит ( " << N << " ) " << "символов..." << endl;
			cout << "Длина вашей строки: " << strlen(S) + 1 << endl;
			system("pause");
			continue;
			cin.ignore();
			
		}

		while (true)
		{
			int n = strlen(S) + 1;

			system("cls");
			system("color 7");
			cout << "Введите длину выравнивания: ";
			cin >> L;

			if (strlen(S) < L)
			{
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, FOREGROUND_RED);
				cout << "Выберите длину меньше длины строки..." << endl;
				cout << "Длина вашей строки: " << strlen(S) + 1 << endl;
				system("pause");
				cin.ignore();
				continue;

			}
			if (L <= 0)
			{
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, FOREGROUND_RED);
				cout << "Минимальное значение длины выравнивания = 1..." << endl;
				system("pause");
				cin.ignore();
				continue;

			}

			left(S, S1, n, L);
			puts(S1);
			system("pause");
			cin.ignore();



		}
	}
		

}