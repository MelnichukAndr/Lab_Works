
#include <iostream>

using namespace std;
int main()
{
	const int sec_In_Min = 60;
	int sec_In_Hour = 60 * sec_In_Min;
	int sec_In_Day = 24 * sec_In_Hour;
	int sec_In_Year = 365 * sec_In_Day;
	long long sec_In_100_Years = 100 * sec_In_Year; // переполнение
	long long sec_In_1000_Years = 1000 * sec_In_Year; // переполнение
}

