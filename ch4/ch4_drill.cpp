#include "std_lib_facilities.h"

int main()
{
	//write a while loop that reads in two int vals and then prints them. exit when | is entered
	string a, b;
	vector<double> v;
	double smallest, largest; //define smallest, largest nums seen so far
	bool cond = true;
	int i = 0; //init counter to ignore smallest/largest check at first loop
	cout << "continue to enter doubles for comparison! enter \"|\" to quit\n";
	while (cond)
	{
		cin >> a;
		if (a == "|")
			break;
		double a_num = stod(a);
		v.push_back(a_num);

		if (i < 1) { //start condition
			largest = a_num;
			smallest = a_num;
		}
		else { //comparison condition
			if (a_num < smallest) {
				cout << a_num << ": The smallest so far!\n";
				smallest = a_num;
			}
			if (a_num > largest) {
				cout << a_num << ": The largest so far!\n";
				largest = a_num;
			}
		}

		if (v.size() == 2)
		{
			if (v[0] > v[1])
			{
				cout << "The smaller value is: " << v[1] << '\n' << "The larger value is: " << v[0] << '\n';
			}
			if (v[1] > v[0])
			{
				cout << "The smaller value is: " << v[0] << '\n' << "The larger value is: " << v[1] << '\n';
			}
			if (v[0] == v[1])
				cout << "The numbers both equal: " << v[0] << '\n';
			if (abs(v[1] - v[0]) < 1.0/100)
				cout << "The numbers are almost equal: " << v[1] << ", " << v[0] << '\n';
			while (!v.empty())
			{
				v.pop_back();
			}

		}
		i++;
	}

}
