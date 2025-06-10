#include <iostream>
#include <cmath>
using namespace std;

void ReadTriangleData(float &A, float &B, float &C){
    
    cout << "Please enter Triangle Side A ? \n";
    cin >> A;
    cout << "Please enter Triangle Side B ? \n";
    cin >> B;
    cout << "Please enter Triangle Side C ? \n";
    cin >> C;
    
}

float CalculateCircleAreaByTriangle(float A, float B, float C) {
    const float PI = 3.141592653589793238;
    float p = (A + B + C) / 2;
    float T = (A * B * C) / (4 * sqrt(p * (p - A) * (p - B) * (p - C)));

    float Area = PI * pow(T, 2);
    return Area;
}
void PrintResult(float Area){
    cout << "Circle Area By Triangle is: " << Area << endl;
}

int main() {
   
    float A, B, C;
    ReadTriangleData(A, B, C);
    PrintResult(CalculateCircleAreaByTriangle(A, B, C));
    return 0;
}

