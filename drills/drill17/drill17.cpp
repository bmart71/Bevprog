#include "../../std_lib_facilities.h"
//4.
void print_array10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i)
		os << a[i] << endl;
}

void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
		os << a[i] << endl;
}

void print_vector(ostream& os, vector<int> v)
{
	for (int i = 0; i < v.size(); ++i)
		os << v[i] << endl;
}

int main(){
	//1.
	int* a = new int[10];
	//2.
	cout << ">>No. 2:" << endl;
	for (int i = 0; i < 10; ++i)
		cout << a[i] << endl;
	//3.
	delete[] a;

	//5.
	cout << ">>No. 5:" << endl;
	int* b = new int[10];
	for (int i = 0; i < 10; ++i)
		b[i] = 100 + i;
	print_array10(cout, b);
	cout << endl;
	delete[] b;

	//6.
	cout << ">>No. 6:" << endl;
	int* c = new int[11];
	for (int i = 0; i < 11; ++i)
		c[i] = 100 + i;
	print_array(cout, c, 11);
	cout << endl;
	delete[] c;

	//8.
	cout << ">>No. 8:" << endl;
	int* d = new int[20];
	for (int i = 0; i < 20; ++i)
		d[i] = 100 + i;
	print_array(cout, d, 20);
	delete[] d;

	//9. <done>
	//10/5.
	cout << ">>No. 10/5:" << endl;
	vector<int> e(10);
	for (int i = 0; i < 10; ++i)
		e[i] = 100 + i;
	print_vector(cout, e);
	cout << endl;

	//10/6.
	cout << ">>No. 10/6:" << endl;
	vector<int> f(11);
	for (int i = 0; i < 11; ++i)
		f[i] = 100 + i;
	print_vector(cout, f);
	cout << endl;

	//10/8.
	cout << ">>No. 10/6:" << endl;
	vector<int> g(20);
	for (int i = 0; i < 20; ++i)
		g[i] = 100 + i;
	print_vector(cout, g);
	cout << endl;

	//Part 2:

	//1.
	cout << ">>Pt. 2, No. 1:" << endl;
	int x = 7;
	int* p1 = &x;

	//2.
	cout << ">>Pt. 2, No. 2:" << endl;
	cout << "x = " << x << '\n';
	cout << "*p1 = " << *p1 << '\n';

	//3.
	cout << ">>Pt. 2, No.36:" << endl;
	int* p2 = new int[7];
	for (int i = 0; i < 7; ++i)
		p2[i] = pow(2,i);

	//4.
	cout << ">>Pt. 2, No. 4:" << endl;
	print_array(cout, p2, 7);

	//5.
	cout << ">>Pt. 2, No. 5:" << endl;
	int* p3 = p2;

	//6-7.
	cout << ">>Pt. 2, No. 6 & 7:" << endl;
	p1 = p2;
	p3 = p2;

	//8.
	cout << ">>Pt. 2, No. 8:" << endl;
	cout << "p1 = " << p1 << '\n';
	cout << "*p1 = " << *p1 << '\n';
	cout << "p2 = " << p2 << '\n';
	cout << "*p2 = " << *p2 << '\n';

	//9.
	cout << ">>Pt. 2, No. 9:" << endl;
	delete[] p2;

	//10.
	cout << ">>Pt. 2, No. 10:" << endl;
	p1 = new int[10];
	for (int i = 0; i < 10; ++i)
		p1[i] = pow(2,i);
	print_array(cout, p1, 10);

	//11.
	cout << ">>Pt. 2, No. 11:" << endl;
	p2 = new int[10];
	print_array(cout, p2, 10);

	//12.
	cout << ">>Pt. 2, No. 12:" << endl;
	for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];
	print_array(cout, p2, 10);

	delete[] p1;
	delete[] p2;

	//13/10.
	cout << ">>Pt. 2, No. 13/10:" << endl;
	vector<int> t1(10);
	for (int i = 0; i < t1.size(); ++i)
		t1[i] = pow(2,i);
	print_vector(cout, t1);


	//13/11.
	vector<int> t2(10);

	//13/12.
	cout << ">>Pt. 2, No. 12:" << endl;
	for (int i = 0; i < t2.size(); ++i)
		t2[i] = t1[i];
	print_vector(cout, t2);

	return 0;
}
