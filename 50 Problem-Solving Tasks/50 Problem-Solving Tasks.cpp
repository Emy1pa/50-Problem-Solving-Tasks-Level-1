#include <iostream>
using namespace std;

int ReadNumber() {
    int Number;
    cout << "Please enter a number ? \n";
    cin >> Number;
    return Number;
}

float CalculateHalfNumber(int Number){
    return (float)Number / 2;
}
void DisplayHalfNumber(int Number){
    cout << "Half of the " << Number << " is " << CalculateHalfNumber(Number) << endl;
}

int main() {

    DisplayHalfNumber(ReadNumber());
    return 0;
}

