#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    double gallon_gas_cost, car_miles_per_gallon, trip_miles;

    cout << "What is the cost of a gallon of gas?\n";
    cin >> gallon_gas_cost;
    cout << "\nWhat's your car's miles per gallon?\n";
    cin >> car_miles_per_gallon;
    cout << "\nHow many miles in your trip?\n";
    cin >> trip_miles;

    double  trip_cost = (trip_miles / car_miles_per_gallon) * gallon_gas_cost;
    cout << "\nYour fuel cost for this trip would be $" << fixed << setprecision(2) << trip_cost << "\n\n";
    return 0;
}


