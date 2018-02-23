#include <iostream>
#include "funcs.h"



int main(){
  cout << "East storage levels on 01/11/2016 is  " << east_storage("01/11/2016") << endl;
  cout << "The min East storage is " << mineast() << endl;
  cout << "The max East storage is " << maxeast() << endl; 
  //cout << "Compare " << 
  compare("09/13/2016","09/17/2016");
  //<< endl;
  cout << "Reverse Order" <<endl;
  reverse_order("05/29/2016","06/02/2016");
  return 0;

}