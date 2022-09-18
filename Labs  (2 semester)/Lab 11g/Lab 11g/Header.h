#pragma once
#include <iostream>
#include "Windows.h"
#include <iomanip>
#include <conio.h>
using namespace std;
class dog {
	string name;
	int weight;
	int age;
	static int DogsCount;
public:
	dog(const int& weight = 0, const int& age = 0, const string& name = "No name dog" );
	dog(const dog& other);
	void SetDogsMerit(const string& name, const int& weight, const int& age);
	void GetDogsMerit();
	static int GetDogsCount();
};
//int dog::DogsCount = 0;
//
//int dog::GetDogsCount() {
//	return DogsCount;
//}
class master {
	string name;
	const int id = 6597;
	dog dogs;
	static int MasterCount;
public:
	master(const string& name = "No name person", const dog& dogs = dog());
	master(const master& other);
	void SetMastersMerit(const string& name, const dog& dogs);
	void GetMastersMerit();
	static int GetMastersCount();
};