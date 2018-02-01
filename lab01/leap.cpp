#include <iostream>
#include <string>

using namespace std;



int main(){
    int year;
    cout <<"Input a year: ";
    cin >>year;

    if (year%4 != 0){
        cout<<"It's a common year";
    }
    else if (year%100 != 0){
        cout<<"It's a leap year";
    }
    else if (year%400 != 0){
        cout<<"It's a common year";
    }
    else{
        cout<<"It's a leap year";
    }
        
    return 0;
}