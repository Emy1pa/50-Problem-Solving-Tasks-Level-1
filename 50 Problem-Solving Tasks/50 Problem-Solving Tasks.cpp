#include <iostream>
#include <cmath>
using namespace std;

void ReadRadious(float &R){
    cout << "Please enter R value ? \n";
    cin >> R;
    
}

float CalculateCircleArea(float R) {
    const float PI = 3.14;
    float Area = PI * pow(R, 2);
    return Area;
}
void PrintCircle(float Area){
    cout << "Circle Area is: " << Area << endl;
}

int main() {
   
    float R;
    ReadRadious(R);
    PrintCircle(CalculateCircleArea(R));
    return 0;
}

