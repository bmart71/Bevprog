#include "std_lib_facilities.h"

int main (){
		
	//1.
	string first_name;
	string last_name;
	cout << "Please, enter your name: ";
	cin >> first_name >> last_name;
	cout << "Hello " << first_name + " " + last_name <<"!"<< endl;
	
	//2.
	cout << "How are you?" << endl;
	
	//3.
	string friend_name;
	cout << "Please, enter your friend's name, you want to write to: ";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";
	
	//4.
	char friend_gender = '0';
	
	cout << "Please, enter your friend's gender(m/f): ";
	cin >> friend_gender;
	if (friend_gender == 'f')
		cout << "If you see " << friend_name << " please ask her to call me." << endl;
	else if (friend_gender == 'm')
		cout << "If you see " << friend_name << " please ask him to call me." << endl;
	else
		cout << "I don't understand" << endl;
		
	//5.
	
	int age = 0;
	cout << "Please, enter your friend's age: ";
	cin >> age;
	cout << "Dear, " << friend_name << endl;
	if (110 > age){
		if (0 < age) {
			cout << "I heard you just had a birthday and you are " << age << " years old." << endl;
			if (age < 12)
				cout << "Next year you will be " << age+1 << " years old.\n";
	/*6.*/	if (age == 17)
				cout << "Next year you will be able to vote.\n";
			if (age > 70)
				cout << "I hope you are enjoying retirement.\n";
		}
		else 
			cout << "You're kidding" << endl;
	}
	else
		cout << "You're kidding" << endl;
	//7.
	cout << "Yours sincerely,\n" << first_name + " " + last_name << endl;

	return 0;
}
