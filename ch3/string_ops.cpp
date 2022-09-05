// read and write a first name and age
#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter your first and second names\n";
	string first;
	string second;
	cin >> first >> second;
	// read two strings
	if (first == second) cout << "thats the same name twice :P\n";
	if (first < second) cout << first << " is alphabetically before " << second << "\n";
	if (first > second) cout << first << " is alphabetically after " << second << "\n";
}
