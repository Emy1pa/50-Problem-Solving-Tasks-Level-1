#include <iostream>
#include <string>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

int ReadMark() {
    int Mark = 0;
    cout << "Please enter your mark ? \n";
    cin >> Mark;
    return Mark;
}
enPassFail CheckMark(int Mark) {
    if (Mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}
void PrintMarkResult(int Mark) {
    if (CheckMark(Mark) == enPassFail::Pass)
        cout << "\nPASS\n";
    else
        cout << "\nFAIL\n";
}

int main() {

    PrintMarkResult(ReadMark());
    return 0;
}

