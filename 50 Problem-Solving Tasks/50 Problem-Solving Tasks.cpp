#include <iostream>
using namespace std;

void ReadNumbers(float &Num1, float &Num2){
    cout << "Please enter Number 1 ? \n";
    cin >> Num1;
    cout << "Please enter Number 2 ? \n";
    cin >> Num2;
}

float CalculateRectangeArea(float Num1, float Num2){
    return Num1 * Num2;
}

void PrintRectangleArea(float Area){
    cout << "Area is: " << Area << endl;
}

int main() {
   
    float Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintRectangleArea(CalculateRectangeArea(Num1, Num2));
    return 0;
}

