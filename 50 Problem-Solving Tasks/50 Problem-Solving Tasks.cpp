#include <iostream>
using namespace std;

int ReadAge() {
    int Age;
    cout << "Please enter your age ? \n";
    cin >> Age;
    return Age;
}
bool ValidateNumberInRange(int Age, int From, int To){
    return Age >= From && Age <= To;
}
void PrintResult(int Age){
    if (ValidateNumberInRange(Age, 18, 45))
        cout << "Valid Age \n";
    else
        cout << "Invalid Age \n";
}

int main() {
   
    PrintResult(ReadAge());
    return 0;
}

