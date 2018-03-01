#include <iostream>
#include <string>
using namespace std;
//#include "funcs.h"


string box(int width, int height){

string ash;

    for(int i = 0; i < height; i++){
        for(int x = 0; x < width; x++){
            ash += "*"; 

            if(x == width-1){
                ash += "\n";  
            }
        }
    
    }
    return ash;

}

string checkerboard(int width, int height){

string ash;

    for (int row = 0; row < height; row++) {

        if(row % 2 == 0){
            ash = "*";
            }
        else if(col % 2 != 0){
            ash = " ";
            }

        for (int col = 0; col < width; col++) {
            if(col % 2 == 0){

                ash = "*";
            }
            
            if(col % 2 != 0){

                ash = " ";
            }

            if(col == width-1){
                ash += "\n";  
            }
            
        }
    }
    return ash;

}








int main(){
    //string b = box(2,3);
    cout << checkerboard(2,3);
    return 0;
}
