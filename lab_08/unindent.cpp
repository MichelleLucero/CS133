#include <iostream>
#include <cctype>
#include <stdio.h>
#include <ctype.h>
#include <fstream>


using namespace std;

//Task A
string removeLeadingSpaces(string line){
)
    for(int i = 0; i < line.length();i++){
        if(isspace(line[i])){
            line.erase(line.begin()+i);
            }else{
                return line;
            }
    }
}


int main{
    cout<< removeLeadingSpaces("                int main(){ 
           // Hi, I'm a program!
int x = 1; 
    for(int i = 0; i < 10; i++) {
cout << i;
          cout << endl;
 }
    }") << endl;

    return 0;
}