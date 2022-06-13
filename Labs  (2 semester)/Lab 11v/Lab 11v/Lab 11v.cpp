#include <iostream>
using namespace std;
class complex {
	double r, m;
	void AddR(int r) {
		this->r += r;
	}
	void AddM(int m) {
		this->m += m;
	}
public:
	complex() {
		r = 0;
		m = 0;
	}
	complex(double r, double m) {
		this->r = r;
		this->m = m;
	}
	void SetR(double r) {
		this->r = r;
	}
	void SetM(double m) {
		this->m = m;
	}
	void Sum(const complex& other) {
		AddR(other.r);
		AddM(other.m);
	}
	void print() {
		cout << r << " + " << m << "i" << endl;
	}
};
	
int main()
{
	complex FirstComplex;
	FirstComplex.SetR(5);
	FirstComplex.SetM(3);
	complex SecondComplex;
	SecondComplex.SetR(2);
	SecondComplex.SetM(6);
	FirstComplex.Sum(SecondComplex);
	FirstComplex.print();
}