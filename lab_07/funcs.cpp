#include <iostream>
#include <cctype>
#include <string>

using namespace std;

void testascii(string s){
    for(int i=0;i < s.length();i++){
        cout << s[i] << " " << (int) s[i] <<endl;

    }

}

char shiftChar(char c, int rshift){
    char result;
    if (!isalpha(c)) return c;

    result = (int) c + rshift;

    if (islower(c) && result < 'a') {
        result += int('z') - 1;
        result -= int('a');
    } else if (islower(c) && result > 'z') {
        result -= int('z');
        result += int('a') - 1;
    }  else if (isupper(c) && result < 'A') {
        result += int('Z') - 1;
        result -= int('A');
    }  else if (isupper(c) && result > 'Z') {
        result -= int('Z');
        result += int('A') - 1;
    }

    return result;
}

string encryptCaesar(string plaintext, int rshift){
    string encrypt;
    for(int i = 0; i < plaintext.length(); i++){
        encrypt += shiftChar(plaintext[i], rshift);
    }

    return encrypt;
}

string encryptVigenere(string plaintext, string keyword){ //creds to Jordan

  string vigenere = "";
  int pos = 0;

  for(int i = 0; i < plaintext.length(); i++){
    char c = plaintext[i];
    if(isalpha(c)){
      int rshift = (int)keyword[pos];
      if(rshift < 90){
        rshift = rshift - 65;
      }
      else{
        rshift = rshift - 97;
      }
      pos = (pos + 1) % keyword.length();
      vigenere += shiftChar(c, rshift);
    }
    else{
      vigenere += c;
    }
  }
  return vigenere;
}

string decryptCaesar(string ciphertext, int rshift){

    string decrypt = "";

    for(int i = 0; i < ciphertext.length(); i++){
           
        decrypt += shiftChar(ciphertext[i], -rshift);
    }
    return decrypt;
}



