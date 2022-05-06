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
    table* next;
    table* prev;
    
};

void create_list_by_hand();
void create_list_random();
void search_by_name(table* p, char* name);
void search_by_type(table* p, char type);
void search_by_cnt(table* p, char* cnt);
void search_by_sq(table* p, float sq);
table* read_from_file();
void print_list_end(table* head);
void print_list_begin(table* tail);
void add_to_begin(table** head);
void add_to_end(table* head);
void add_after_element(table* head);
void delete_first(table** head);
void delete_last(table** head);
void delete_element(table** head);
void sort(table* head);
void input_in_file(table* head);
