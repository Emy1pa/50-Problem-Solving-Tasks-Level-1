#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string ReadPinCode() {
	string PinCode;
	cout << "Please enter PIN Code \n";
	cin >> PinCode;
	return PinCode;

}
bool Login() {
	string PinCode;
	int Counter = 1;
	do
	{
		PinCode = ReadPinCode();
		if (PinCode == "1234") {
			return true;
		}
		else {
			cout << "\nWrong Pin \n";
			system("color 4F");
			Counter++;

		}
	} while (PinCode != "1234" && Counter <= 3);
	return false;
}

int main() {

	if (Login()) {
		system("color 2F");
		cout << "Your account balance is " << 7500 << endl;
	}
	else {
		cout << "Your card is lOCKED " << endl;
	}
	return 0;
}

