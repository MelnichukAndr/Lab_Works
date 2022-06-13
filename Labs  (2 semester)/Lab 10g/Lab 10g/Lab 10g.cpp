#include <iostream>
using namespace std;
class timer {
	int sec;
	public:
	timer(int sec) {
		this->sec = sec;
		cout << "constructor " << this << endl;
	}
	timer(int sec, int min) {
		this->sec = sec + min * 60;
		cout << "constructor " << this << endl;
	}
	timer(const timer& other) {
		this->sec = other.sec;
		cout << "constructor " << this << endl;
	}
	
	void print() {
		cout << "sec = " << sec<<endl;
	}
	~timer() {
		cout <<"destructor " << this << endl;
	}
	
};

int main()
{
	timer FirstValue(30);
	timer SecondValue(10, 1);
	timer ThirdValue(FirstValue);
	FirstValue.print();
	SecondValue.print();
	ThirdValue.print();
}