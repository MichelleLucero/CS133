
#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "numbers.h"

using namespace std;
using std:: boolalpha;

TEST_CASE("Testing isDivisibleBy"){
    cout << "Testing isDivisibleBy\n";
    CHECK(isDivisibleBy(5,1) == true);
    CHECK(isDivisibleBy(5,3) == false);

}

TEST_CASE("Testing isPrime"){
    cout << "Testing isPrime\n";
    CHECK(isPrime(5) == true);
    CHECK(isPrime(6) == false);
}

TEST_CASE("Testing nextPrime"){
    cout << "Testing nextPrime\n";
    CHECK(nextPrime(0) == 2);
    CHECK(nextPrime(6) == 7);
}

TEST_CASE("Testing countPrimes"){
    cout << "Testing coutPrimes\n";
    CHECK(countPrimes(5,18) == 5);
    CHECK(countPrimes(0,10) == 4);
}

TEST_CASE("Testing isTwinPrime"){

    cout<<"Testing isTwinPrime\n";
    CHECK(isTwinPrime(17) == true);
    CHECK(isTwinPrime(15) == false);
}

TEST_CASE("Testing nextTwinPrime"){
    cout<<  "Testing nextTwinPrime\n";
    CHECK(nextTwinPrime(0) == 3);
    CHECK(nextTwinPrime(6) == 7);
}

TEST_CASE("Testing largestTwinPrime"){
    cout<< "Testing largestTwinPrime\n";
    CHECK(largestTwinPrime(5,18) == 17);
    CHECK(largestTwinPrime(0,11) == 11);
}