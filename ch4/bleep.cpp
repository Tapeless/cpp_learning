// read and write a first name and age
#include "std_lib_facilities.h"

int main()
{
	vector<string> bleeps = {"beer","cubone","time"}; 	//not liked words
	vector<string> words; 					//input words

	for (string word; cin>>word;) 				//input
		words.push_back(word); 				//append

	for (int i = 0; i<words.size(); ++i) {			//iterate thru words
		for (int j = 0; j<bleeps.size(); ++j) 		//iterate thru bleeps
			if (words[i] == bleeps[j]) 		//check if word = bleep
				words[i] = "BLEEP";
				cout << words[i] << '\n';
	}
}
