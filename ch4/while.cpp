// read and write a first name and age
#include "std_lib_facilities.h"

int main()
{
	int i = 0;
	char a = i;
	while (i<123) {
		cout << a << '\t' << i << '\n';
		++i; //increment i
		a = i; //update char val
	}
}
