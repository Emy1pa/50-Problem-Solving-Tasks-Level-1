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
int ReadUntilAgeIsBetween(int From, int To){
    int Age;
    do
    {
        Age = ReadAge();
    } while (!ValidateNumberInRange(Age, From, To));
    return Age;
}
void PrintResult(int Age){
    //if (ReadUntilAgeIsBetween(18, 45))
        cout << Age << endl;
    
}

int main() {
   
    PrintResult(ReadUntilAgeIsBetween(18, 45));
    return 0;
}

