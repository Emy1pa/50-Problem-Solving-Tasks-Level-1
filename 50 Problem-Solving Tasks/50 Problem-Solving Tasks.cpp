#include <iostream>
using namespace std;

int ReadNumber() {
    int Number;
    cout << "Please enter a number ? \n";
    cin >> Number;
    return Number;
}
void PrintNumbersFromNTo1UsingForLoop(int Number) {
    cout << "Print Numbers using For Loop \n";
    for (int i = Number; i >= 1; i--)
    {
        cout << i << endl;
    }
}
void PrintNumbersFromNto1UsingWhileLoop(int Number) {
    cout << "Print Numbers using While Loop \n";
    int i = Number;
    while (i >= 1) {
        cout << i << endl;
        i--;
    }
}
void PrintNumbersFromNto1UsingDoWhileLoop(int Number) {
    cout << "Print Numbers using Do While Loop \n";
    int i = Number;
    do
    {
        cout << i << endl;
        i--;
    } while (i>=1);
}


int main() {
   
    int Number = ReadNumber();
    PrintNumbersFromNTo1UsingForLoop(Number);
    PrintNumbersFromNto1UsingWhileLoop(Number);
    PrintNumbersFromNto1UsingDoWhileLoop(Number);
    return 0;
}

