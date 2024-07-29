#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int mystery(int x, int y) {
    cin >> x;
    cin >> y;
    cout << "mystery: x = " << x << ", y = " << y << endl;
}
int main() {
    int x = 0, y = 0;
    mystery(x, y);
    cout << "main: x = " << x << ", y = " << y << endl;
}

