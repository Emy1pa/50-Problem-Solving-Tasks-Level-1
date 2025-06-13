#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadPositiveNumber(string Message){
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
float MonthlyInstallmentAmount(float LoanAmount, float HowManyMonths){
	return LoanAmount / HowManyMonths;
}

int main() {
    
	float LoanAmount = ReadPositiveNumber("Please enter the loan amount ?");
	float HowManyMonths = ReadPositiveNumber("Please enter how many months you need ?");

	cout << "The monthly installment amount is " << MonthlyInstallmentAmount(LoanAmount, HowManyMonths) << endl;
	return 0;
}

