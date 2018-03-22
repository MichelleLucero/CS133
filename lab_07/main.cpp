#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"

using namespace std;

int main(){
    string s = "Cat :3 Dog";
    cout <<"testascii(s)"<<endl;
    testascii(s);
    cout << "shiftChar('W',10)" <<endl;
    cout << shiftChar('W', 10) << endl;
    cout << "encryptCaesar" << endl;
    cout << encryptCaesar("Hello, World!", 10) << endl;
    cout << "encryptVigenere" << endl;
    cout << encryptVigenere("Hello, World!", "cake") << endl;
    cout << "decryptCaesar" << endl;
    cout << decryptCaesar("Rovvy, Gybvn!", 10);
    return 0;
}