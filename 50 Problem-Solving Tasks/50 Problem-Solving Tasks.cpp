#include <iostream>
using namespace std;

void ReadNumbers(int &Num1, int &Num2, int &Num3){
    cout << "Please enter the first Number ? \n";
    cin >> Num1;
    cout << "Please enter the second Number ? \n";
    cin >> Num2;
    cout << "Please enter the third Number ? \n";
    cin >> Num3;
}

int CalculateSum(int Num1, int Num2, int Num3){
    return Num1 + Num2 + Num3;
}
void PrintSum(int Sum){
    cout << "Sum is: " << Sum << endl;
}

int main() {

    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintSum(CalculateSum(Num1, Num2, Num3));
    return 0;
}

