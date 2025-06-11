#include <iostream>
using namespace std;

enum enOddEven {Odd = 1, Even = 2};

int ReadNumber() {
    int Number;
    cout << "Please enter a number ? \n";
    cin >> Number;
    return Number;
}
enOddEven CheckEvenOrOdd(int Number) {
    if (Number % 2 != 0)
        return enOddEven::Odd;
    else
        return enOddEven::Even;
}
int PrintSumOfOddNumbers(int Number){
    int sum = 0;
    for (int counter = 1; counter <= Number; counter++)
    {
        if (CheckEvenOrOdd(counter) == enOddEven::Odd)
            sum += counter;
    }
    return sum;
}




int main() {
   
    int Number = ReadNumber();
    cout << "Sum = " << PrintSumOfOddNumbers(Number) << endl;
    return 0;
}

