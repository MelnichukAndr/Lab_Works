#include <iostream>
#include <time.h>
#include <iomanip>
#include <cstdlib>
using namespace std;

void fun(int arr[], const int size, int row, double *result)
{
	setlocale(0, "rus");
	const int N = 100, M = 100;
	int arr2[N][M];
	int length = sqrt(row);

	for (int i = 0, k = 0; i < length; i++)
	{
		
		for (int j = 0; j < length; j++)
		{
			arr2[i][j] = arr[k];
			k++;
		}
	}

	cout << endl << "Второй массив" << endl;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{

			cout << setw(4) << arr2[i][j];
		}
		cout << endl;
	}

	double sum = 0;
	for (int j = 0; j < length; j++) 
	{
			int min = arr2[0][j];

		for (int i = 1; i < length; i++) 
		{
			if (min > arr2[i][j])
				min = arr2[i][j];
			
		}
		cout << "Столбец " << j + 1 << ": минимальный элемент -> " << min << endl;

		sum += min;
	}
	*result = sum / length; //разименование
}

int main()
{
	setlocale(0, "rus");
	srand(time(NULL));
	int const SIZE = 100;
	int arr[SIZE];
	int row;
	double result = 0;

	/*cout << "Введите размер массива" << endl;
	cin << row;*/

	row = rand() % 4 + 2;
	row = row * row;

	for (int i = 0; i < row; i++)
	{
		arr[i] = rand() % 10;
	}
	cout << "Первый массив" << endl;;
	for (int i = 0; i < row; i++)
	{
		cout << setw(4) << arr[i];
	}
	/*cout << endl << result << endl;*/

	fun(arr, SIZE, row, &result);

	cout << endl << "Cреднее значение из минимальных значений столбцов матрицы :"<<result << endl;

	cout << endl << endl << endl;
}

