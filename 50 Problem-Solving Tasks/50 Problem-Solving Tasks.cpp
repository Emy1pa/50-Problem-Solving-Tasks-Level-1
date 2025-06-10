#include <iostream>
#include <cmath>
using namespace std;

void ReadNumbers(float &A, float &H){
    cout << "Please enter A value ? \n";
    cin >> A;
    cout << "Please enter H value ? \n";
    cin >> H;
}

float CalculateTriangleArea(float A, float H) {
    float Area = A / 2 * H;
    return Area;
}
void PrintTriangleArea(float Area){
    cout << "Triangle Area is: " << Area << endl;
}

int main() {
   
    float A, H;
    ReadNumbers(A, H);
    PrintTriangleArea(CalculateTriangleArea(A, H));
    return 0;
}

