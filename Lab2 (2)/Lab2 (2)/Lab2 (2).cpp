

#include <iostream>
#include "Header.h"
#include "Header1.h"
using namespace std;



int main()
{
    int variant;
    int N;
    do
    {
        print_menu();
        variant = get_variant();
        switch (variant)
        {
        case 1:
        {
            cout << "Сколько строк заполнять? --> ";
            cin >> N;
            input(N, arr);
        }break;

        /*case 2:
        {
            cout << "Сколько строк заполнять? --> ";
            cin >> N;
            random(N, arr);
        }break;

        case 3:
        {
            sort(N, arr);
        }break;

        case 4:
        {
            print(N, arr);
        }break;
        }*/
        if (variant != 5)
        {
            system("pause");
        }

        }
    }while (variant != 5);

}