/*
Author: Michelle Lucero
Course: CSCI-136
Instructor: Mr.Zamansky
Assignment: Valid , Lab2A

This program only sqaures numbers 1-99.
*/


#include <iostream>

using namespace std;

int main(){
    int userNumber;
    cout << "Please enter an interger value: ";
    cin >> userNumber;

    do{
        cout << "Re-enter an integer value: ";
        cin >> userNumber;
    }while(userNumber > 99 || userNumber < 1);

    int square = userNumber * userNumber;

    cout << "Number square is " << square << endl;

    return 0;
}
