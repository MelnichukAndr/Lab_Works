#include "Header.h"
template Array <int>;

template <class T> Array<T>::Array(const T ind, const T size) {
	this->size = size;
	this->ind = ind;
	this->arr = new T[size];
}

template <class T> void Array<T>::fill_arr(const T n, const T idx) {
	this->arr[idx] = n;
}
template <class T> void Array<T>::sum_arr() {
	int sum = 0;
	for (int i = 0; i < ind; i++) {
		sum+=this->arr[i];
	}
	cout << "sum = " << sum << "\n";
}
template <class T> void Array<T>::average_arr() {
	double sum = 0;
	for (int i = 0; i < ind; i++) {
		sum += this->arr[i];
	}
	cout << "average = " << sum/ind << "\n";
}

template <class T> void Array<T>::print() {
	for (int i = 0; i < ind; i++) {
		cout << this->arr[i] << " ";
	}
}

template <class T> T& Array<T>::operator[](int idx) {
	try {
		if (ind < 0 || i > ind)
			throw exception("Error []");
		else
			return mas[i];
	}
}