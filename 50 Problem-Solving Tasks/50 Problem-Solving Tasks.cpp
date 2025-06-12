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

int CalculateRemainder(int TotalBill, int CashPaid){
	return TotalBill - CashPaid;
}





int main() {
   
	int TotalBill = ReadPositiveNumber("Please enter the total bill ?");
	int CashPaid = ReadPositiveNumber("please enter the cash paid ?");
	cout << "Remainder = " << CalculateRemainder(TotalBill, CashPaid) << endl;
    return 0;
}

