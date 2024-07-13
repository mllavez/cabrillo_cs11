/**
* Marcos A. Chávez
* 0278726
* Takes 5 digit zip code input from user
* returns USPS post bar code.
**/
#include <iostream>
#include <cctype>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string input, postal_bar_code;
    int zip_size = 5, sum = 0, current_digit= 0;
    stringstream stream1;

    cout << "Enter a 5 digit zip code:\n";
    getline(cin, input);


    for(int i=0; i <= zip_size; i++){

        if(i == 0){
            postal_bar_code.append("|");
        }

        if(i < zip_size){
            stream1.clear();
            stream1.str("");
            stream1.str(input.substr(i, 1));
            stream1 >> current_digit;
            sum += current_digit;
        }else{
            int div_10_remainder = sum % 10;
            if( div_10_remainder == 0){
                current_digit = 0;
            }else {
                current_digit = 10 - sum % 10;
            }
        }

        if(current_digit == 1){
            postal_bar_code.append(":::||");
        }else if(current_digit == 2){
            postal_bar_code.append("::|:|");
        }else if(current_digit == 3){
            postal_bar_code.append("::||:");
        }else if(current_digit == 4){
            postal_bar_code.append(":|::|");
        }else if(current_digit == 5){
            postal_bar_code.append(":|:|:");
        }else if(current_digit == 6){
            postal_bar_code.append(":||::");
        }else if(current_digit == 7){
            postal_bar_code.append("|:::|");
        }else if(current_digit == 8){
            postal_bar_code.append("|::|:");
        }else if(current_digit == 9){
            postal_bar_code.append("|:|::");
        }else if(current_digit == 0){
            postal_bar_code.append("||:::");
        }
        if(i == zip_size){
            postal_bar_code.append("|");
        }

    }

    cout << postal_bar_code << "\n";
    return 0;
}
