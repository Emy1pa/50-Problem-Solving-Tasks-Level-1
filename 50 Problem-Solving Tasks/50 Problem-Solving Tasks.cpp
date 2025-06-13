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
float TotalOfMonths(float LoanAmount, float MonthlyPayment){
	return LoanAmount / MonthlyPayment;
}

int main() {
    
	float LoanAmount = ReadPositiveNumber("Please enter the loan amount ?");
	float MonthlyPayment = ReadPositiveNumber("Please enter the monthly payment ?");

	cout << "The Total of months is" << TotalOfMonths(LoanAmount, MonthlyPayment) << " Months" << endl;
	return 0;
}

