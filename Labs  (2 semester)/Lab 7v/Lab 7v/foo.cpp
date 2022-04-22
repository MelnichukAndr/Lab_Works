#include "foo.h"

void input(char* fname)
{
	FILE* f;
	fopen_s(&f, fname, "w+b");
	int a = 0;
	for (int i = 0; i < 20; i++) {
		a = rand() % 10 - 2;
		fwrite(&a, sizeof(int), 1, f);
	}
	fclose(f);
}

void read(char* fname)
{
	FILE* f;
	fopen_s(&f, fname, "r+b");

	int a;

	for (int i = 0; i < 20; i++)
	{
		fread(&a, sizeof(int), 1, f);
		cout << a << "    ";
	}
	fclose(f);

}

int sum(char* fname)
{
	FILE* f;
	int a, sum = 0;

	fopen_s(&f, fname, "r+b");

	fseek(f, 1 * sizeof(int), SEEK_SET);
	fread(&a, sizeof(int), 1, f);
	sum += a;

	fseek(f, 4 * sizeof(int), SEEK_SET);
	fread(&a, sizeof(int), 1, f);
	sum += a;

	fseek(f, 8 * sizeof(int), SEEK_SET);
	fread(&a, sizeof(int), 1, f);
	sum += a;

	fclose(f);
	return sum;
}

void sort(char* fname)
{
	FILE* f;
	int arr[20];

	fopen_s(&f, fname, "r+b");

	for (int i = 0; i < 20; i++)
		fread(&*(arr + i), sizeof(int), 1, f);

	int min = *arr;
	for (int i = 0; i < 20; ++i)
		if (*(arr + i) < min)
			min = *(arr + i);

	cout << "Min number = " << min << "\n\n";

	fseek(f, 0, SEEK_SET);
	for (int i = 0; i < 20; i++) {
		if (*(arr + i) == min) {
			int x = 999;
			fwrite(&x, sizeof(int), 1, f);
			i++;
		}
		fwrite(&*(arr + i), sizeof(int), 1, f);
	}

	fclose(f);
}
