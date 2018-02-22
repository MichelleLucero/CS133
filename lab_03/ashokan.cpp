#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

double east_storage(string input_date){
  string date;
  double eastSt, eastEl, westSt, westEl;
  double level = 0.0;
  ifstream fin("current_reservoir_levels.tsv");
  if(fin.fail()){
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
  }
  string junk; //new string variable
  getline(fin,junk); //read one line from the file
  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){
    if(date == input_date){
     level = eastSt;
    }
  }
  fin.close();
  return level;
}

int main(){
  cout << "East storage levels on 01/11/2016 is  " << east_storage("01/11/2016") << endl;
  return 0;
}