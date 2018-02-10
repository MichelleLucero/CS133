/*
Author: Michelle Lucero
Course: CSCI-136
Instructor: Mr.Zamansky
Assignment: Print Interval , Lab2B

This program prints numbers in the user's chosen interval.
*/


#include <iostream>

using namespace std;


int main(){
    int L;
    int U;
    cout << "Please enter L: ";
    cin >> L;
    cout << "Please enter U: ";
    cin >> U;

    for(int i = L; i < U; i++){
        cout << i << endl;
    }

    return 0;
}