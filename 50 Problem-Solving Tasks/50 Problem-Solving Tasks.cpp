#include <iostream>
using namespace std;

void ReadNumbers(int &Num1, int &Num2){
    cout << "Please enter Number 1 ? \n";
    cin >> Num1;
    cout << "Please enter Number 2 ? \n";
    cin >> Num2;
}

void SwapNumber(int &Num1, int &Num2){
    int Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}




int main() {
    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    cout << "Num1 & Num2 Before SWAP\n";
    cout << "Num1 = " << Num1 << " Num2 = " << Num2 << endl;
    SwapNumber(Num1, Num2);
    cout << "Num1 & Num2 After SWAP\n";
    cout << "Num1 = " << Num1 << " Num2 = " << Num2 << endl;
    return 0;
}

