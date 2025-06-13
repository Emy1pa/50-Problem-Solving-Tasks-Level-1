#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enDayOfTheWeek {Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6, Sunday = 7};

int ReadPositiveNumber(string Message){
    int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

enDayOfTheWeek ReadDayOfTheWeek() {
	int Day = ReadPositiveNumber("Please choose a specefic day ? (1 - 7)");
	return (enDayOfTheWeek)Day;
}
string DisplayDayOfTheWeek(enDayOfTheWeek DayOfTheWeek){
	switch (DayOfTheWeek)
	{
	case enDayOfTheWeek::Monday:
		return "It is Monday";
	case enDayOfTheWeek::Tuesday:
		return "It is Tuesday";
	case enDayOfTheWeek::Wednesday:
		return "It is Wednesday";
	case enDayOfTheWeek::Thursday:
		return "It is Thursday";
	case enDayOfTheWeek::Friday:
		return "It is Friday";
	case enDayOfTheWeek::Saturday:
		return "It is Saturday";
	case enDayOfTheWeek::Sunday:
		return "It is Sunday";
	default:
		return "Not a Week Day";
	}
}

int main() {
    
	cout << DisplayDayOfTheWeek(ReadDayOfTheWeek()) << endl;
	return 0;
}

