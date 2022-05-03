#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include "Windows.h"
#include <iomanip>
using namespace std;

struct table
{
    char name[12];
    char type;
    char cnt[12];
    float sq;
    struct table* next;
};