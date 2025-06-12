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
void CalculateNumberOfWeeks_Days(float NumberOfHours){
	float NumberOfDays = NumberOfHours / 24;
	float NumberOfWeeks = NumberOfDays / 7;
	cout << NumberOfDays << " Days \n";
	cout << NumberOfWeeks << " Weeks \n";
}







int main() {
   
	float NumberOfHours = ReadPositiveNumber("Please enter the number of hours ?");
	CalculateNumberOfWeeks_Days(NumberOfHours);
    return 0;
}

