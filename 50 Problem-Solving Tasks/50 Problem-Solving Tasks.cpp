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

float CalculateTotalBill(float BillValue){
	float TotalBill = BillValue * 1.1;
	TotalBill *= 1.16;
	return TotalBill;
}





int main() {
   
	float BillValue = ReadPositiveNumber("Please enter the bill value ?");
	cout << "Bill Value = " << BillValue << endl;
	cout << "************************\n";
	cout << "Total Bill = " << CalculateTotalBill(BillValue) << endl;
    return 0;
}

