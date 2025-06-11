#include <iostream>
using namespace std;


int ReadPositiveNumber(string Message) {
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
}


int PrintPowerOfM(int Number, int M){
    int p = 1;
    if (M == 1) {
        return p;
    }
    for (int i = 1; i <= M; i++)
    {
        p *= Number;
    }
    return p;

}

int main() {
   
    int Number = ReadPositiveNumber("Please enter a positive number ?");
    int M = ReadPositiveNumber("Please enter a power ?");
    cout << PrintPowerOfM(Number, M) << endl;
    return 0;
}

