#include <iostream>
#include <cmath>
using namespace std;

void ReadTriangleData(float &A, float &B){
    
    cout << "Please enter Triangle Side A ? \n";
    cin >> A;
    cout << "Please enter Triangle Side B ? \n";
    cin >> B;
    
}

float CalculateCircleAreaByTriangle(float A, float B) {
    const float PI = 3.141592653589793238;
    float Area = (PI * pow(B,2) /4) * ((2*A-B) /(2*A+B));
    return Area;
}
void PrintResult(float Area){
    cout << "Circle Area By Triangle is: " << Area << endl;
}

int main() {
   
    float A, B;
    ReadTriangleData(A, B);
    PrintResult(CalculateCircleAreaByTriangle(A, B));
    return 0;
}

