#include <iostream>
using namespace std;

struct stPiggyBankCalculator {
    int Pennies, Nickles, Dimes, Quarters, Dollars;
};

stPiggyBankCalculator ReadPiggyBankInfo() {
    stPiggyBankCalculator PiggyBankInfo;
    cout << "Please enter the amount of Pennies ? \n";
    cin >> PiggyBankInfo.Pennies;
    cout << "Please enter the amount of Nickles ? \n";
    cin >> PiggyBankInfo.Nickles;
    cout << "Please enter the amount of Dimes ? \n";
    cin >> PiggyBankInfo.Dimes;
    cout << "Please enter the amount of Quarters ? \n";
    cin >> PiggyBankInfo.Quarters;
    cout << "Please enter the amount of Dollars ? \n";
    cin >> PiggyBankInfo.Dollars;
    return PiggyBankInfo;
}

int CalculateTotalPennies(stPiggyBankCalculator PiggyBankInfo){
    int TotalPennies =  PiggyBankInfo.Pennies + PiggyBankInfo.Nickles * 5 +
        PiggyBankInfo.Dimes * 10 + PiggyBankInfo.Quarters * 25 + PiggyBankInfo.Dollars * 100;
    return TotalPennies;
}


int main() {
   
    stPiggyBankCalculator PiggyBankInfo;
    float TotalPennies = CalculateTotalPennies(ReadPiggyBankInfo());
    cout << "Total Pennies = " << TotalPennies << endl;
    cout << "Amount of Dollars = " << TotalPennies / 100 << endl;
    return 0;
}

