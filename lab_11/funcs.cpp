#include <iostream>
#include <math.h>
#include "def.h"

using namespace std;



//Task A
double length(Coord3D *p){ // computes distance from the origin to the point P

    double x = p -> x;
    double y = p -> y;
    double z = p -> z;

    double beforeSquare = pow(x,2) + pow(y,2) + pow(z,2);
    double squared = sqrt(beforeSquare);

    return squared;
}

//Task B
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){

    double d1 = length(p1);
    double d2 = length(p2);

    if(d1 > d2 ){
        return p1;
    }else if(d2 > d1){
        return p2;
    }

}


//Task C
void move(Coord3D *ppos, Coord3D *pvel, double dt){
  (*ppos).x += (*pvel).x * dt;
  (*ppos).y += (*pvel).y * dt;
  (*ppos).z += (*pvel).z * dt;  
  
  }

//Task E
Coord3D* createCoord3D(double x, double y, double z){

	Coord3D *vel = new Coord3D;
	vel->x=x;
	vel->y=y;
	vel->z=z;

	return vel;
}

void deleteCoord3D(Coord3D *p){
  delete p;
}

Particle* createParticle(double x, double y, double z,double vx, double vy, double vz){
	Particle *cp=new Particle;
	Coord3D p;
	p.x = x;
	p.y = y;
	p.z = z;
	cp-> pos = p;

	Coord3D v;
	v.x = x;
	v.y = y;
	v.z = z;
	cp->vel=v;

	return cp;
}

void setVelocity(Particle *p, double vx, double vy, double vz){

	Coord3D v;
	v.x = vx;
	v.y = vy;
	v.z = vz;
	p-> vel= v;

}

Coord3D getPosition(Particle *p){

	return (*p).pos;

}

void move(Particle *p, double dt){

	Coord3D cp;
	cp.x = p-> pos.x+p ->vel.x * dt;
	cp.y = p-> pos.y+p ->vel.y * dt;
	cp.z = p-> pos.z+p ->vel.z * dt;
	p-> pos = cp;

}

void deleteParticle(Particle *p){

	delete p;
}

