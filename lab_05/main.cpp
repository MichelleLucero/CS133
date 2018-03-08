#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "numbers.h"

using namespace std;

int main(){
    cout<< boolalpha << isDivisibleBy(100,25);
    cout<< boolalpha << isPrime(14);
    cout<< nextPrime(13);
    cout<< countPrimes(1,10);
    cout<< boolalpha <<isTwinPrime(17); 
    cout<< nextTwinPrime(17);
    cout<< largestTwinPrime(14,16);
}