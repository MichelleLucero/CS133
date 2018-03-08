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
    if(n==1){
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
    int twinPrimeOne = n-2;
    int twinPrimeTwo = n + 2;
    bool status = true;

    if(isPrime(n) == true){
        if(isPrime(twinPrimeOne) || isPrime(twinPrimeTwo) ){
            status = true;
        }

    }
    else{
        status = false;
    }
    return status;
}

int nextTwinPrime(int n){
    int twinPrime = n + 2;
    int nextPrime;
    if (isPrime(n) == true){
        if(isPrime(twinPrime)){
            nextPrime = twinPrime;
        }
    }
    return nextPrime;
}

int largestTwinPrime(int a, int b){
    
}



int main(){

    //cout<< boolalpha << isDivisibleBy(100,25);
    //cout<< boolalpha << isPrime(14);
    //cout<< nextPrime(13);
    //cout<< countPrimes(1,10);
    //cout<< boolalpha <<isTwinPrime(17); 
    cout<< nextTwinPrime(17);
}