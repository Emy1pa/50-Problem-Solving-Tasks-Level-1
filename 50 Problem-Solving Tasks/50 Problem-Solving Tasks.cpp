#include <iostream>
using namespace std;

float ReadNumber(string Message){
    float Number = 0;
    cout << Message << endl;
    cin >> Number;
    return Number;
}

int CalculateSumUntilMinus99(){
    float Number;
    int sum = 0;
    do
    {
        Number = ReadNumber("Please enter a number ?");
        if (Number != -99) {
            sum += Number;
        }
    } while (Number != -99);
    return sum;
}




int main() {
   
    cout << CalculateSumUntilMinus99();
    return 0;
}

