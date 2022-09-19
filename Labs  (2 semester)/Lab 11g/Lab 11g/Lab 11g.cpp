#include "Header.h"

int main()
{
	master FirstMaster;
	master SecondMaster;

	dog* FirstMasterDogs = new dog[2];
	FirstMasterDogs[0].SetDogsMerit("Tobik", 7, 4);
	FirstMasterDogs[1].SetDogsMerit("Bim", 10, 17);

	FirstMaster.SetMastersMerit("Dmitriy", FirstMasterDogs);
	FirstMaster.GetMastersMerit();
	cout << "Dmitriy`s dogs:\n\n";
	FirstMasterDogs[0].GetDogsMerit();
	cout<<"\n";
	FirstMasterDogs[1].GetDogsMerit(); 

	cout << "------------------------------------\n";
	dog* SecondMasterDogs = new dog[1];
	SecondMasterDogs[0].SetDogsMerit("Elsa", 5, 2);
	SecondMaster.SetMastersMerit("Irina", SecondMasterDogs);
	SecondMaster.GetMastersMerit();
	cout << "Irina`s dogs:\n\n";
	SecondMasterDogs[0].GetDogsMerit();
	cout << "------------------------------------\n";
	cout << "\n\n";

	cout << "All club has: " << FirstMaster.GetMastersCount() <<" members" << endl;
	cout << "All club has: " << FirstMasterDogs[0].GetDogsCount() << " dogs" << endl;

	do {
		cout << "\n\nAdd the new master? (y/n)\n\n";
		char a;
		cin >> a;
		if (a == 'y') {
			int master_count, dog_count, d_weight, d_age ;
			cout << "How many masters create?\n\n";
			cin >> master_count;
			if (cin.fail()) {
				cout << "Eror, try one more time\n";
				cin.clear();
				cin.ignore(32767, '\n');
				system("pause");
				system("cls");
				continue;
			}
			master* masters = new master[master_count];
			dog* dogs = new dog[0];
			int* count = new int[master_count];
			for (int i = 0; i < master_count; i++) {

				cout << "Insert master name: ";
				string m_name, d_name;
				cin >> m_name;
				
				cout << "How many dogs master have?\n";
				cin >> dog_count;
				if (cin.fail()) {
					cout << "Eror, try one more time\n";
					cin.clear();
					cin.ignore(32767, '\n');
					system("pause");
					system("cls");
					continue;
				}
				count[i] = dog_count;
				dog* dogs = new dog[dog_count];
				for (int j = 0; j < dog_count; j++) {

					cout << "Insert dog`s name, weight, age: \n";
					cin >> d_name >> d_weight >> d_age;
					dogs[j].SetDogsMerit(d_name, d_weight, d_age);
					
				}
				masters[i].SetMastersMerit(m_name, dogs);
				
			}
			for (int i = 0; i < master_count; i++) {
				cout << "\n";
				masters[i].GetMastersMerit();
				cout << "Master`s " << i + 1 << " dogs\n";
				for (int j = 0; j < count[i]; j++) {
					masters[i].dogs[j].GetDogsMerit();
					cout << "\n";
				}
				cout << "\n\n" << "------------------------------------\n";
			}
			dog a;
			cout << "All club has: " << FirstMaster.GetMastersCount() << " members" << endl;
			cout << "All club has: " << a.GetDogsCount() << " dogs" << endl;
			delete[] masters, count, dogs;
		}

		if (a == 'n') {
			cout << "Press any key to continue . . .\n";
			puts("Press 'esc' to exit . . .");
		}
	} while (_getch() != 27);
	
}