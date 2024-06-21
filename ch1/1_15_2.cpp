#include <iostream>
using namespace std;

int main() {
	int total = 0;
	for (int i = 0; i <= 10; i++) {
		total += i;

		if(i == 10){
			cout << "The sum of the first ten positive integers is " << total << "\n";
		}
	}
	return 0;
}

