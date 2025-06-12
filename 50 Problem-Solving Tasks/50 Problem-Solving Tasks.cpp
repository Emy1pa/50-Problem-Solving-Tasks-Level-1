#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrimeNotPrimeNumber { Prime = 1, NotPrime = 2 };

int ReadPositiveNumber(string Message) {
    int Number;
    do
    {
     cout << Message << endl;
     cin >> Number;
    } while (Number < 0);
    return Number;
}
enPrimeNotPrimeNumber CheckPrimeNumber(int Number){
    int M = round(Number / 2);
    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return enPrimeNotPrimeNumber::NotPrime;
        else
            return enPrimeNotPrimeNumber::Prime;
    }
}

void PrintResult(int Number) {
    if (CheckPrimeNumber(Number) == enPrimeNotPrimeNumber::Prime)
        cout << Number << " is a prime Number \n";
    else
        cout << Number << " is not a prime Number \n";
}


int main() {
   
    PrintResult(ReadPositiveNumber("Please enter a positive number ?"));
    return 0;
}

