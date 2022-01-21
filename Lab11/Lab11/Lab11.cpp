#include <iostream>
#include <windows.h>
using namespace std;

void foo(int i, int s)
{
    if (i == 0)
        cout << 0;
    else {
        if (i / s > 0) {
            foo(i / s, s);
        }
        cout << i % s;
    }
}
int main() 
{
    setlocale(LC_ALL, "Russian");
    int i;
    while (true) 
    {
        cout << "Введите число в десятичной СС: ";
        cin >> i;

        cout << "Число " << i << " в " << 8 << " CC: "; foo(i, 8);
    
        cout << endl << endl;
        system("pause");
        system("cls");
    }
}


