#include "Header.h"
#include "Header1.h"
void print_menu()
{
    system("cls");  // ������� �����
    printf("��� �� ����� ������?\n");
    printf("1. ��������� ��������� �������\n");
    printf("2. ��������� ��������� ��������\n");
    printf("3. ������������� ���������\n");
    printf("4. ������������ ���������\n");
    printf("5. �����\n");
    printf(">");
}

int get_variant() {
    int variant;
    cin >> variant;
    if (variant < 1 || variant > 5)
    {
        cout << "������, ������� ����� � ��������� 1-5" << endl;
        return 0;
    }
    else
        return variant;
}
void input(int N, table arr[])
{
    for (int i = 0; i < N; i++)
    {
        cout << i + 1 << ") " << "�������: ��������, ���, ���������, ����������� >" << endl;
        cin >> arr[i].name >> arr[i].sc >> arr[i].cnt >> arr[i].sq;
    }
}