#include <iostream>
using namespace std;

int ReadNumber() {
    int Number;
    cout << "Please enter a number ? \n";
    cin >> Number;
    return Number;
}
void PrintNumbersFrom1toNUsingForLoop(int Number) {
    cout << "Print Numbers using For Loop \n";
    for (int i = 1; i <= Number; i++)
    {
        cout << i << endl;
    }
}
void PrintNumbersFrom1toNUsingWhileLoop(int Number) {
    cout << "Print Numbers using While Loop \n";
    int i = 1;
    while (i <= Number) {
        cout << i << endl;
        i++;
    }
}
void PrintNumbersFrom1toNUsingDoWhileLoop(int Number) {
    cout << "Print Numbers using Do While Loop \n";
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i<=Number);
}


int main() {
   
    int Number = ReadNumber();
    PrintNumbersFrom1toNUsingForLoop(Number);
    PrintNumbersFrom1toNUsingWhileLoop(Number);
    PrintNumbersFrom1toNUsingDoWhileLoop(Number);
    return 0;
}

