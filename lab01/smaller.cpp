#include <iostream>
#include <string>

using namespace std;


int main(){
    int firstInteger;
    int secondInteger;
    cout << "Please enter an interger value: ";
    cin >> firstInteger;
    cout << "Please enter another integer value: ";
    cin >> secondInteger;
    
    if(firstInteger>secondInteger){
        cout << "The smaller of the two is "<< secondInteger <<endl;
    }
    else if(secondInteger>firstInteger){
        cout << "The smaller of the two is "<< firstInteger <<endl;
    }
    return 0;
}

