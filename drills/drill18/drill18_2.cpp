#include "../../std_lib_facilities.h"

vector<int> gv {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void print_vector(vector<int> v){
	for(int i = 0; i < v.size(); ++i)
		cout << v[i] << '\n';
}

void f(vector<int> v){
	vector<int> lv(10);
	for (int i = 0; i < v.size(); ++i)
		lv[i] = v[i];

	cout << ">>lv's values: " << '\n';
	print_vector(lv);

	vector<int> lv2 = lv;
	cout << ">>lv2's values: " << '\n';
	print_vector(lv2);
}

int main(){
	cout << ">>gv:\n";
	f(gv);

	cout << ">>vv:\n";
	vector<int> vv;
	vv.push_back(1);
	for (int i = 1; i < 10; ++i)
		vv.push_back((i+1)*vv[i-1]);
	f(vv);

	return 0;
}