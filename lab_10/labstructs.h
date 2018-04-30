#include<iostream>
//g++ -std=c++11 program.cpp

struct Time {
    int h;
    int m;
};



int minutesSinceMidnight(Time time){ {10,20}
    Time midnight = {00,00};

    Time now;
    
    now = {time[0],time[1]};

    return now.h;



}
//int minutesUntil(Time earlier, Time later);

int main(){

    cout<< minutesSinceMidnight({10,20});
}