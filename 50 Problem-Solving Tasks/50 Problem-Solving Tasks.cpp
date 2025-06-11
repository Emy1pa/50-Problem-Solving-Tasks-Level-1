#include <iostream>
using namespace std;

enum enOddEven {Odd = 1, Even = 2};

int ReadNumber() {
    int Number;
    cout << "Please enter a number ? \n";
    cin >> Number;
    return Number;
}

int PrintFactorialNumber(int Number){
    int Factorial = 1;
    for (int counter = Number; counter >= 1; counter--)
    {
        Factorial *= counter;
    }
    return Factorial;
}


int main() {
   
    int Number = ReadNumber();
    cout << "Factorial is " << PrintFactorialNumber(Number) << endl;
    return 0;
}

