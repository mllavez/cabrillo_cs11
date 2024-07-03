#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double income, tax, remain = 0.0;
    const double
    RATE_1 = .01,
    RATE_2 = .02,
    RATE_3 = .03,
    RATE_4 = .04,
    RATE_5 = .05,
    RATE_6 = .06,
    TAX_STEP_1 = 50000,
    TAX_STEP_2 = 75000,
    BRACKET_1_DIFF = TAX_STEP_2 - 1 - TAX_STEP_1,
    TAX_STEP_3 = 100000,
    BRACKET_2_DIFF = TAX_STEP_3 - 1 - TAX_STEP_2,
    TAX_STEP_4 = 250000,
    BRACKET_3_DIFF = TAX_STEP_4 - 1 - TAX_STEP_3,
    TAX_STEP_5 = 500000,
    BRACKET_4_DIFF = TAX_STEP_5 - 1 - TAX_STEP_4;

    cout << "What's your gross income?\n";
    cin >> income;
    remain = income;

    if(income <= TAX_STEP_1){
        tax = RATE_1 * remain;
        cout << "Your total tax liability, circa 1913, would be\n$" << fixed << setprecision(2) << tax << "\n";
        return 0;
    }
    tax = RATE_1 * TAX_STEP_1;

    remain = income - TAX_STEP_1;

    if(remain <= BRACKET_1_DIFF){
        tax += RATE_2 * remain;
        cout << "Your total tax liability, circa 1913, would be\n$" << fixed << setprecision(2) << tax << "\n";
        return 0;
    }

    remain -= BRACKET_1_DIFF;
    tax += RATE_2 * BRACKET_1_DIFF;

    if(remain <= BRACKET_2_DIFF){
        tax += RATE_3 * remain;
        cout << "Your total tax liability, circa 1913, would be\n$" << fixed << setprecision(2) << tax << "\n";
        return 0;
    }

    remain -= BRACKET_2_DIFF;
    tax += RATE_3 * BRACKET_2_DIFF;

    if(remain <= BRACKET_3_DIFF){
        tax += RATE_4 * remain;
        cout << "Your total tax liability, circa 1913, would be\n$" << fixed << setprecision(2) << tax << "\n";
        return 0;

    }
    remain -= BRACKET_3_DIFF;
    tax += RATE_4 * BRACKET_3_DIFF;

    if(remain <= BRACKET_4_DIFF){
        tax += RATE_5 * remain;
        cout << "Your total tax liability, circa 1913, would be\n$" << fixed << setprecision(2) << tax << "\n";
        return 0;
    }
    remain -= TAX_STEP_4;
    tax += RATE_5 * BRACKET_4_DIFF;

    if(remain > 0){
        tax += RATE_6 * remain;
        cout << "Your total tax liability, circa 1913, would be\n$" << fixed << setprecision(2) << tax << "\n";
        return 0;

    }

    cout << "Your total tax liability, circa 1913, would be\n$" << fixed << setprecision(2) << tax << "\n";
    return 0;
}
