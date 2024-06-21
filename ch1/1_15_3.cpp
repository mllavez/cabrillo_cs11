#include <iostream>
using namespace std;

int main() {
    int total = 1;
    for (int i = 1; i <= 10; i++){
        total = total * i;
    }
    cout << "The product of the first ten positive integers is: " << total << "\n";
    return 0;
}

