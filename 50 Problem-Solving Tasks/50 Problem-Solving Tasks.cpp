#include <iostream>
using namespace std;

void ReadNumbers(int &Num1, int &Num2, int &Num3){
    cout << "Please enter Number 1 ? \n";
    cin >> Num1;
    cout << "Please enter Number 2 ? \n";
    cin >> Num2;
    cout << "Please enter Number 3 ? \n";
    cin >> Num3;
}

int CheckMaxNumber(int Num1, int Num2, int Num3){
    if (Num1 > Num2)
        if (Num1 > Num3)
            return Num1;
        else
            return Num3;
    else
        if (Num2 > Num3)
            return Num2;
        else
            return Num3;
}
void PrintMaxNumber(int Max){
    cout << "Max Number is: " << Max << endl;
}


int main() {
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintMaxNumber(CheckMaxNumber(Num1, Num2, Num3));
    return 0;
}

