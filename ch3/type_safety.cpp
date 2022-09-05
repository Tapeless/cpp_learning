// read and write a first name and age
#include "std_lib_facilities.h"

int main()
{
	double x; //oopsie! forgot to assign a val :O
	double y = x; //the value of y is undefined
	double z = 2.0 + x; //the meaning of + and the value of z are undefined
	cout << x << "\n" << y << "\n" << z;
}
