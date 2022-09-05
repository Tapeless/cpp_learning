#include "std_lib_facilities.h"

int main()
{
	//write a while loop that reads in two int vals and then prints them. exit when | is entered
	string a, b;
	vector<double> v;
	bool cond = true;
	cout << "enter two ints! enter \"|\" to quit\n";
	while (cond)
	{
		cin >> a >> b;
		if (a == "|" || b == "|")
			break;
		double a_num = stod(a);
        	double b_num = stod(b);
		v.push_back(a_num);
		v.push_back(b_num);
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
	}

}
