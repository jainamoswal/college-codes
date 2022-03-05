#include<iostream>
using namespace std;

int main(){
    // define variables
    int numberOne, numberTwo;
    // ask for two inputs
    cout<<endl<<"Enter number one : ";
    cin>>numberOne;
    cout<<endl<<"Enter number two : ";
    cin>>numberTwo;
    // check the greater using if-else loop
    if (numberOne>numberTwo){ // runs if numberOne is greater
        cout<<endl<<numberOne<<" is greater!!";
    } else if (numberTwo>numberOne){ // runs if numberTwo is greater
        cout<<endl<<numberTwo<<" is greater!!";
    } else { // runs by default, if both conditions return False
        cout<<endl<<"Both are same!!";
    }
    return 0;
}
