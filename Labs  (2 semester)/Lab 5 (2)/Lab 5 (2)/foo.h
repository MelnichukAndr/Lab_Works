#pragma once
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <time.h>

using namespace std;

void fill_array(int* a, int size); 
void print_array(int* a, int size);
void sort_array(int*  a,  int size);

void alloc_matrix(int**& m, int row, int col);
void release_matrix(int**& m, int row);

void fill_matrix(int** m, int row, int col);
void print_matrix(int** m, int row, int col);
void sort_matrix(int** m, int row, int col);
