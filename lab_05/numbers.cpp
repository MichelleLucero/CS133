/*
Author: Michelle Lucero
Course: CSCI-136
Instructor: Mike Zamansky
Assignment: Lab5

Identifying numbers that are prime or twin prime numbers through the use of multiple functions.
*/

#include <iostream>
using namespace std;


bool isDivisibleBy(int n, int d){

    bool status = true;
    if(n % d != 0){
        status = false;
    }
    return status;
}

bool isPrime(int n){
    bool status = true;
    if(n==1 || n==0){
        status = false;
    }

    else{
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                status = false; 
            }  

        }
    }
    return status;
}


int nextPrime(int n){
    int nextPrime = n;
    bool found = false;
    while(!found){
        nextPrime++;
        if (isPrime(nextPrime)){
            found = true;
        }
    }
    return nextPrime;
}

int countPrimes(int a, int b){
    int count = 0;
    for (int i = a; i <=b; i++){
        if(isPrime(i)){ 
            count += 1;
         }
     }
     return count;
 }

bool isTwinPrime(int n){
    if((isPrime(n-2)||isPrime(n+2))&&isPrime(n)){
        return true;
  }
  return false;
}


int nextTwinPrime(int n){
    int i = n+1;
    while(!isTwinPrime(i)){
        i++;
    }
  return i;
}


int largestTwinPrime(int a, int b){
    int largestPrime = -1;
    for (int i = a; i <=b; i++){
        if(isTwinPrime(i)==true){
            largestPrime = i;
        }
    }
    return largestPrime;
}


