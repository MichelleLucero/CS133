#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"

using namespace std;

int main(){

    int n = test_func();

    cout << n << endl;

    return 0;
}