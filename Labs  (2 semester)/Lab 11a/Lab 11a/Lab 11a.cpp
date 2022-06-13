#include <iostream>
using namespace std;
class point {
	int x, y;
public:
	point() {
		x = 0;
		y = 0;
	}
	point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	point(const point& other) {
		this->x = other.x;
		this->y = other.y;
	}
	void setX(int x) {
		this->x = x;
	};
	void setY(int y) {
		this->y = y;
	};
	void foo(int& sum, int& product) {
		sum = x + y;
		product = x * y;
	}
	void print() {
		cout << "x = " << x << "\ny = " << y << endl;
	}
};
int main()
{
	int sum, product;
	point FirstValue;
	FirstValue.print();
	FirstValue.foo(sum, product);
	cout << "sum = " << sum << "\nproduct = " << product << endl;
	cout << "\n";
	FirstValue.setX(5);
	FirstValue.setY(7);
	FirstValue.print();
	FirstValue.foo(sum, product);
	cout << "sum = " << sum << "\nproduct = " << product << endl;
	cout << "\n";
	point SecondValue(2,5);
	SecondValue.print();
	SecondValue.foo(sum, product);
	cout << "sum = " << sum << "\nproduct = " << product << endl;
	cout << "\n";
	point ThirdValue(FirstValue);
	ThirdValue.print();
	ThirdValue.foo(sum, product);
	cout << "sum = " << sum << "\nproduct = " << product << endl;
}
