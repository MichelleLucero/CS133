#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "labstructs.h"

Movie movie1 = {"Back to the Future", COMEDY, 116};

TimeSlot morning = {movie1, {9, 15}};

Movie movie2={"The Last Airbender", ACTION, 103};

TimeSlot evening={movie2, {12, 10}};

Movie movie3={"The Shape of Water", ROMANCE, 123};

TimeSlot secondEvening={movie3, {10, 13}};

//TASK A

TEST_CASE("Testing minutesSinceMidnight(Time time"){

	CHECK(minutesSinceMidnight({3, 30})==210);
	CHECK(minutesSinceMidnight({22, 15})==1335);
}

TEST_CASE("Testing minutesUntil(Time earlier, Time later)"){

	CHECK(minutesUntil({10,30}, {13,40})==190);
	CHECK(minutesUntil({16,30}, {13,30})==-180);
}

//TASK B

TEST_CASE("Testing addMinutes(Time time0, int min)"){

	CHECK(printTime(addMinutes({8, 10}, 75))=="9:25");
	CHECK(printTime(addMinutes({3, 36}, 77))=="4:53");
}

//TASK C

TEST_CASE("Testing TimeSlotString(TimeSlot ts)"){

	CHECK(TimeSlotString(morning)=="Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]");
	CHECK(TimeSlotString(evening)=="The Last Airbender ACTION (103 min) [starts at 12:10, ends by 13:53]");

}

//TASK D

TEST_CASE("Testing scheduleAfter(TimeSlot ts, Movie nextMovie)"){

	CHECK(printTime(scheduleAfter(evening, movie2).startTime)=="13:53");
	CHECK(printTime(scheduleAfter(morning, movie1).startTime)=="11:11");
}

//TASK E

TEST_CASE("Testing timeOverlap(TimeSlot ts1, TimeSlot ts2)"){

	CHECK(timeOverlap(evening,morning)==false);
	CHECK(timeOverlap(evening, secondEvening)==true);
}