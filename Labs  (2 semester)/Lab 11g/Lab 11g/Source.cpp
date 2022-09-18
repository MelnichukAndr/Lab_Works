#include "Header.h"
master::master(const string& name, const dog& dogs) {
	this->name = name;
	this->dogs = dogs;
	++MasterCount;
}
master::master(const master& other) {
	this->name = other.name;
	this->dogs = other.dogs;
	++MasterCount;
}
void master::SetMastersMerit(const string& name, const dog& dogs) {
	this->name = name;
	this->dogs = dogs;
}
void master::GetMastersMerit() {
	cout << "ID:" << this->id << "\nMaster`s name >\t" << this->name << "\n\n";
}
dog::dog(const int& weight, const int& age, const string& name) {
	this->weight = weight;
	this->age = age;
	this->name = name;
}
dog::dog(const dog& other) {
	this->name = other.name;
	this->weight = other.weight;
	this->age = other.age;
	DogsCount++;
}
void dog::SetDogsMerit(const string& name, const int& weight, const int& age) {
	this->name = name;
	this->weight = weight;
	this->age = age;
	this->DogsCount = DogsCount + 1;
}
void dog::GetDogsMerit() {
	cout << "Dog`s name >\t" << this->name << "\nDog`s weight >\t" << this->weight << "\nDog`s age >\t" << this->age << endl;
}


int dog::DogsCount = 0;

int dog::GetDogsCount() {
	return DogsCount;
}

int master::MasterCount = 0;

int master::GetMastersCount() {
	return MasterCount;
}