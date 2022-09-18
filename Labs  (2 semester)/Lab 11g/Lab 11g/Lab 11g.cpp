#include "Header.h"

int main()
{
	master FirstMaster("Dmitriy");
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
	cout << "All club has: " << FirstMasterDogs[0].GetDogsCount() << " dogs" << endl;

	master* arr;
	do {
		cout << "\n\nAdd the new master? (y/n)\n\n";
		char a;
		cin >> a;
		if (a == 'y') {
			int master_count, dog_count, d_weight, d_age ;
			/*cout << "How many masters create?\n\n";
			cin >> master_count;*/
			 int i = 0;
			master* arr = new master ;
			
			cout << "How many dogs master have?\n";
			cin >> dog_count;
			dog* dogs = new dog[dog_count];
			
				cout << "Insert master name: ";
				string m_name, d_name;
				cin >> m_name;
				
				for (int j = 0; j < dog_count; j++){
					
					cout << "Insert dog`s name, weight, age: \n";
					cin >> d_name >> d_weight >> d_age;
					dogs[j].SetDogsMerit(d_name, d_weight, d_age);
					arr[i].SetMastersMerit(m_name, *dogs);
					
					/*arr[i].GetMastersMerit();
					dogs[j].GetDogsMerit();*/
					
				}
				
				
				
					arr[i].GetMastersMerit();
					for (int j = 0; j < dog_count; j++) {
						dogs[j].GetDogsMerit();
						cout << "\n";
					}
			
				dog a;
				cout << "All club has: " << FirstMaster.GetMastersCount() << " members" << endl;
				cout << "All club has: " << a.GetDogsCount() << " dogs" << endl;
				
		}

		if (a == 'n') {
			cout << "Press any key to continue . . .\n";
			puts("Press 'esc' to exit . . .");
		}
	} while (_getch() != 27);
	cout << "\n\nAdd the new master? (y/n)\n\n";

}