#include "std_lib_facilities.h"

int main(){
	bool supported = true;
	bool is_first = true;
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
			cout << "Your input: " << input_conv << unit << endl;
			if (is_first){
				is_first = false;
				min = input_conv;
				max = input_conv;
			}else{
				if (input_conv < min){
					min = input_conv;
					cout << "smallest so far.\n";
				}
				else if (input_conv > max){
					max = input_conv;
					cout<<"largest so far.\n";
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