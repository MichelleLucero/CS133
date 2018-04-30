#include<iostream>
#include<string>
//g++ -std=c++11 program.cpp
using namespace std;
struct Time {
    int h;
    int m;
};

string printTime(Time time){
    string t = to_string(time.h) + ":" + to_string(time.m);

    return t;
}

//Task A
int minutesSinceMidnight(Time time){  //{10,20}

    int minhours = time.h * 60;
    int minTotal = minhours + time.m;

    return minTotal;

}

int minutesUntil(Time earlier, Time later){

    int laterT = minutesSinceMidnight(later);
    int earlierT =minutesSinceMidnight(earlier);

    int total = laterT - earlierT;
    return total;

}

//Task B
Time addMinutes(Time time0, int min){
    int totalMin = time0.m + min;
    

        int remMin = min % 60;
        int hour = min/60;
        int realhour = hour + time0.h;
        int realmin = remMin + time0.m;

      Time  added = {realhour,realmin};

   

    return added;
}



int main(){

    cout<< minutesSinceMidnight({10,20})<<endl;
    cout<< minutesUntil( {10, 30}, {13, 40} )<<endl;
    Time add = addMinutes({8, 10}, 75);
    cout<< printTime(add);
}