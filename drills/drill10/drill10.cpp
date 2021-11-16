#include "../../std_lib_facilities.h"

struct Point {
	int x, y;
};

istream& operator>>(istream& is, Point& p){
	char op1;
	if(is >> op1 && op1 != '('){
		is.unget();
		is.clear(ios_base::failbit);
		return is;
	}

	char op2, op3;
	int isx, isy;

	is >> isx >> op2 >> isy >> op3;
	if(!is || op3 != ')'){
		if (is.eof()) return is;
		error("bad point");
	}
	p.x = isx;
	p.y = isy;
	return is;
}

ostream& operator<<(ostream& os, Point& p){
	return os << '(' << p.x << ',' << p.y << ')';
}

bool operator==(const Point& p1, const Point& p2){
	return p1.x == p2.x && p1.y == p2.y;
}

bool operator!=(const Point& p1, const Point& p2){
	return !(p1 == p2);
}

void vector_compare(const vector<Point>& point1, const vector<Point>& point2){
	if(point1.size() != point2.size())
		error("The two vectors' size differ!");
	for(int i = 0; i < point1.size(); ++i){
		if(point1[i] != point2[i])
			error("The two vectors' values differ!");
	}
}

void load_from_file(vector<Point>& points, string& name){
	ifstream ist {name};
	if(!ist) error("Couldn't open the file");
	for(Point p; ist >> p;)
		points.push_back(p);
}

int main(){
try{
	cout << "Please enter 7 points in '(x,y)' format.\n";
	vector<Point> original_points;

	while (original_points.size() < 7){
		Point p;
		cin >> p;
		original_points.push_back(p);
	}

	cout << ">>Your points: \n";
	for (Point p : original_points)
		cout << p << ' ';
	cout << endl;

	string fname = "mydata.txt";
	ofstream ost {fname};
	if(!ost) error("Couldn't open the file");

	for(Point& p : original_points)
		ost << p;
	ost.close();

	cout << ">>Points from " << fname << ":\n";

	vector<Point> processed_points;
	load_from_file(processed_points, fname);

	for(int i = 0; i < processed_points.size(); ++i)
		cout << processed_points[i] << ' ';
	cout << endl;

	return 0;
} catch (exception& e){
	cerr << "Error: " << e.what() << endl;
} catch (...){
	cerr << "Unknown exception!\n";
}
}