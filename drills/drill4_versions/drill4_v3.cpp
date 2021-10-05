#include "std_lib_facilities.h"

int main(){/*
	double first_number = 0;
	double second_number = 0;
	double difference = 0;*/


	/* 1. 2. 3. 4.
	while(cin >> first_number >> second_number){
		
		if (first_number > second_number){
			cout << "the smaller value is: " << first_number << endl;
			cout << "the bigger value is: " << second_number << endl;
		}
		else if (first_number < second_number){
			cout << "the smaller value is: " << second_number << endl;
			cout << "the bigger value is: " << first_number << endl;
		}
		else
			cout << "they are equal\n";
	}*/
	/*5.
	while(cin >> first_number >> second_number){
		
		if (first_number > second_number){
			cout << "the smaller value is: " << first_number << endl;
			cout << "the bigger value is: " << second_number << endl;
			difference = first_number - second_number;
			if (difference < 0.01)
				cout << "the numbers are almost equal\n";
		}
		else if (first_number < second_number){
			cout << "the smaller value is: " << second_number << endl;
			cout << "the bigger value is: " << first_number << endl;
			difference = second_number - first_number;
			if (difference < 0.01)
				cout << "the numbers are almost equal\n";
		}
		else
			cout << "they are equal\n";
	}*/
	/*
	while(cin >> input_each){
		cout << "Your input: " << input_each << endl;
		if (input_each < min){
			cout << "Smallest so far." << endl;
			min = input_each;
		}
		if (input_each > max){
			cout << "Largest so far." << endl;
			max = input_each;
		}
	}*/

	/*
	while(cin >> input_each >> unit){		//standard: meters
		cout << "Your input: " << input_each << unit << endl;		
		if (unit=="cm")
			input_each = input_each / 100;
		if (unit=="ft")
			input_each = input_each * ft_to_m;
		if (unit=="in")
			input_each = input_each * in_to_cm;
		if (input_each < min){
			cout << "Smallest so far." << endl;
			min = input_each;
		}
		if (input_each > max){
			cout << "Largest so far." << endl;
			max = input_each;
		}
	}*/
	bool supported = true;
	bool first_input = true;
	double input_each = 0.0;
	double input_conv = 0;
	double min = 0;
	double max = 0;
	double sum = 0;

	string unit;

	while(cin >> input_each >> unit){		//standard: meters

		supported = true;

		if (unit == "cm"){
			input_conv = input_each/100;
		}
		else if (unit == "m"){
			input_conv = input_each;
		}
		else if (unit == "ft"){
			input_conv = input_each*0.0254;
		}
		else if (unit == "in"){
			input_conv = input_each*0.0254*12;
		}
		else{
			cout << "Unsupported unit!\n";
			supported = false;
		}
		if (supported){
			cout << "Your input: " << input_each << unit << endl;
			if (first_input){
				min = input_conv;
				first_input = false;
			}
			else {
				if (input_conv < min){
					cout << "Smallest so far." << endl;
					min = input_conv;
				}
				if (input_conv > max){
					cout << "Largest so far." << endl;
					max = input_conv;
				}
			}
			sum += input_conv;
		}
	}
	cout << "sum of numbers: " << sum << " m" << endl;
	cout << "smallest number: " << min << " m" << endl;
	cout << "largest number: " << max << " m" << endl;
	return 0;
}