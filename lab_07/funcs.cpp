#include <iostream>
#include <cctype>
#include <string>

using namespace std;

void testascii(string s){

getline(cin,s);

char ch;
    for(int i=0;i < s.length();i++){
         ch = s.at(i);
         cout << (int)ch <<endl;

     }

}


int main(){


    testascii("dog");
    return 0;
}