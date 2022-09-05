// read and write a first name and age
#include "std_lib_facilities.h"

int main()
{
	constexpr double yen_dollar {0.0074};
	constexpr double euro_dollar {1.02};

	double money {1};

	char currency {' '};
	char conversion {' '};

	cout << "Please enter an amount of money followed by the currency type and desired conversion.\ny for yen\nu for usd\ne for euro\n";
	cin >> money >> currency >> conversion;

	switch (currency) {
	case 'u':
		switch (conversion) {
		case 'y':
			cout << money / yen_dollar;
			break;
		case 'e':
			cout << money / euro_dollar;
			break;
		default:
			cout << "invalid operation!";
			break;

		}
	}
}
