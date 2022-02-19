#include "fun.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int size;

	cout << "Введите размер массива в диапозоне 1-100 " << endl;
	cin >> size;
	if (size < 1 || size>100) cout << "Введите размер в диапозоне 1-100";

	int* arr = new int[size];
	int* brr = new int[3];

	fill(arr, size);
	print(arr, size);
	sort(arr, size);

	cout << "\n";

	print(arr, size); //sort arr

	cout <<"\n\n\n\n";

	barr(arr, brr); // fill brr
	print(brr, 3);

	cout <<"\n";

	delete[] arr;
	delete[] brr;
}