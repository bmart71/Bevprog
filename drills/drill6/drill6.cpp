#include "../std_lib_facilities.h"

constexpr char number = '8';
constexpr char print = '=';
constexpr char quit = 'x';

double expression();

class Token {
public:
	char kind;
	double value;
	Token(): kind(0) {}
	Token(char ch): kind(ch), value(0) {}
	Token(char ch, double val): kind(ch), value(val) {}
};

class Token_stream {
public:
	Token_stream();
	Token get();
	void putback(Token t);
	void ignore(char c);
private:
	bool full;
	Token buffer;
};

Token_stream::Token_stream(): full(false), buffer(0) {}

void Token_stream::putback(Token t) {
	if (full) simple_error("Token_stream buffer is full\n");
	buffer = t;
	full = true;
}

Token Token_stream::get() {

	if(full)
	{
		full = false;
		return buffer;
	}

	char ch;
	cin >> ch;

	switch(ch){
		case quit:
		case print:
		case '(':
		case ')':
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
			return Token(ch);
		case '.':
		case '0':case '1':case '2':case '3':case '4':
		case '5':case '6':case '7':case '8':case '9':
		{
			cin.putback(ch);
			double val = 0;
			cin >> val;
			return Token(number,val);
		}
		default:
		{
			error("Bad token");
			return 1;
		}
	}
}

void Token_stream::ignore(char c) {

	if (full && c == buffer.kind) {
		full = false;
		return;
	}

	full = false;

	char ch = 0;
	while(cin >> ch)
		if(ch==c) return;
}

Token_stream ts;

double primary(){

	Token t = ts.get();
	switch(t.kind)	{
		case '(':
		{
			double d = expression();
			t = ts.get();
			if(t.kind != ')') error("')' expected");
			return d;
		}
		case number:		
			return t.value;
		case '-':
			return - primary();
		case '+':
			return primary();
		default:
			ts.putback(t);
			error("primary expected");
			return 0;
	}
}

double term() {

	double left = primary();
	Token t = ts.get();

	while(true){
		switch(t.kind){
			case '*':
				left *= primary();
				t = ts.get();
				break;
			case '/':
			{
				double d = primary();
				if(d == 0) error("Zero value in /");
				left /= d;
				t = ts.get();
				break;
			}
			case '%':
			{
				/*
				double d = primary();
				if(d==0) error("Zero value in %");
				left = fmod(left, d);
				t = ts.get();
				break;
				*/
				int i1 = narrow_cast<int>(left);
				int i2 = narrow_cast<int>(primary());
				if(i2 == 0) error("Zero value in %");
				left = i1 % i2;
				t = ts.get();
				break;
			}
			default:
				ts.putback(t);
				return left;
		}
	}
}

double expression() {

	double left = term();
	Token t = ts.get();

	while(true){
		switch(t.kind){
			case '+':
				left += term();
				t = ts.get();
				break;
			case '-':
				left -= term();
				t = ts.get();
				break;
			default:
				ts.putback(t);
				return left;
		}
	}
}

void clean_up_mess(){
	ts.ignore(print);
}

void calculate() {

	double val = 0;

	while (cin)
	try {
		Token t = ts.get();
		while(t.kind == print) t = ts.get();
		if(t.kind == quit) return;
		ts.putback(t);				
		cout << "=" << expression() << '\n';
	} catch (exception& e) {
		cerr << e.what() << '\n';
		clean_up_mess();
	}
}

int main()
try {
    cout << "Welcome to my simple calculator.\n";
    cout << "Please enter expressions using floating-point numbers.\n";
    cout << "Operators available: +, -, *, /, (, ), %.\n";
    cout << "To print the result, enter '=' and to quit, enter 'x'.\n";
    
	calculate();

	return 0;

} catch (exception& e) {
	cerr << "Error: " <<e.what() << '\n';
	return 1;
} catch (...) {
	cerr << "Error, something went wrong." << '\n';
	return 2;
}