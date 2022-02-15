#include "Header.h"
#include "Header1.h"
void print_menu()
{
    system("cls");  // очищаем экран
    printf("Что мы будем делать?\n");
    printf("1. Заполнить структуру вручную\n");
    printf("2. Заполнить структуру рандомно\n");
    printf("3. Отсортировать структуру\n");
    printf("4. Расспечатать структуру\n");
    printf("5. Выход\n");
    printf(">");
}

int get_variant() {
    int variant;
    cin >> variant;
    if (variant < 1 || variant > 5)
    {
        cout << "Ошибка, введите числа в диапозоне 1-5" << endl;
        return 0;
    }
    else
        return variant;
}
void input(int N, table arr[])
{
    for (int i = 0; i < N; i++)
    {
        cout << i + 1 << ") " << "Введите: вещество, тип, влажность, коеффициент >" << endl;
        cin >> arr[i].name >> arr[i].sc >> arr[i].cnt >> arr[i].sq;
    }
}