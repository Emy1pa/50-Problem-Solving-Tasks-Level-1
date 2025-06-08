#include <iostream>
using namespace std;

void ReadMarks(int &Mark1, int &Mark2, int &Mark3){
    cout << "Please enter the first Mark ? \n";
    cin >> Mark1;
    cout << "Please enter the second Mark ? \n";
    cin >> Mark2;
    cout << "Please enter the third Mark ? \n";
    cin >> Mark3;
}

int CalculateSumOf3Marks(int Mark1, int Mark2, int Mark3){
    return Mark1 + Mark2 + Mark3;
}
float AverageOf3Marks(int Mark1, int Mark2, int Mark3){
    return (float)CalculateSumOf3Marks(Mark1, Mark2, Mark3) / 3;
}
void PrintAverage(float Average){
    cout << "Average is: " << Average << endl;
}

int main() {

    int Mark1, Mark2, Mark3;
    ReadMarks(Mark1, Mark2, Mark3);
    PrintAverage(AverageOf3Marks(Mark1, Mark2, Mark3));
    return 0;
}

