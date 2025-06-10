#include <iostream>
#include <cmath>
using namespace std;

float ReadSquareSide(){
    float A;
    cout << "Please enter A value ? \n";
    cin >> A;
    return A;
    
}

float CalculateCircleAreaInscribedInSquare(float A) {
    const float PI = 3.141592653589793238;
    float Area = (PI * pow(A, 2))/4;
    return Area;
}
void PrintCircleInscribedInSquare(float Area){
    cout << "Circle Area Inscribed in a Square is: " << Area << endl;
}

int main() {
   
    float D;
    PrintCircleInscribedInSquare(CalculateCircleAreaInscribedInSquare(ReadSquareSide()));
    return 0;
}

