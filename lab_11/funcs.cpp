#include<iostream>
#include<cmath>

using namespace std;



struct Coord3D {
    double x;
    double y;
    double z;
};

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



int main() {
    Coord3D pointP = {10, 20, 30};
    cout << length(&pointP) << endl; // would print 37.4166

    Coord3D pointQ = {-20, 21, -22};

    cout << "Address of P: " << &pointP << endl;
    cout << "Address of Q: " << &pointQ << endl << endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
    cout << "ans = " << ans << endl; // So which point is farther?
}