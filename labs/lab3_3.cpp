#include <iostream>

using namespace std;

int main() {
    float one, two, three, largest;
    cout << "Please enter three numbers: ";
    cin >> one >> two >> three;
    if(one > two){
        largest = one;
    } else {
        largest = two;
    }
    if(three > largest){
        largest = three;
    }
    cout << "The largest number is: " << largest << "\n";
    return 0;
}


