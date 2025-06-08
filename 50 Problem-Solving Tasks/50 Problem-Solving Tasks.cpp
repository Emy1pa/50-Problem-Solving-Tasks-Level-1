#include <iostream>
using namespace std;

void ReadNumbers(int &Num1, int &Num2){
    cout << "Please enter Number 1 ? \n";
    cin >> Num1;
    cout << "Please enter Number 2 ? \n";
    cin >> Num2;
}

int CheckMaxNumber(int Num1, int Num2){
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}
void PrintMaxNumber(int Max){
    cout << "Max Number is: " << Max << endl;
}


int main() {
    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintMaxNumber(CheckMaxNumber(Num1, Num2));
    return 0;
}

