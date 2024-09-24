#include<iostream>
using namespace std;

//driver code
int main(){
  //switch variable
  char x ='A';
  
  //switch statement
  switch (x){
    case'A':
    cout<<"choice is A";
    break;
    case'B':
    cout<<"choice is B";
    break;
    case'C':
    cout<<"choice is C";
    break;
    default:
    cout<<"choice other than A, B and C";
    break;
  }
  return 0;
}