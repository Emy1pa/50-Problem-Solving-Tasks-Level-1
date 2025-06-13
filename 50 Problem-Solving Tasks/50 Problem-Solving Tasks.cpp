#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enMonthOfTheYear {Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12};

int ReadPositiveNumber(string Message, int From, int To){
    int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < From || Number > To);
	return Number;
}

enMonthOfTheYear ReadMonthOfTheYear() {
	int Month = ReadPositiveNumber("Please choose a specefic month ? (1 - 12)", 1, 12);
	return (enMonthOfTheYear)Month;
}
string DisplayMonthOfTheYear(enMonthOfTheYear Month){
	switch (Month)
	{
	case enMonthOfTheYear::Jan:
		return "It is January";
	case enMonthOfTheYear::Feb:
		return "It is February";
	case enMonthOfTheYear::Mar:
		return "It is March";
	case enMonthOfTheYear::Apr:
		return "It is April";
	case enMonthOfTheYear::May:
		return "It is May";
	case enMonthOfTheYear::Jun:
		return "It is June";
	case enMonthOfTheYear::Jul:
		return "It is July";
	case enMonthOfTheYear::Aug:
		return "It is August";
	case enMonthOfTheYear::Sep:
		return "It is September";
	case enMonthOfTheYear::Oct:
		return "It is October";
	case enMonthOfTheYear::Nov:
		return "It is November";
	case enMonthOfTheYear::Dec:
		return "It is December";
	default:
		return "Not a Month Year";
	}
}

int main() {
    
	cout << DisplayMonthOfTheYear(ReadMonthOfTheYear()) << endl;
	return 0;
}

