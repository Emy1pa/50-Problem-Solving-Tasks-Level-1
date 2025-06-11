#include <iostream>
using namespace std;


int ReadPositiveNumber(string Message) {
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
}


void PrintPowerOf2_3_4(int Number){
    int a = Number * Number;
    int b = Number * Number * Number;
    int c = Number * Number * Number * Number;
    cout << a << " " << b << " " << c << endl;
}

int main() {
   
    int Number = ReadPositiveNumber("Please enter a positive number ?");
    PrintPowerOf2_3_4(Number);
    return 0;
}

