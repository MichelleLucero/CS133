#include<iostream>

using namespace std;

//Task A
void printRange(int left, int right){
    
    if(left > right){
        cout<< "0";
    } 
    
    else{
        cout << left << " ";
        printRange(left+1,right);
    }

}

//Task B
int sumRange(int left, int right){


    if(left < right){
        
        return left + sumRange(left + 1,right);

    }

}


//Task C
int sumArray(int *arr, int size){

    
}








int main(){

//printRange(-2, 10);
int x = sumRange(5, 4);
cout << "This is " << x << endl;   // 6

int y = sumRange(-2, 10);
cout << "That is " << y << endl;   // 52

}