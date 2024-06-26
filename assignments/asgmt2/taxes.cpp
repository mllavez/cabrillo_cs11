#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double income, tax, remain = 0.0;

    cout << "What's your gross income? (Enter a income without a dollar sign. i.e. 700000.80)\n";
    cin >> income;
    remain = income;

    while( remain > 0 ) {
        tax = .01 * income;
        if(income <= 50000){
            remain = 0;
        }
        remain = income - 50000;
        double bracket2_diff = 75000 - 50000;

        if(remain <= bracket2_diff){
            tax += .02 * remain;
            remain = 0;
        }
        remain -= bracket2_diff;
        tax += .02 * bracket2_diff;

        double bracket3_diff = 100000 - 75000;

        if(remain <= bracket3_diff){
            tax += .03 * remain;
            remain = 0;
        }
        remain -= bracket3_diff;
        tax += .03 * bracket3_diff;

        double bracket4_diff = 250000 - 100000;
        if(remain <= bracket4_diff){
            tax += .04 * remain;
            remain = 0;
        }
        remain -= bracket4_diff;
        tax += .04 * bracket4_diff;

        double bracket5_diff = 500000 - 250000;
        if(remain <= bracket5_diff){
            tax += .05 * remain;
            remain = 0;
        }
        remain -= bracket5_diff;
        tax += .05 * bracket5_diff;

        if(remain > 0){
            tax += .06 * remain;
            remain = 0;
        }

        remain = 0;
    }

    cout << "Your total tax liability, circa 1913, would be\n$" << fixed << setprecision(2) << tax << "\n";
    return 0;
}
