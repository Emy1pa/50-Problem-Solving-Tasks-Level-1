#include <iostream>
using namespace std;

void ReadData(int &Num1, int &Num2, char &OpType) {
    cout << "Please enter the first number ? \n";
    cin >> Num1;
    cout << "Please enter the second number ? \n";
    cin >> Num2;
    cout << "Please enter the operation Type ? \n";
    cin >> OpType;
}
void PrintCalculatedData(int Num1, int Num2, char OpType){
    switch (OpType)
    {
    case '+':
        cout <<  Num1 + Num2;
        break;
    case '-':
        cout <<  Num1 - Num2;
        break;
    case '*':
        cout << Num1 * Num2;
        break;
    case '/':
        cout << Num1 / Num2;
        break;
    default:
        cout << "Wrong Operation";
        break;
    }
}

int main() {
   
    int Num1, Num2;
    char OpType;
    ReadData(Num1, Num2, OpType);
    PrintCalculatedData(Num1, Num2, OpType);
    return 0;
}

