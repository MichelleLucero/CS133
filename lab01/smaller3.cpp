#include <iostream>
#include <string>

using namespace std;


int main(){
    int firstInteger;
    int secondInteger;
    int thirdInteger;
    cout << "Please enter an interger value: ";
    cin >> firstInteger;
    cout << "Please enter another integer value: ";
    cin >> secondInteger;
    cout << "Please enter another integer value: ";
    cin >> thirdInteger;
    
    if(firstInteger<secondInteger && firstInteger<thirdInteger){
        cout << "The smaller of the three is "<< firstInteger <<endl;
    }
    else if(secondInteger<firstInteger && secondInteger<thirdInteger){
        cout << "The smaller of the three is "<< secondInteger <<endl;
    }
    else if(thirdInteger<firstInteger && thirdInteger<secondInteger){
        cout << "The smaller of the three is "<< thirdInteger <<endl;
    }
    return 0;
}

