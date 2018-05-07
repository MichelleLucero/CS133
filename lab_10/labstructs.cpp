#include<iostream>
#include<string>
#include "labstructs.h"


using namespace std;

// struct Time {
//     int h;
//     int m;
// };

// enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};


// struct Movie {
//     string title;
//     Genre genre;     // only one genre per movie
//     int duration;    // in minutes
// };

// struct TimeSlot {
//     Movie movie;     // what movie
//     Time startTime;  // when it starts
// };

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
    int totalhour = time0.h;

    while(totalMin > 60){
        totalMin -= 60;
        totalhour += 1;
    }

    Time  added = {totalhour,totalMin};

    return added;
}


//Task C
string TimeSlotString(TimeSlot ts){ //Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]
//The ending time is the starting time + movie duration.
    string movieinfo;
    string genre;
    string movieName = ts.movie.title;
    string duration = to_string(ts.movie.duration);
    
    Time endtime = addMinutes(ts.startTime, ts.movie.duration);

    switch (ts.movie.genre) {
        case ACTION   : genre = " ACTION "; break;
        case COMEDY   : genre = " COMEDY "; break;
        case DRAMA    : genre = " DRAMA ";  break;
        case ROMANCE  : genre = " ROMANCE "; break;
        case THRILLER : genre = " THRILLER "; break;
    }
    
    movieinfo = movieName + genre + "(" + duration + " min) " + "[starts at " + printTime(ts.startTime) + ", ends by " + printTime(endtime) + "]";
    return movieinfo;
}



//Task D
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
//starttime and duration

    TimeSlot movieAfter;
    Time timeNext = addMinutes(ts.startTime,ts.movie.duration);
    movieAfter = {nextMovie, timeNext}; 

    return movieAfter;

}

//Task E
bool timeOverlap(TimeSlot ts1, TimeSlot ts2){

    bool overlap = false;
    Time earlier;
    Time later;
    int gapTime = minutesUntil(ts1.startTime, ts2.startTime); //either neg or pos
    int duration1;
    int duration2;

    if(gapTime > 0){//pos means ts1 has an ealier time
        earlier = ts1.startTime;
        duration1 = ts1.movie.duration;
        later = ts2.startTime;
        duration2 = ts2.movie.duration;
    }else if(gapTime < 0){//neg means ts2 has an ealier time
        earlier = ts2.startTime;
        duration1 = ts2.movie.duration;
        later = ts1.startTime;
        duration2 = ts1.movie.duration;
    }

    int lowerBound = minutesSinceMidnight(earlier);
    int upperBound = minutesSinceMidnight(addMinutes(earlier,duration1));

    int laterMin = minutesSinceMidnight(later);

    for(lowerBound;lowerBound<upperBound;lowerBound++){
        if(lowerBound == laterMin){
            overlap = true;
        }
    }

    return overlap;

}


