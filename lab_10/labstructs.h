#pragma once
#include <string>
#include "labstructs.h"

using namespace std;

struct Time {
    int h;
    int m;
};
enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

struct Movie {
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

struct TimeSlot {
    Movie movie;     // what movie
    Time startTime;  // when it starts
};



string printTime(Time time); //TASK A
int minutesSinceMidnight(Time time); //TASK A 
int minutesUntil(Time earlier, Time later); //TASK A
Time addMinutes(Time time0, int min); //TASK B
void printMovie(Movie mv); //TASK C
void printTimeSlot(TimeSlot ts); //TASK C
string TimeSlotString(TimeSlot ts); //TASK C
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie); //TASK D
bool timeOverlap(TimeSlot ts1, TimeSlot ts2); //TASK E