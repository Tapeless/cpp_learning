// read and write a first name and age
#include "std_lib_facilities.h"


int square(int x)
{
	int y = 0;
	for(int i=0; i<x;++i) {
		y+=x;
	}
	return y;
}

int main()
{
	for(int i=0;i<100;++i) {
		cout << i << '\t' << square(i) << '\n';
	}
}
