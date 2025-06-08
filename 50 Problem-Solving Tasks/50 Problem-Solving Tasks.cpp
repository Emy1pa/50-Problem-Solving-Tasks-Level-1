#include <iostream>
using namespace std;

enum enOddOrEven {Odd = 1, Even = 2};

int ReadNumber() {
    int Number = 0;
    cout << "Please enter a number ? \n";
    cin >> Number;
    return Number;
}

enOddOrEven CheckNumber(int Number){
    if (Number % 2 == 0)
        return enOddOrEven::Even;
    else
        return enOddOrEven::Odd;
}

void DisplayResult(int Number) {
    if (CheckNumber(Number) == enOddOrEven::Even)
        cout << "Number " << Number << " is Even \n";
    else
        cout << "Number " << Number << " is Odd \n";
}

int main()
{
    DisplayResult(ReadNumber());
}

