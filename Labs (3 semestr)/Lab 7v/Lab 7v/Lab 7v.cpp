#include <iostream>
#include <fstream>
using namespace std;
void foo(int* mas, bool f) {
	if (sizeof(mas) == 0 ) {
		throw exception("Array is empty");
	}
	if (f) {
		int i = 0;
		while (i != 10) {
			if (i == 4)
				break;
			else
				mas[i] = 77;
			++i;
		}
	}
	else {
		int i = 0;
		while (i != 10) {
			if (i > 4) {
				mas[i] = 88;
				++i;
			}
			else {
				++i;
				continue;
				
			}
			
		}
	}
}
int main() {
	int mas[] = { 1,2,3,4,11,6,7,8,9,10 };
	ofstream f1;
	ifstream f2;
	f2.exceptions(ifstream::badbit | ifstream::failbit);

	try {
		f1.open("text.bin", ios::binary | ios::out);
		f1.write((char*)mas, sizeof(mas));
		f1.close();

		f2.open("text.bin", ios::binary | ios::in);
		for (int i = 0; i < 10; i++) {
			f2.read((char*)&mas[i], sizeof(int));
		}
		f2.close();
		if (mas[4] % 2 == 0) {
			bool f = 1;
			foo(mas, f);
		}

		else if (mas[4] % 2 != 0) {
			bool f = 0;
			foo(mas, f);
		}
		f1.open("text.bin", ios::binary | ios::out);
		f1.write((char*)mas, sizeof(mas));
		f1.close();

		f2.open("text.bin", ios::binary | ios::in);
		for (int i = 0; i < 10; i++) {
			f2.read((char*)&mas[i], sizeof(int));
			cout << mas[i] << " ";
		}
		f2.close();
	}
	catch (const exception& ex) {
		cout << ex.what() << "\n";
	}

}
