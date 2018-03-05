
/*
Author: Michelle Lucero
Course: CSCI-136
Instructor: Mike Zamansky
Assignment: Lab 4

Functions printing shapes using "*" and " "

*/

#include <iostream>
#include <string>
#include "funcs.h"
using namespace std;


//Task A: Box 
string box(int width, int height){

string ash;

    for(int row = 0; row < height; row++){
        for(int col = 0; col < width; col++){
            ash += "*"; 

            if(col == width-1){
                ash += "\n";  
            }
        }
    
    }
    return ash;

}

//Task B. Checkerboard
string checkerboard(int width, int height){

string ash;

    for (int row = 0; row < height; row++) {

        for (int col = 0; col < width; col++) {
            if(col % 2 == 0 && row % 2 == 0){

                ash += "* ";
            }
            
            
            else if(col % 2 != 0 && row % 2 != 0){
                ash += " *";
            }
            
        }
        ash += "\n"; 
    }
    return ash;
}

//Task C. Cross
string cross(int size){
string ash;

int re_row = 0;
int re_col = size - 1;
    for (int row = 0; row < size; row++) {

        for (int col = 0; col < size; col++) {

            if(row == re_row && col == re_col){
                ash += "*";
                re_row += 1;
                re_col -= 1;
                
            }
    
            else if(row == col){
                ash += "*";
            }

            else{
                ash += " ";
            }
            
        }
        ash += "\n"; 
    }
    return ash;
}

//Task D. Lower triangle
string lower(int length){
string ash;

    for(int row = 0; row < length; row++){
        for(int col = 0; col < length; col++){

            if(col <= row){
                ash += "*"; 
            }

            
            else{
                ash += " ";
            }

        }
        ash += "\n"; 
    }
    return ash;

}

//Task E. Upper triangle 
string upper(int length){
string ash;

    for(int row = 0; row < length; row++){
        for(int col = 0; col < length; col++){

            if(col >= row){
                ash += "*"; 
            }

            
            else{
                ash += " ";
            }

        }
        ash += "\n"; 
    }
    return ash;

}


//Task F. Upside-down trapezoid
string trapezoid(int width, int height){
    string ash;
    int spaces = 0;
    int stars = width;

    if(width/2 < height){
        return "Impossible ash!";
    }


    else{
        for(int row = 0; row < height; row++){
            for(int col = 0; col < spaces; col++){
                ash += " ";

            } 
            for(int i = 0; i < stars; i++){

                ash+= "*";
            }
            
            ash += "\n"; 
            spaces += 1;
            stars -= 2;
        }
        return ash;
    }

}

//Task G. Checkerboard (3x3)
string checkerboard33(int width, int height){
string ash;

	for(int row=0; row<height; row++){ 		
		if((row%6)<3){							
			for(int col=0; col<width; col++){			
				if((col%6)<3){						
					ash+='*';
				}
				else{
					ash+=' ';
				}
			}
		}

		else{									
			for(int col=0; col<width; col++){			
				if((col%6)<3){
					ash+=' ';
				}
				else{
					ash+='*';
				}
			}

		}
		ash+='\n';
	}

return ash;	
}

