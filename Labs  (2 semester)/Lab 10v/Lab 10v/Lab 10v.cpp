#include <iostream>
using namespace std;

class SUM {
	int x, y, sum;
public:
	SUM() {
		x = 0;
		y = 0;
		sum = 0;
	};
	SUM(int x, int y) {
		this->x = x;
		this->y = y;
		this->sum = 0;
	};
	void setX(int x) {
		this->x = x;
	};
	void setY(int y) {
		this->y = y;
	};
	
	void PrintAllValues() {
		cout << "x   = " << x <<"\n" << "y   = " << y<<"\n" << "sum = " << sum << "\n\n";
	}
	void CalculateSum() {
		sum = x + y;
		cout << "sum = " << sum << "\n\n";
	}
	
};
int main()
{
	cout << "default constructor with setters:\n\n";
	SUM FirstValue;
	FirstValue.setX(2);
	FirstValue.setY(3);
	FirstValue.PrintAllValues();
	FirstValue.CalculateSum();
	
	cout << "constructor with parameters:\n\n";
	SUM SecondValue(3, 4);
	SUM* pointer = &SecondValue;
	pointer->PrintAllValues();
	pointer->CalculateSum();
}