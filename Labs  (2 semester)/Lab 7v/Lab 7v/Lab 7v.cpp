#include "foo.h"

//Записать в файл(не массив) 20 чисел и найти сумму 2, 5, 9 элементов.
//Найти минимальное и на его место записать число 999 (fseek(), fwrite(), fread()).



void input(char* fname)
{
	FILE* f;
	fopen_s( &f, fname, "w+b" );
	int a = 0;
	for (int i = 0; i < 20; i++) {
		a = rand() % 10;
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

int sum(const char* fname) {
	FILE* f;
	int a, sum = 0;
	
	fopen_s(&f, fname, "rb");
	
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
void min(char* fname)
{
	FILE* f;
	fopen_s( &f, fname, "r+b" );
	int min = 999;
	int min1 = 999;
	int idx = 0;
	int a;
	for (int i = 0; i < 20; i++) {
		fread(&a, sizeof(int), 1, f);
		if (a < min) {
			min = a;

			idx = i;
		}

		fseek(f, 0, SEEK_SET);
		fread(&a, sizeof(int), 1, f);
		i = 0;
		if (a == min) {
			fseek(f, idx * sizeof(int), SEEK_SET);
			a = 999;
			fwrite(&a, sizeof(int), 1, f);
			fseek(f, 0, SEEK_END);
		}
	}
	
	
	
	
	cout<<"min = "<<min;
	fclose(f);
}


int main()
{
	srand(time(NULL));
	int x = 0;
	char fname[] = "text.bin";

	input(fname);
	read(fname);
	x = sum(fname);
	cout << "\n\n\n";
	cout << "Sum = " << x;
	min(fname);
	cout << "\n\n";
	read(fname);
	
}





