#include "foo.h"
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char s[80];
	FILE* f;
	fopen_s(&f, "file.txt", "a+");
	
	if (f == NULL) {			//!f
		puts("Ошибка открытия файла.");
		exit(0);
	}
	while (!feof(f)) {
		fgets(s, 80, f);
		printf("%s", s);
	}
	
	fclose(f);
	
}