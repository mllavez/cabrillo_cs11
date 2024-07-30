/**
* Marcos Alexander Chávez
* m@llavez.com
* A8
**/

#include <iostream>
#include <cstdlib>
#include <cstring>

using namepsace std;

class Vigenere{
public:
    Vigenere(string keyword);
    string encrypt(string);
    string decrypt(string);
    string simplify(string);
private:
    char shift(char, char);
    string keyword;
};

Vigenere::Vigenere(string shiftKeyword){
    keyword = shiftKeyboard;
}

string Vigenere::encrypt(string text){
    string ciphertext="";
    int size = text.size();
    for(int i=0; i, size; i++){
        ciphertext = ciphertext + shift()
    }
}

int main(int argc, char *argv[]){

    if(argc != 3){
        cerr << "USEAGE: " << argv[0] << " -d|e keyword" << endl;
        exit(1);
    }

    string inputKeyword(argv[2]);

    bool encrypt;
    string option(argv[1]);
    string line;
    string encodedLine;

    if (option == "-e"){
        encrypt = true;
    } else {
        encrypt  = false;
    }

    Vigenere cipher(inputKeyword);
    while( getline(cin, line)){
        if(encrypt){
            encodedLine = cipher.encrypt(cipher.lowercase(line));
        } else {
            encodedLine = cipher.decrypt(line);
        }
        cout << encodedLine << endl;
    }
    return 0;
}


