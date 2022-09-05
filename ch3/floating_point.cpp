// read and write a first name and age
#include "std_lib_facilities.h"

int main()
{
	cout << "Enter int val: ";
	int m;
	cin >> m;
	double n = m;
	cout << "n == " << n
		<< "\nn+1 == " << n+1
		<< "\n 3*n == " << 3*n
		<< "\ntwice n == " << n+n
		<< "\nn squared == " << n*n
		<< "\nhalf of n == " << n/2
		<< "\nsquare root of n == " << sqrt(n)
		<< "\n";
}
