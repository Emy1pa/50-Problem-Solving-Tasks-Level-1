#include <iostream>
using namespace std;

struct stInfo {
    string FirstName;
    string LastName;
};

stInfo ReadInfos() {
    stInfo Info;
    cout << "Please enter your FirstName ? \n";
    cin >> Info.FirstName;
    cout << "Please enter your LastName ? \n";
    cin >> Info.LastName;
    return Info;
}
string ReturnFullName(stInfo Info, bool Reversed){
    if (Reversed)
        return Info.LastName + " " + Info.FirstName;
    else
        return Info.FirstName + " " + Info.LastName;
}
void PrintResult(string FullName){
    cout << "\nYour FullName is " << FullName << endl;
}



int main() {

    PrintResult(ReturnFullName(ReadInfos(), true));
    return 0;
}

