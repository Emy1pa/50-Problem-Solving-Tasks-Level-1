#include <iostream>
#include <cmath>
using namespace std;

void ReadNumbers(float &A, float &D){
    cout << "Please enter A value ? \n";
    cin >> A;
    cout << "Please enter D value ? \n";
    cin >> D;
}

float CalculateRectangeAreaByDiagonalSide(float A, float D) {
    float Area = A * sqrt(pow(D, 2) - pow(A, 2));
    return Area;
}
void PrintRectangeAreaByDiagonalSide(float Area){
    cout << "Area is: " << Area << endl;
}

int main() {
   
    float A, D;
    ReadNumbers(A, D);
    PrintRectangeAreaByDiagonalSide(CalculateRectangeAreaByDiagonalSide(A, D));
    return 0;
}

