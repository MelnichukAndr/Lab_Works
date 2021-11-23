/*ЛАБОРАТОРНАЯ РАБОТА № 10Б
Для двумерного массива сделать:
1. Функции заполнения и печати двумерного массива
2. Функцию, которая принимает двумерный массив,
и возвращает количество положительных элементов в одной любой указанной строке
В функции main применить функцию 2 к каждой строке двумерного массива*/
#include <iostream>
#include <time.h>
#include <iomanip>
#include <cstdlib>
using namespace std;
void array_fill(int arr[100][100], int row, int col)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j= 0; j < col; j++)
		{
			if (rand() % 2)
			{
				arr[i][j] = rand() % 100;
			}
			else
			{
				arr[i][j] = rand() % 100 * (-1);
			}
		}
	}
}
void array_print(int arr[100][100], int row, int col)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
}
void array_sort(int arr[100][100], int row, int col, int k)
{
	int w = 0;
	for (int i = 0; i < row; i++, w++)
	{
		int k = 0;
		
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] >= 0)
			{
				k++;
			}
		}
		cout << "В " << w + 1 << " строке " << k <<" положительных " << "элементов" << endl;
	}
}
int main()
{
	setlocale(0, "rus");
	int row, col, k = 0;
	const int N = 100, M = 100;
	int arr[N][M];

	cout << "Введите кол-во строк матрицы" << endl;
	cin >> row;
	cout << "Введите кол-во столбцов матрицы"<< endl;
	cin >> col;

	array_fill(arr, row, col);
	array_print(arr, row, col);
	cout << endl;
	
	//for (int i = 0; i < row; i++)
	//{
		array_sort(arr, row, col, k);
		
	//}
}