#include <iostream>
#include "funcs.h"

using namespace std;

int main(){
cout<<"Box"<<endl;
    cout<<box(8, 2)<<endl;
    cout<<box(5, 5)<<endl;

cout<<"Checkerboard"<<endl;
    cout<<checkerboard(5, 6)<<endl;
    cout<<checkerboard(8, 7)<<endl;

cout<<"Cross"<<endl;
    cout<<cross(8)<<endl;
    cout<<cross(10)<<endl;

cout<<"Lower"<<endl;
    cout<<lower(6)<<endl;
    cout<<lower(3)<<endl;

cout<<"Upper"<<endl;
    cout<<upper(6)<<endl;
    cout<<upper(3)<<endl;

cout<<"Upside down trapezoid"<<endl;
    cout<<trapezoid(12, 5)<<endl;
    cout<<trapezoid(12, 7)<<endl;

cout<<"checkerboard33"<<endl;
    cout<<checkerboard33(27, 27)<<endl;
    cout<<checkerboard33(16, 11)<<endl;

 return 0;
}
