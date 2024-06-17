#include <iostream>
using namespace std;

int main() {
    int total;
    for (int i = 1; i <= 10; i++){
        if (!total){
            total = i;
        }else{

            total = total * i;
            cout << total << " *= " << i << "\n";
        }
    }
    cout << "The product of the first ten positive integers is: " << total << "\n";
    return 0;
}

