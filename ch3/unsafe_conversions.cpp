// read and write a first name and age
#include "std_lib_facilities.h"

int main()
{
	int a = 2000000;
	char c = a; //what will output here?
	int b = c; //reconvert to int

	if (a != b)
		cout << "uh-oh! " << a << "!=" << b << '\n';
	else
		cout << "it worked :thonkyface: " << a << '\n'; 
}
