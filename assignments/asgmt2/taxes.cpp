#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double income, tax = 0.0;

    cout << "What were your earnings (enter dollars & cents as a decimal without a dollar sign. i.e. 70000.80)";
    cin >> income;

    if (income > 500000) {
        tax += (income - 500000) * 0.06;
        income = 500000;
    }
    if (income > 250000) {
        tax += (income - 250000) * 0.05;
        income = 250000;
    }
    if (income > 100000) {
        tax += (income - 100000) * 0.04;
        income = 100000;
    }
    if (income > 75000) {
        tax += (income - 75000) * 0.03;
        income = 75000;
    }
    if (income > 50000) {
        tax += (income - 50000) * 0.02;
        income = 50000;
    }
    if (income > 0) {
        tax += income * 0.01;
    }
    cout << "You would owe: $ " << fixed << setprecision(2) << tax;
    return 0;
}
