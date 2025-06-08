#include <iostream>
using namespace std;

struct stInfos {
    int Age;
    bool HasDriverLicense;
};

stInfos ReadInfos() {
    stInfos Info;
    cout << "Please enter your age ? \n";
    cin >> Info.Age;
    cout << "Please enter if you have a driver license ? \n";
    cin >> Info.HasDriverLicense;
    return Info;
}
bool CheckHiredOrRejected(stInfos Info){
    return (Info.Age > 21 && Info.HasDriverLicense);
}
void PrintResult(stInfos Info){
    if (CheckHiredOrRejected(Info))
        cout << "\n Hired \n";
    else
        cout << "\n Rejected \n";
}

int main() {

    PrintResult(ReadInfos());
    return 0;
}

