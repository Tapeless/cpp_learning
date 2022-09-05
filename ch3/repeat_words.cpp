// read and write a first name and age
#include "std_lib_facilities.h"

int main()
{
	int number_of_words = 0;
	string previous = " "; //previous word, initialized empty
	string current; //current word, no init?
	while (cin>>current) {	//read stream of words
		++number_of_words; //increment var by 1
		if (previous == current) //check if word same as last
			cout << "word number" << number_of_words << "; " << "repeated word: " << current << "\n";
		previous = current;
		}
}
