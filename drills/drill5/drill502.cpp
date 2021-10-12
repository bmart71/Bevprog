#include "../std_lib_facilities.h"


int main(){
	try
	{
		cout << "No.1 Success!\n";


		cout << "No.2 Success!\n";


		cout << "No.3 Success" << "!\n";


		cout << "No.4 success" << '\n';

		
		int res = 7; 
		vector<int> v(10); v[5] = res;
		cout << "No.5 Success!\n";


		vector<int> w(10); v[5] = 7;
		if (w[5]==7) cout << "No.6 Success!\n";


		if (true)
			cout << "No.7 Success!\n";	
		else 
			cout << "No.7 Fail!\n";


		bool c = false;
		if (!c)
			cout << "No.8 Success!\n";
		else 
			cout << "No.8 Fail!\n";


		string s = "ape";
		string d = "fool";
		if (d.length()!=0)
			cout << "No.9 Success!\n";
		

		if (d=="fool")
			cout << "No.10 Success!\n";
		

		if (s=="ape")
			cout << "No.11 Success!\n";


		if (s!="fool")
			cout << "No.12 Success!\n";


		vector<char> x(5);
		for (int i=0; i<x.size(); ++i)
			cout << "No.13 Success!\n";

		
		vector<char> y(5); 
		for (int i=0; i<y.size(); i++)
			cout << "No.14 Success!\n";

		
		string s15 = "No.15 Success!";
		for (int i=0; i<6; ++i)
			cout << s15 << endl;

		
		if (true)
			cout << "No.16 Success!\n";
		else
			cout << "No.16 Fail!\n";

		
		int x16 = 2000;
		int c16 = x16;
		if (c16==2000)
			cout << "No.17 Success!\n";

		
		string s18 = "No.18 Success!\n"; 
		for (int i=0; i<10; ++i) 
			cout << s18;

		
		vector<int> z(5);
		for (int i=0; i<z.size(); ++i)
			cout << "No.19 Success!\n";

		
		int i=0;
		int j = 9;
		while (i<10){
			if (i<j){
				cout << "No.20 Success!\n";
			}
			i++;
		}


		double x21 = 2; 
		double d21 = 5/(x21/2); 
		if (d21==2*(x21+0.5)) 
			cout << "No.21 Success!\n";

		
		string s22 = "No.22 Success!\n"; 
		for (int i=0; i<10; ++i)
			cout << s22;

		
		int j23=6;
		int i23=0; 
		while (i23<10)
			++i23;
			if (i23<j23) 
				cout << "No.23 Success!\n";

		
		double x24 = 4;
		double d24 = 5/(x24-2);
		if (d24==0.5*x24+0.5)
			cout << "No.24 Success!\n";

		
		cout << "No.25 Success!\n";
		return 0;
	}
	catch (exception& e) 
	{
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...)
	{
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
}
