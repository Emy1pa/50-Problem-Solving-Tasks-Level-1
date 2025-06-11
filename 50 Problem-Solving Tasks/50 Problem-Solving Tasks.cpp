#include <iostream>
using namespace std;


int ReadGrade(string Message) {
    
    int Grade;
    cout << Message << endl;
    cin >> Grade;
    return Grade;
}
char PrintGrade(int Grade){
    {
        if (Grade >= 90)
            return 'A';
        else if (Grade >= 80)
            return 'B';
        else if (Grade >= 70)
            return 'C';
        else if (Grade >= 60)
            return 'D';
        else if (Grade >= 50)
            return 'E';
        else
            return 'F';
    }
}



int main() {
   
    cout << PrintGrade(ReadGrade("Please enter a number ? \n"));
    return 0;
}

