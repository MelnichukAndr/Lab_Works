//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main(void)
//{
//	setlocale(0, "rus");
//	const int w = 4; // ширина вывода
//	int matrix[100][100];
//	int arr[100];
//	int n , m ;
//	cout << "Введите кол-во строк: ";
//	cin >> m;
//	cout << "Введите кол-во столбцов";
//	cin>> n;
//	srand(time(NULL));
//
//	
//
//	//Заполнение массива
//
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < m; ++j)
//		{
//				matrix[i][j] = rand() % 100;
//		}
//	}
//	//Вывод массива
//	cout << "Исходный массив" << endl;
//	for (int i = 0; i < m; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			cout << setw(w) << matrix[i][j];
//		}
//		cout << endl;
//	}
//	//Сортировка
//	
//	int min = matrix[0][0];
//	for (int i = 0; i < m; i++)
//	{
//		min = matrix[i][0];
//
//		for (int j = 0; i < n; j++)
//		{
//			if (matrix[i][0] < min)
//				min = matrix[i][j];
//		}
//		arr[i] = min;
//	}
//	cout << "Минимальный елемент";
//	for(int i = 0; i<m; i++)
//		cout << setw(w) << arr[i];
//	cout << endl;
//	
//	
//
//
//
//
//
//
//
//
//
//
//	
//	
//}

#include <iostream>
#include <time.h>
#include <iomanip>
#include <cstdlib >
using namespace std;
int main()
{
    setlocale(0, "rus");
    srand(time(0));
	const int N = 100, M = 100;
    int Matrix[N][M];
    int string,col;
    int w = 4;

    cout << "Введите кол-во строк (1-100): ";
		cin >> string;
		if (string > 100 || string < 1)

		{
			cout << endl;
			cout << "Введите значение кол-во строк в диапозоне (1-100)";
			return 0;
		}

    cout << "Введите кол-во столбцов (1-100): ";
		cin >> col;
		if (col > 100 || col< 1)

		{
			cout << endl;
			cout << "Введите значение кол-во столбцов в диапозоне (1-100)";
			return 0;
		}

		for (int i = 0; i < string; i++)
		{
			
			if (i % string)
				cout << endl;
			for (int j = 0; j < col; j++)
			{
				Matrix[i][j] = rand() % 100;
				cout << setw(w) << Matrix[i][j];
			}
		}
	int max_string;
	//int temp;
	for (int i = 0; i < col; i++)
	{
		max_string = 0;

		for (int j = 1; j < string; j++)
		{
			if (Matrix[i][j] > Matrix[i][max_string])
			{
				max_string = j;
			}
		}
		/*temp = Matrix[i][0];
		Matrix[i][0] = Matrix[i][max_string];
		Matrix[i][max_string] = temp;*/
		swap(Matrix[i][0], Matrix[i][max_string]);
	}
	cout << endl;
	cout << "Перераспределенная матрица" << endl;
	for (int i = 0; i < string; i++)
	{
		for (int j = 0; j < col-1 ; j++)
		{
			cout << setw(w) << Matrix[i][j];
		}
		cout << setw(w) << Matrix[i][col - 1] << endl;;
	}
	cout << endl;

		

 





		
		



	
}


