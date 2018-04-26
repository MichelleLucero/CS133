#include <iostream>

using namespace std;

//char board[6][7];

char buildgrid(string player, char playerchoice){
    char board[6][7];
    for(int row=0; row<6; row++){
        for(int col=0; col<7; col++){
            board[row][col] = playerchoice; // no clear instructions on how to update
            cout << board[row][col] << " "; 
        }
        cout<<endl;
    }
}


int main(){
cout<< buildgrid();
}