#include <iostream>
using namespace std;
class dog {
	string name;
	int weight;
	int age;
public:
	dog() {
		name = "No name dog";
		weight = 0;
		age = 0;
	}
	dog(string name, int weight, int age) {
		this->name = name;
		this->weight = weight;
		this->age = age;
	}
	dog(const dog& other) {
		this->name = other.name;
		this->weight = other.weight;
		this->age = other.age;
	}
	void SetDogsMerit(string name, int weight, int age) {
		this->name = name;
		this->weight = weight;
		this->age = age;
	}
	void GetDogsMerit() {
		cout << "Dog`s name >\t" << this->name << "\nDog`s weight >\t" << this->weight << "\nDog`s age >\t" << this->age << endl;
	}
};
class master {
	string name;
	const int id =6597;
	dog dogs;
	static int DogsCount;
public:
	master() {
		this->name = "No name person";
		this->dogs = dog();
		++DogsCount;
	}
	master(string name, dog dogs) {
		this->name = name;
		this->dogs = dogs;
		++DogsCount;
	}
	master(const master& other) {
		this->name = other.name;
		this->dogs = other.dogs;
		++DogsCount;
	}
	void SetMastersMerit(string name, dog dogs) {
		this->name = name;
		this->dogs = dogs;
	}
	void GetMastersMerit() {
		cout << "ID:" << this->id << "\nMaster`s name >\t" << this->name << "\n\n";
	}
	static int GetMastersCount();
};
int master::DogsCount = 0;
int master::GetMastersCount() {
	return DogsCount;
}
int main()
{
	master FirstMaster;
	master SecondMaster;

	dog* FirstMasterDogs = new dog[2];
	FirstMasterDogs[0].SetDogsMerit("Tobik", 7, 4);
	FirstMasterDogs[1].SetDogsMerit("Bim", 10, 17);

	FirstMaster.SetMastersMerit("Dmitriy", *FirstMasterDogs);
	FirstMaster.GetMastersMerit();
	cout << "Dmitriy`s dogs:\n\n";
	FirstMasterDogs[0].GetDogsMerit();
	cout<<"\n";
	FirstMasterDogs[1].GetDogsMerit(); 

	cout << "------------------------------------\n";
	dog SecondMasterDogs;
	SecondMasterDogs.SetDogsMerit("Elsa", 5, 2);
	SecondMaster.SetMastersMerit("Irina", SecondMasterDogs);
	SecondMaster.GetMastersMerit();
	cout << "Irina`s dogs:\n\n";
	SecondMasterDogs.GetDogsMerit();
	cout << "------------------------------------\n";
	cout << "\n\n";

	cout << "All club has: " << FirstMaster.GetMastersCount() <<" members" << endl;
}