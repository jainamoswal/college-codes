#include<iostream>
using namespace std;

int main(){
    // define variables
    int number;
    // ask for number
    cout<<endl<<"Enter number : ";
    cin>>number;
    // check if number is even or odd.
	if (number%2==0){ // number is even
		cout<<endl<<number<<" number is even.";
	} else { // number is odd
		cout<<endl<<number<<" number is odd.";
	}
    return 0;
}
