#include <iostream>
#include <string>

using namespace std;

int main(){
    int year;
    int month;
    cout <<"Enter year:  ";
    cin >>year;
    cout <<"Enter month:  ";
    cin >> month;
    if (month==2 && year%4==0){
        cout<<"29 days";
    }
    if (month==2 && year%4 !=0){
        cout<<"28 days";
    }
    if (month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        cout<<"31 days";
    }
    if (month==2||month==4||month==6||month==9||month==11){
        cout<<"30 days";
    }
    return 0;
}