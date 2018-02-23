#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "funcs.h"

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


double mineast(){
  string date;
  double eastSt, eastEl, westSt, westEl;
  ifstream fin("current_reservoir_levels.tsv");
  if(fin.fail()){
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
  }
  string junk; //new string variable
  getline(fin,junk); //read one line from the file
  fin >> date >> eastSt >> eastEl >> westSt >> westEl;
  double min = eastSt;
  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){
    if(eastSt < min){
      min = eastSt;
    }
  }
  fin.close();
  return min;

}

double maxeast(){
  string date;
  double eastSt, eastEl, westSt, westEl;
  ifstream fin("current_reservoir_levels.tsv");
  if(fin.fail()){
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
  }
  string junk; //new string variable
  getline(fin,junk); //read one line from the file
  fin >> date >> eastSt >> eastEl >> westSt >> westEl;
  double max = eastSt;
  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){
    if(eastSt > max){
      max = eastSt;
    }
  }
  fin.close();
  return max;
}


void compare_values(double east, double west){
  if(east == west){
    cout << "Equal" << endl;
  }

  if(east > west){
    cout << "East" << endl;
  }

  if(west > east){
    cout << "West" << endl;
  }
}


void compare(string input_start_date, string input_end_date){
  string date;
  double eastSt, eastEl, westSt, westEl;
  
  ifstream fin("current_reservoir_levels.tsv");
  if(fin.fail()){
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
  }
  string junk; //new string variable
  getline(fin,junk); //read one line from the file
  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){
    if(date >= input_start_date){
     cout << date << " ";
     compare_values(eastEl, westEl);
      if(date == input_end_date)
        break;
    }
  }
  fin.close();
}

void reverse_order(string early,string later){
  string date;
  double eastSt, eastEl, westSt, westEl;
  
  ifstream fin("current_reservoir_levels.tsv");
  if(fin.fail()){
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
  }
  string junk; //new string variable
  getline(fin,junk); //read one line from the file
  string reverse[5];
  int iter = 0;
  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){
    if(date >= early){
      reverse[iter] = date + " " + to_string(westEl) + " ft";
      iter++;
      if(date == later)
        break;
    }
  }
  for(int f = iter; f >= 0; f--){
      cout << reverse[f] << endl;
    }
  fin.close();
}




