#include<iostream>
using namespace std;

int main(){
  // define variable
  int times, i;
  // Ask for input
  cout<<endl<<"> How many times you want to print ? ";
  cout<<endl<<"> ";
  cin>>times;
  // using for loop 
  /*for (i=0; i<times; i++){
	  cout<<"#";
  }*/

  // using while loop
  while(times>0){
	  cout<<"#";
	  times--;
  }

  return 0;
  }
