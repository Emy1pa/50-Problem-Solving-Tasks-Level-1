#include <iostream>
#include <cmath>
using namespace std;

float ReadDiameter(){
    float D;
    cout << "Please enter D value ? \n";
    cin >> D;
    return D;
    
}

float CalculateCircleAreaThroughDiameter(float D) {
    const float PI = 3.141592653589793238;
    float Area = (PI * pow(D, 2))/4;
    return Area;
}
void PrintCircleThroughDiameter(float Area){
    cout << "Circle Area Through Diameter is: " << Area << endl;
}

int main() {
   
    float D;
    PrintCircleThroughDiameter(CalculateCircleAreaThroughDiameter(ReadDiameter()));
    return 0;
}

