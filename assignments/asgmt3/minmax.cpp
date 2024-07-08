/** Marcos A. Chavez
* marcos@llavez.com
*
* Input multiple doubles
* returns minimum, maximum, and average
*/

#include <iostream>

using namespace std;

int main(){
    double sum = 0.0, temp = sum, min = sum, max = sum;
    int count = 0;

    cout << "Enter doubles, EOF to quit: \n";

    while(cin >> temp){

        sum += temp;
        count++;

        if(count == 1){
            min = max = temp;
            break;
        }

        if(temp < min){
            min = temp;
        }
        if(temp > max){
            max = temp;
        }
    }
    if (!count){
        cout << "no input\n";
        return 0;
    }
    cout << "The min is " << min << ".\n";
    cout << "The max is " << max << ".\n";
    cout << "The average is" << sum/count << ".\n";
    return 0;
}

