#include "foo.h"



void fill_array(int* arr, int size)
{
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            *(arr + i * size + j) = rand() % 100;
        }
    }
}

void print_array(int* arr, int size) 
{
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout <<"\t"<< *(arr + i * size + j);
        }
        cout << endl;
    }
}

void sort_array(int* a, int size) 
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i < j) {
                temp = *(a + i * size + j);
                *(a + i * size + j) = *(a + size * j + i);
                *(a + size * j + i) = temp;
            }
        }
    }
}

void alloc_matrix(int**& m, int row, int col)
{
    m = new int* [row];
    for (int i = 0; i < row; i++)
    {
        *(m+i) = new int[col];
    }
}

void release_matrix(int**& m, int row)
{
    for (int i = 0; i < row; i++)
        delete[] * (m + i);

    delete[] m;
}

void fill_matrix(int** m, int row, int col) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            *(*(m+i)+j) = rand() % 100;
        }
    }
}
void print_matrix(int** m, int row, int col) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout <<"\t" << *(*(m + i) + j);
        }
        cout << endl;
    }
}
void sort_matrix(int** m, int row, int col)
{
    
    for (int a = 0; a < row; a++) 
    {
        for (int b = 0; b < col; b++)
        {
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    if (*(*(m + a) + b) < *(*(m + i) + j))
                    {
                        int temp = *(*(m + a) + b);
                        *(*(m + a) + b) = *(*(m + i) + j);
                        *(*(m + i) + j) = temp;
                    }
                }
            }
        }
    }
}