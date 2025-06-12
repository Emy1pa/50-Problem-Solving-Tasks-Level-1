#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int ReadPositiveNumber(string Message){
    int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void CalculateNumberOfDays_Minutes_Seconds(int NumberOfSeconds){
	int SecondsPerDay = 24 * 60 * 60;
	int HoursPerDay = 60 * 60;
	int MinutesPerDay =  60;

	int NumberOfDays = NumberOfSeconds / SecondsPerDay;
	int Remainder = floor(NumberOfSeconds % SecondsPerDay);
	int NumberOfHours = Remainder / HoursPerDay;
	Remainder = floor(Remainder % HoursPerDay);
	int NumberOfMinutes = Remainder / MinutesPerDay;
	Remainder = floor(Remainder % MinutesPerDay);
	int SecondsRemainder = Remainder;

	cout << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << SecondsRemainder << endl;

}



int main() {
   
	int NumberOfSeconds = ReadPositiveNumber("Please enter the number of seconds ? \n");
	CalculateNumberOfDays_Minutes_Seconds(NumberOfSeconds);
    return 0;
}

