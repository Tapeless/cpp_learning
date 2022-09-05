// read and write a first name and age
#include "std_lib_facilities.h"

int main()
{
	vector<double> temps; //temperatures
	for (double temp; cin>>temp;) //read into temp
		temps.push_back(temp); //put temp into last index of vector

	//compute mean temperature
	double sum = 0;
	for (int x : temps) sum += x;
	cout << "Average Temp: " << sum/temps.size() << '\n';

	//compute median temperature
	sort(temps); //sort temperatures
	cout << "Median temp: " << temps[temps.size()/2] << '\n';
}
