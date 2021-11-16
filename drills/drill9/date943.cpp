#include "../../std_lib_facilities.h"

class Date {
	int year, month, day;
public:
	Date(int y, int m, int d);
	void add_day(int n);
	int get_year(){ return year; }
	int get_month(){ return month; }
	int get_day(){ return day; }
};

Date::Date(int y, int m, int d)
{
	if (y > 0)
		year = y;
	else error("Invalid year");
	if (m < 13 && m > 0)
		month = m;
	else error("Invalid month");
	if (d > 0 && d < 32)
		day = d;
	else error("Invalid day");
}

void Date::add_day(int n)
{
	day += n;
	if (day > 31) 
	{
		month++;
		day -= 31;
		if (month > 12)
		{
			year++;
			month -= 12;
		}
	}
}

ostream& operator<<(ostream& os, Date& d)
{
	return os << '(' << d.get_year() << ',' << d.get_month() << ',' << d.get_day() << ')';
}

int main()
try {
	Date today {1978, 6, 25};

	Date tomorrow = today;
	tomorrow.add_day(1);

	cout << "Today: "<< today << "\n" << "Tomorrow: " << tomorrow << '\n';

	return 0;

} catch (exception& e) {
	cout << "Error: " << e.what() << '\n';
	return 1;
}