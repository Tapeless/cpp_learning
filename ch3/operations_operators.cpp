// read and write a first name and age
#include "std_lib_facilities.h"

int main()
{
	int count;
	cin >> count; //reads integer into count
	string name;
	cin >> name; //reads an string into name

	int c2 = count + 2; //adds integers
	string s2 = name + " Jr."; //appends characters

	int c3 = count-2; //subtracts integers
//	string s3 = name - "Jr. "; //invalid operation

	cout << count << " " << c2 << " " << c3 << "\n";
	cout << name << "  " << s2 << "\n";
	cout << "neat :^)";
}
