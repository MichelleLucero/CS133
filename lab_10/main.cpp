#include <iostream>
#include <string>
#include "labstructs.h"

using namespace std;


int main(){

    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"The Last Airbender", ACTION, 103};
    TimeSlot morning = {movie1,{9,15}};
    TimeSlot evening = {movie2,{12,10}};

    cout<< minutesSinceMidnight({10,20})<<endl;
    cout<< minutesUntil( {16, 30}, {13, 40} )<<endl;
    Time add = addMinutes({8, 10}, 75);
    cout<< printTime(add)<<endl;
    cout<<"Time Slot: " << TimeSlotString(morning)<<endl;
    cout<<"Time Slot:  " << TimeSlotString(evening)<<endl;

    cout<< printTime(scheduleAfter(morning, movie2).startTime)<<endl; 
    cout<< boolalpha << timeOverlap(evening,morning)<<endl; 
}