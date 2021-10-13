#include <stdio.h>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
    setlocale(LC_ALL, "ru");
    short k;
    printf("\nВведите k >");
    scanf_s("%hd", &k);
    if (k % 10 == 1)
        printf("У меня %hd гриб\n", k);
    if (k % 10 == 5)
        printf("У меня %hd грибов\n", k);








}

