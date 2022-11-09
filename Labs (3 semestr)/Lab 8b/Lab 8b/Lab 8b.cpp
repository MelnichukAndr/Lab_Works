﻿
#include "Header.h"

int main()
{
	srand(time(0));

	int n = 0;
	Array<int> ob(10);
	/*cout << "Enter count:";
	cin >> n;*/
	try {
		if (ob.get_ind() < n || n < 0)
			throw exception ("N < 0 or N > ind");
		
		
		for (int i = 0; i < ob.get_ind(); i++) {
			ob.fill_arr(rand() % 10,i);
		}
		ob.sum_arr();
		ob.average_arr();
		ob.print();
	}
	catch (const exception ex) {
		cout << ex.what();
	}
}

