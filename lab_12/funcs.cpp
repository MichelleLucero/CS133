#include <iostream>
#include <ctype.h>

using namespace std;

//Task A
void printRange(int left, int right){
    
    if(left < right){
        cout<< "";
        return;
    } 
    
    
    cout << left << " ";
    printRange(left+1,right);

}

//Task B
int sumRange(int left, int right){


    if(left < right){
        
        return left + sumRange(left + 1,right);

    }
    
    return left;
}



//Task C
int sumArrayInRange(int *arr, int left, int right){
  if(left == right){
    return arr[left];
  }
  return arr[left]+sumArrayInRange(arr, left+1, right);
}


int sumArray(int *arr, int size){
 return sumArrayInRange(arr, 0, size-1);
}

//Task D
bool isAlphanumeric(string s){
  if(s == ""){
    return true;
  }
  return isalnum(s[0]) && isAlphanumeric(s.substr(1, s.length()-1));
}

//Task E
bool nestedParens(string s){
  if(s == ""){
    return true;
  }
  if(!(s[0] == '(' && s[s.length()-1] == ')')){
    return false;
  }
  return nestedParens(s.substr(1, s.length()-2));

}

//Task F
bool div_help(int *prices, int size, int a, int b){
  if (size == 0){
    return (a == b);
  }
  else if(div_help(prices, size - 1, a + prices[size-1], b)){
    return true;

  }
  else if(div_help(prices, size - 1, a, b + prices[size-1])){
    return true;
  }
  return false;
}

bool divisible(int *prices, int size){
  int sum = sumArray(prices, size);
  if (sum % 2 != 0){
    return false;
  }
  return div_help(prices,size, 0, 0);
}




