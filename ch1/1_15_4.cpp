#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double account_balance = 1000;

    for (int i = 0; i <= 2; i++) {
        account_balance += (.05 * account_balance);
        cout << "Balance after year " << i + 1 << " $" << fixed << setprecision(2) << account_balance << "\n";
    }

    return 0;
}

