#include <iostream>
#include <cmath>
using namespace std;

float ReadCircumference(){
    float L;
    cout << "Please enter L Circumference value ? \n";
    cin >> L;
    return L;
    
}

float CalculateCircleAreaByCircumference(float L) {
    const float PI = 3.141592653589793238;
    float Area = pow(L, 2) / (4 * PI);
    return Area;
}
void PrintResult(float Area){
    cout << "Circle Area By Circumference is: " << Area << endl;
}

int main() {
   
    float D;
    PrintResult(CalculateCircleAreaByCircumference(ReadCircumference()));
    return 0;
}

