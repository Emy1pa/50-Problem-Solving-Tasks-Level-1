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
void PrintResult(){
	int Balance = 7500;
	int AtmPin = 0;
	do
	{
		AtmPin = ReadPositiveNumber("Please enter the ATM_PIN code ?");
		if (AtmPin == 1234) {
			cout << "Your balance is " << Balance << endl;
		}
		else {
			cout << "Wrong PIN \n";
		}

	} while (AtmPin != 1234);
}


int main() {
	PrintResult();
	return 0;
}

