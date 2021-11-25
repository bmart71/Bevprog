#include "../../std_lib_facilities.h"

int sga = 10;
int* ga = new int[sga]{1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void print_array(const int a[], int b){
	for (int i = 0; i < b; ++i)
		cout << a[i] << '\n';
}

void f(int arr[], int s){
	int* la = new int[s];

	for (int i = 0; i < s; ++i)
		la[i] = arr[i];

	cout << ">>la's values: " << endl;
	print_array(la, s);

	int* p = new int[s];
	for (int i = 0; i < s; ++i)
		p[i] = arr[i];

	cout << ">>p's values: " << endl;
	print_array(p, s);

	delete[] la;
	delete[] p;
}

int main(){
	f(ga, sga);
	delete[] ga;

	int* aa = new int[sga] { 1 };
	for (int i = 1; i < sga; ++i)
		aa[i] = aa[i-1]*(i+1);

	cout << ">>aa's values: " << endl;
	print_array(aa, sga);

	delete[] aa;
	return 0;
}
