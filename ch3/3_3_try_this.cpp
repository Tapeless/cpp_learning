// read and write a first name and age
#include "std_lib_facilities.h"

int main()
{
	cout << "pls enter naem and number!\n";
	string name;
	double number;
	cin >> name >> number;
	number = number * 12;
	cout << "hello " << name << ", whomst'vest' is " << number << " months old :O\n";
}
