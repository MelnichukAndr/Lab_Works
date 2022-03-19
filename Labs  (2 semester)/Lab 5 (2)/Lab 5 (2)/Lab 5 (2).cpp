#include "foo.h"

//#define ARRAY

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int size;
        
#ifdef ARRAY
    cout << "Введите размерность массива > ";
    cin >> size;
    if (size <= 0 || size > 10)
    {
        cout << "Введите значение от 1 до 10";
    }
    
    int* arr = new int[size * size];

    fill_array(arr, size);
    print_array(arr, size);
    sort_array(arr, size);

    cout << "\n\n";

    print_array(arr, size);

    delete[]arr, arr = nullptr;

#else
    int nRow;
    int nCol;

    cout << "Введите количество строк > ";
    cin >> nRow;

    cout << "Введите количество столбцов > ";
    cin >> nCol;

    int** matrix = nullptr;
    
    alloc_matrix(matrix, nRow, nCol);

    fill_matrix(matrix, nRow, nCol);

    print_matrix(matrix, nRow, nCol);

    sort_matrix(matrix, nRow, nCol);

    cout << "\n\n";

    print_matrix(matrix, nRow, nCol);

    release_matrix(matrix, nRow);
#endif

}