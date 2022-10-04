#include "std_lib_facilities.h"

int main()
{
	//write a while loop that reads in two int vals and then prints them. exit when | is entered
	string a, b;
	vector<double> v;
	double smallest, largest; //define smallest, largest nums seen so far
	bool cond = true;
	double sum = 0;
	vector<double> vals;
	int i = 0; //init counter to ignore smallest/largest check at first loop
	cout << "continue to enter doubles (units cm, m, in, ft) for comparison! assumed m if no unit. enter \"|\" to quit\n";
	while (cond)
	{
		bool bad_input = false;
		getline(cin, a);
		if (a == "|") {
			cout << "Total val of entries (m): " << sum;
			sort(vals.begin(), vals.end());
			for (auto x : vals)
				cout << "\nEntries (m): " << x << " ";
			exit(0);
		}
                vector<string> bad_vals{"y","yard","meter","km","gallons"};
                for (int j = 0; j < bad_vals.size(); ++j)
                        if (a.find(bad_vals[j]) != string::npos) {
				bad_input = true;
                                cout << "bad input! dont do that again. please input a valid unit.\n";
                        }
                double a_num = stod(a);

		if (((a.find("m") != string::npos)) && (a.find("cm") == string::npos)) {
			string a_unit = "m";
		}
		if ((a.find("cm") != string::npos)) {
			string a_unit = "cm";
			a_num = a_num * 0.01;
		}
		if ((a.find("ft") != string::npos)) {
			string a_unit = "ft";
			a_num = a_num * 12 * 2.54 * 0.01;
		}
		if ((a.find("in") != string::npos)) {
			string a_unit = "in";
			a_num = a_num * 2.54 * 0.01;
		}
		if (not bad_input) {
			sum = sum + a_num;
			vals.push_back(a_num);
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
					cout << "The smaller value is: " << v[1] << " m" << '\n' << "The larger value is: " << v[0] << '\n';
				}
				if (v[1] > v[0])
				{
					cout << "The smaller value is: " << v[0] << " m" << '\n' << "The larger value is: " << v[1] << '\n';
				}
				if (v[0] == v[1])
					cout << "The numbers both equal: " << v[0] << '\n';
				if ((abs(v[1] - v[0]) < 1.0/100) && (abs(v[1] - v[0] != 0)))
					cout << "The numbers are almost equal: " << v[1] << ", " << v[0] << '\n';
				while (!v.empty())
				{
					v.pop_back();
				}

			}
			i++;
		}
	}

}
