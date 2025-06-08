#include <iostream>
using namespace std;

string ReadName() {
    string Name;
    cout << "Please enter your name ? \n";
    cin >> Name;
    return Name;
}

void DisplayName(string Name){

    cout << "\n Your Name is: " << Name << endl;
}

int main()
{
    DisplayName(ReadName());
}

