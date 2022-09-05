// read and write a first name and age
#include "std_lib_facilities.h"

int main()
{
	double x {2.7}; // OK
	int y {x}; //wont compile: double -> might narrow

	int a {1000}; // OK
	char b {a}; //wont compile: int -> char might narrow

	int char b1 {1000}; //error: narrowing (assuming 8-bit chars)
	char b2 {48}; // OK
}
