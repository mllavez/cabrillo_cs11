#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double trip_cost, gallon_gas_cost, mpg, trip_miles;

    cout << "What is the cost of a gallon of gas?\n";
    cin >> gallon_gas_cost;
    cout << "What miles per gallon does your car get?\n";
    cin >> mpg;
    cout << "How many miles in your trip?\n";
    cin >> trip_miles;
    trip_cost = trip_miles / mpg * gallon_gas_cost;
    cout << fixed << setprecision(2) << "The fuel cost of your trip is $" << trip_cost << "\n";

    return 0;

}

