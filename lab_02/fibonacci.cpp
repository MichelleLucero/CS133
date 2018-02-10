/*
Author: Michelle Lucero
Course: CSCI-136
Instructor: Mr.Zamansky
Assignment: Computing Fibonacci Numbers , Lab2D

This program computes 58 Fibonacci numbers starting at fib[2].
*/

#include <iostream>

using namespace std;


int main(){
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;

    for(int i=2; i<60; i++){
        fib[i] = fib[i-1] + fib[i-2];

        cout << fib[i] <<endl;
    }

    return 0;
}