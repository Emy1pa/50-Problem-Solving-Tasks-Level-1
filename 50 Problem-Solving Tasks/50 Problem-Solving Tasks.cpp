#include <iostream>
using namespace std;

int ReadTotalSales(string Message){
    int TotalSales;
    cout << Message << endl;
    cin >> TotalSales;
    return TotalSales;
}
float GetPercentage(int TotalSales){
    if (TotalSales >= 1000000)
        return 0.01;
    else if (TotalSales >= 500000)
        return 0.02;
    else if (TotalSales >= 100000)
        return 0.03;
    else if (TotalSales >= 50000)
        return 0.05;
    else
        return 0;
}
float CalculateTotalCommission(int TotalSales, float Percentage) {
    return TotalSales * Percentage;
}



int main() {
   
    int TotalSales = ReadTotalSales("Pleas enter total sales ?");
    cout << "Total Sales = " << TotalSales << endl;
    cout << "Total Commission = " << CalculateTotalCommission(TotalSales, GetPercentage(TotalSales));
    return 0;
}

