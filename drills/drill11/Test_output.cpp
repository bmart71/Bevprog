#include "../../std_lib_facilities.h"

int main(){
	int birth_year = 2001;

	cout << "decimal:\t" << birth_year << '\n' 
		<< "hexadecimal:\t" << hex << birth_year << '\n' 
		<< "octal:\t\t" << oct << birth_year << dec << endl;

	cout << "age:\t\t" << 20 << endl;

	cout << "\nprevs with base:" << endl;

	cout << "decimal:\t" << showbase << birth_year << '\n' 
		<< "hexadecimal:\t" << hex << birth_year << '\n' 
		<< "octal:\t\t" << oct << birth_year << dec << endl << endl;

	int a, b, c, d;

	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\n' ;

	cout << "\ndef:\t\t" << 1234567.89 << '\n' 
		<< "fixed:\t\t" << fixed << 1234567.89 << '\n' 
		<< "scientific:\t" << scientific << 1234567.89 << endl << endl;

	cout << '|' << setw(12) << "sample1" << '|' << setw(12) << "sampfor1"
		 << '|' << setw(30) << "sample.first1@terminal.com"
		 << '|' << setw(18) << "+30 12 564-5156|" << endl
		 << '|' << setw(12) << "firstname1" << '|' << setw(12) << "forname1"
		 << '|' << setw(30) << "first.name1@terminal.com" 
		 << '|' << setw(18) << "+30 55 546-2246|" << endl
		 << '|' << setw(12) << "name122" << '|' << setw(12) << "forname"
		 << '|' << setw(30) << "name122for@terminal.com"
		 << '|' << setw(18) << "+30 30 754-6561|" << endl;

	return 0;
}