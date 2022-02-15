#pragma once
#include <iostream>
#include <windows.h>
#include "Header1.h"

using namespace std;
struct table
{
    char name[12];
    char sc;
    char cnt[12];
    float sq;
}
arr[10];
void print_menu();
int get_variant();
void input(int N, table arr[]);