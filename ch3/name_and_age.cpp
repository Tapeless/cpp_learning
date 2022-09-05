// read and write a first name and age
#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter your declared age, constructed age, and uniform init age\n";
	int age = 10; // giving init value so we know if age not known
	int b_age (10);
	int c_age {10};
	cout << "age is: " << age << " " << b_age << " " << c_age << "\n";
	cin >> age >> b_age >> c_age;
	cout << "age is: " << age << " " << b_age << " " << c_age << "\n";
}
