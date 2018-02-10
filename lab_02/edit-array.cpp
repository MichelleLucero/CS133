/*
Author: Michelle Lucero
Course: CSCI-136
Instructor: Mr.Zamansky
Assignment: Edit array , Lab2C

This program uses an array with 10 cells to update a user's chosen index and value of the array.
*/




#include <iostream>

using namespace std;

int main(){

    int myData[10];

    cout<< "Element  -  Value"<< endl;

    for(int x=0;x<10; x++){
        myData[x] = 1;
        cout<< x << "-------"<<myData[x]<<endl;
    }

        int index;
        int value;

    do{
        cout<<"Input cell index: " <<endl;
        cin>>index;
        cout<<"New value: "<<endl;
        cin>>value;

        if(index>=10 || index <0){
            cout << "Index is out of range. Exit"<<endl;
            break;
        }

        myData[index]= value;

        for(int i=0;i<10;i++){
            cout<< i << "-------"<< myData[i] <<endl;
        }
         
    }while(value >= 0 && value < 10);

    cout << endl;

    return 0;
}