#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "def.h"
#include "doctest.h"

using namespace std;


Coord3D *pointA=createCoord3D(10, 20, 30);
Coord3D *pointB=createCoord3D(-20, 21, -22);
Coord3D *pos = createCoord3D(0, 0, 100.0);
Coord3D *vel = createCoord3D(1, -5, 0.2);
Coord3D *position=createCoord3D(10, 20, 30);
Coord3D *velocity=createCoord3D(5.5, -1.4, 7.77);



TEST_CASE("Testing length"){

	CHECK(int(length(pointA))==int(37.4166));
}



TEST_CASE("Testing fartherFromOrigin"){

	CHECK(fartherFromOrigin(pointA, pointB)==pointA);
}



TEST_CASE("Testing move"){
  Coord3D pos = {0, 0, 50.0};
  Coord3D vel = {1, 5, -2};
  move(&pos, &vel, 1.0); 
  CHECK(pos.x == 1);
  CHECK(pos.y == 5);
  CHECK(pos.z == 48);
}



TEST_CASE("Testing createCoord3D"){
  double x = 0; double y = 10; double z = 20;
  Coord3D *ppos = createCoord3D(x,y,z);
  x = 3.2; y = -1.9; z = 3.42;
  Coord3D *pvel = createCoord3D(x,y,z);
  move(ppos, pvel, 5.0);
  CHECK((*ppos).x == 16.0);
  CHECK((*ppos).y == 0.5);
  CHECK((int)(*ppos).z == 37);
  deleteCoord3D(ppos); 
  deleteCoord3D(pvel);
}