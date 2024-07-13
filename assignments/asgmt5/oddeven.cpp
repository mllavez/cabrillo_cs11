/**
* Marcos Alexander Chávez
* Assignment #5
* This program processes multiple lines of text by removing non-alphanumeric
* characters and converting all letters to lowercase. It then categorizes the
* lines based on their lengths: odd or even. The program prints the larger
* group (odd or even), but if both groups are of equal size, it prints nothing.
**/
#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <fstream>

using namespace std;

string processString(string input){
    string processed;
    for(int i = 0; i < input.length(); i++){
        char processing_char = input[i];
        if(isalnum(processing_char)){
            processed += tolower(processing_char);
        }

    }
    return processed;
}

int main(){
    vector<string> odd, even;
    string line;

    while(getline(cin, line)){

        string processed = processString(line);

        if(processed.length() % 2 == 0){
            even.push_back(processed);
        } else {
            odd.push_back(processed);
        }
    }

    if(odd.size() > even.size()){
        for (string v: odd){
            cout << v << "\n";
        }
    }else if(even.size() > odd.size()){
        for (string v: even){
            cout << v << "\n";
        }
    }

    return 0;
}
