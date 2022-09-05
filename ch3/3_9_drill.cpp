// read and write a first name and age
#include "std_lib_facilities.h"

int main()
{
	cout << "Enter the name of the person you want to write to: ";
	string first_name {" "};
	cin >> first_name;
	int age {0};
	cout << "\nHow old are they? ";
	cin >> age;

	cout << "Enter the name of a friend you want to mention, and their gender (m/f/n): ";
	string friend_name {" "};
	char friend_sex {'0'};
	cin >> friend_name >> friend_sex;

	cout << "	Dear " << first_name << ",\n";
	cout << "How are you? I'm doing well...\n";
	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to hit up my line bruv.\n";
	if (friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to ring my cellular bestie ;)\n";
	if (friend_sex != 'f' and friend_sex != 'm')
		cout << "If you see " << friend_name << " please let them know they r very cool :~)\n";
	
	cout << "I heard you just had a bday girlboss. I had heard that you're finally " << age << " years old :O wowie wowie.\n";
	if (age < 12)
		cout << "Next year you'll be " << age+1 << "! getting older by da day :')\n";
	if (age == 17)
		cout << "Next year you can vote, nerd\n";
	if (age > 70)
		cout << "gettin up there oldielocks.\n";

	cout << "	yours,\n";
	cout << "donkerino cappucinno\n...\n..\n.";

}
