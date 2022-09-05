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

	if (currency == 'u')
		if (conversion == 'y')
			cout << money / yen_dollar;
		else if (conversion == 'e')
			cout << money / euro_dollar;
		else
			cout << "invalid operation!";

	else if (currency == 'y')
		if (conversion == 'u')
			cout << money * yen_dollar;
		else if (conversion == 'e')
			cout << money * yen_dollar / euro_dollar;
		else
			cout << "invalid operation!";

	else if (currency == 'e')
		if (conversion == 'u')
			cout << money * euro_dollar;
		else if (conversion == 'y')
			cout << money * euro_dollar / yen_dollar;
		else
			cout << "invalid operation!";
}
